
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct subchannel_id {int sch_no; } ;
struct TYPE_3__ {int sch_no; } ;
struct qdio_irq {scalar_t__ state; int setup_mutex; scalar_t__ orig_handler; TYPE_1__ schid; } ;
struct ccw_device {TYPE_2__* private; scalar_t__ handler; } ;
struct TYPE_4__ {scalar_t__ intparm; int wait_q; struct qdio_irq* qdio_data; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ccw_device*,int ) ;
 int FUNC_4 (struct ccw_device*,struct subchannel_id*) ;
 int FUNC_5 (struct ccw_device*,int ) ;
 int FUNC_6 (struct ccw_device*) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ VAR_8 ;
 int FUNC_10 (struct qdio_irq*,scalar_t__) ;
 int FUNC_11 (struct qdio_irq*) ;
 int FUNC_12 (struct ccw_device*) ;
 int FUNC_13 (struct qdio_irq*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (struct qdio_irq*) ;
 int FUNC_17 (int ,int,int) ;

int FUNC_18(struct ccw_device *VAR_9, int VAR_10)
{
 struct qdio_irq *VAR_11 = VAR_9->private->qdio_data;
 struct subchannel_id VAR_12;
 int VAR_13;

 if (!VAR_11)
  return -VAR_0;

 FUNC_2(FUNC_7());
 FUNC_4(VAR_9, &VAR_12);
 FUNC_1("qshutdown:%4x", VAR_12.sch_no);

 FUNC_8(&VAR_11->setup_mutex);




 if (VAR_11->state == VAR_6) {
  FUNC_9(&VAR_11->setup_mutex);
  return 0;
 }





 FUNC_10(VAR_11, VAR_7);

 FUNC_16(VAR_11);
 FUNC_12(VAR_9);
 FUNC_11(VAR_11);


 FUNC_14(FUNC_6(VAR_9));

 if (VAR_10 & VAR_3)
  VAR_13 = FUNC_3(VAR_9, VAR_2);
 else

  VAR_13 = FUNC_5(VAR_9, VAR_2);
 if (VAR_13) {
  FUNC_0("%4x SHUTD ERR", VAR_11->schid.sch_no);
  FUNC_0("rc:%4d", VAR_13);
  goto no_cleanup;
 }

 FUNC_10(VAR_11, VAR_4);
 FUNC_15(FUNC_6(VAR_9));
 FUNC_17(VAR_9->private->wait_q,
  VAR_11->state == VAR_6 ||
  VAR_11->state == VAR_5,
  10 * VAR_1);
 FUNC_14(FUNC_6(VAR_9));

no_cleanup:
 FUNC_13(VAR_11);


 if ((void *)VAR_9->handler == (void *)VAR_8) {
  VAR_9->handler = VAR_11->orig_handler;
  VAR_9->private->intparm = 0;
 }
 FUNC_15(FUNC_6(VAR_9));

 FUNC_10(VAR_11, VAR_6);
 FUNC_9(&VAR_11->setup_mutex);
 if (VAR_13)
  return VAR_13;
 return 0;
}
