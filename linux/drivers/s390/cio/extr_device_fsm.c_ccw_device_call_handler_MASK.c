
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct irb {int dummy; } ;
struct ccw_device {TYPE_3__* private; int (* handler ) (struct ccw_device*,int ,TYPE_4__*) ;} ;
struct TYPE_9__ {int scsw; } ;
struct TYPE_6__ {scalar_t__ fast; int repall; } ;
struct TYPE_8__ {TYPE_2__* dma_area; int intparm; TYPE_1__ options; } ;
struct TYPE_7__ {TYPE_4__ irb; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (struct ccw_device*,int ) ;
 int FUNC_1 (TYPE_4__*,int ,int) ;
 unsigned int FUNC_2 (int *) ;
 int FUNC_3 (struct ccw_device*,int ,TYPE_4__*) ;

__attribute__((used)) static int FUNC_4(struct ccw_device *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;
 VAR_6 = FUNC_2(&VAR_5->private->dma_area->irb.scsw);
 VAR_7 = (VAR_6 & VAR_3) ||
  (VAR_6 == (VAR_0 | VAR_4)) ||
  (VAR_6 == VAR_4);
 if (!VAR_7 &&
     !VAR_5->private->options.repall &&
     !(VAR_6 & VAR_1) &&
     !(VAR_5->private->options.fast &&
       (VAR_6 & VAR_2)))
  return 0;

 if (VAR_7)
  FUNC_0(VAR_5, 0);

 if (VAR_5->handler)
  VAR_5->handler(VAR_5, VAR_5->private->intparm,
         &VAR_5->private->dma_area->irb);

 FUNC_1(&VAR_5->private->dma_area->irb, 0, sizeof(struct irb));
 return 1;
}
