
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct irb {int scsw; } ;
struct ccw_device {TYPE_4__* private; int (* handler ) (struct ccw_device*,int ,struct irb*) ;} ;
typedef enum dev_event { ____Placeholder_dev_event } dev_event ;
struct TYPE_7__ {scalar_t__ doverify; scalar_t__ dosense; } ;
struct TYPE_5__ {int devno; int ssid; } ;
struct TYPE_8__ {TYPE_3__ flags; int wait_q; int state; TYPE_2__* dma_area; TYPE_1__ dev_id; } ;
struct TYPE_6__ {int irb; } ;


 int FUNC_0 (int ,char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ccw_device*,struct irb*) ;
 int FUNC_2 (struct ccw_device*,struct irb*) ;
 scalar_t__ FUNC_3 (struct ccw_device*) ;
 int FUNC_4 (struct ccw_device*,struct irb*) ;
 int FUNC_5 (struct ccw_device*,int ) ;
 int VAR_5 ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct ccw_device*,int ,struct irb*) ;
 struct irb* FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void
FUNC_13(struct ccw_device *VAR_6, enum dev_event VAR_7)
{
 struct irb *VAR_8;

 VAR_8 = FUNC_11(&VAR_5);

 if (FUNC_9(&VAR_8->scsw) ==
     (VAR_4 | VAR_3)) {
  if (FUNC_7(&VAR_8->scsw) == 1)

   FUNC_4(VAR_6, VAR_8);
  else {
   FUNC_0(0, "0.%x.%04x: unsolicited "
          "interrupt during w4sense...\n",
          VAR_6->private->dev_id.ssid,
          VAR_6->private->dev_id.devno);
   if (VAR_6->handler)
    VAR_6->handler (VAR_6, 0, VAR_8);
  }
  return;
 }





 if (FUNC_8(&VAR_8->scsw) &
     (VAR_1 | VAR_2)) {
  VAR_6->private->flags.dosense = 0;
  FUNC_6(&VAR_6->private->dma_area->irb, 0, sizeof(struct irb));
  FUNC_2(VAR_6, VAR_8);
  goto call_handler;
 }

 FUNC_1(VAR_6, VAR_8);
 if (VAR_6->private->flags.dosense) {

  FUNC_4(VAR_6, VAR_8);
  return;
 }
call_handler:
 VAR_6->private->state = VAR_0;

 FUNC_12(&VAR_6->private->wait_q);

 if (FUNC_3(VAR_6) && VAR_6->private->flags.doverify)

  FUNC_5(VAR_6, 0);
}
