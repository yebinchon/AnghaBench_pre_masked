
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct subchannel_id {int sch_no; } ;
struct TYPE_7__ {int sch_no; } ;
struct TYPE_8__ {scalar_t__ cda; int count; int flags; int cmd_code; } ;
struct TYPE_6__ {int count; int cmd; } ;
struct qdio_irq {int state; int setup_mutex; TYPE_3__ schid; TYPE_4__ ccw; TYPE_2__ aqueue; } ;
struct ccw_device {TYPE_1__* private; } ;
struct TYPE_5__ {struct qdio_irq* qdio_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

 int VAR_8 ;

 int FUNC_2 (struct ccw_device*,struct subchannel_id*) ;
 int FUNC_3 (struct ccw_device*,int ) ;
 int FUNC_4 (struct ccw_device*,TYPE_4__*,int ,int ,int ) ;
 int FUNC_5 (struct ccw_device*) ;
 scalar_t__ FUNC_6 (struct qdio_irq*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct qdio_irq*,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct qdio_irq*) ;

int FUNC_14(struct ccw_device *VAR_9)
{
 struct subchannel_id VAR_10;
 struct qdio_irq *VAR_11;
 int VAR_12;

 FUNC_2(VAR_9, &VAR_10);
 FUNC_1("qactivate:%4x", VAR_10.sch_no);

 VAR_11 = VAR_9->private->qdio_data;
 if (!VAR_11)
  return -VAR_5;

 FUNC_8(&VAR_11->setup_mutex);
 if (VAR_11->state == VAR_8) {
  VAR_12 = -VAR_3;
  goto out;
 }

 VAR_11->ccw.cmd_code = VAR_11->aqueue.cmd;
 VAR_11->ccw.flags = VAR_1;
 VAR_11->ccw.count = VAR_11->aqueue.count;
 VAR_11->ccw.cda = 0;

 FUNC_11(FUNC_5(VAR_9));
 FUNC_3(VAR_9, VAR_0);

 VAR_12 = FUNC_4(VAR_9, &VAR_11->ccw, VAR_6,
         0, VAR_2);
 FUNC_12(FUNC_5(VAR_9));
 if (VAR_12) {
  FUNC_0("%4x act IO ERR", VAR_11->schid.sch_no);
  FUNC_0("rc:%4x", VAR_12);
  goto out;
 }

 if (FUNC_6(VAR_11))
  FUNC_13(VAR_11);


 FUNC_7(5);

 switch (VAR_11->state) {
 case 128:
 case 129:
  VAR_12 = -VAR_4;
  break;
 default:
  FUNC_10(VAR_11, VAR_7);
  VAR_12 = 0;
 }
out:
 FUNC_9(&VAR_11->setup_mutex);
 return VAR_12;
}
