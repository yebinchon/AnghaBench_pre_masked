
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct subchannel_id {int sch_no; } ;
struct TYPE_6__ {int sch_no; } ;
struct TYPE_8__ {scalar_t__ cda; int count; int flags; int cmd_code; } ;
struct TYPE_5__ {int count; int cmd; } ;
struct qdio_irq {scalar_t__ state; int setup_mutex; TYPE_2__ schid; TYPE_4__ ccw; scalar_t__ qdr; TYPE_1__ equeue; } ;
struct qdio_initialize {struct ccw_device* cdev; } ;
struct ccw_device {TYPE_3__* private; } ;
typedef scalar_t__ addr_t ;
struct TYPE_7__ {int wait_q; struct qdio_irq* qdio_data; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (struct ccw_device*,struct subchannel_id*) ;
 int FUNC_3 (struct ccw_device*,int ) ;
 int FUNC_4 (struct ccw_device*,TYPE_4__*,int ,int ,int ) ;
 int FUNC_5 (struct ccw_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct qdio_irq*) ;
 int FUNC_9 (struct qdio_irq*) ;
 int FUNC_10 (struct qdio_irq*) ;
 int FUNC_11 (struct qdio_irq*,struct ccw_device*) ;
 int FUNC_12 (struct qdio_irq*,struct ccw_device*) ;
 int FUNC_13 (struct qdio_initialize*) ;
 int FUNC_14 (struct qdio_irq*) ;
 int FUNC_15 (struct ccw_device*,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,int,int ) ;

int FUNC_19(struct qdio_initialize *VAR_8)
{
 struct ccw_device *VAR_9 = VAR_8->cdev;
 struct subchannel_id VAR_10;
 struct qdio_irq *VAR_11;
 int VAR_12;

 FUNC_2(VAR_9, &VAR_10);
 FUNC_1("qestablish:%4x", VAR_10.sch_no);

 VAR_11 = VAR_9->private->qdio_data;
 if (!VAR_11)
  return -VAR_2;

 FUNC_6(&VAR_11->setup_mutex);
 FUNC_13(VAR_8);

 VAR_12 = FUNC_9(VAR_11);
 if (VAR_12) {
  FUNC_7(&VAR_11->setup_mutex);
  FUNC_15(VAR_9, VAR_5);
  return VAR_12;
 }


 VAR_11->ccw.cmd_code = VAR_11->equeue.cmd;
 VAR_11->ccw.flags = VAR_0;
 VAR_11->ccw.count = VAR_11->equeue.count;
 VAR_11->ccw.cda = (u32)((addr_t)VAR_11->qdr);

 FUNC_16(FUNC_5(VAR_9));
 FUNC_3(VAR_9, 0);

 VAR_12 = FUNC_4(VAR_9, &VAR_11->ccw, VAR_4, 0, 0);
 FUNC_17(FUNC_5(VAR_9));
 if (VAR_12) {
  FUNC_0("%4x est IO ERR", VAR_11->schid.sch_no);
  FUNC_0("rc:%4x", VAR_12);
  FUNC_7(&VAR_11->setup_mutex);
  FUNC_15(VAR_9, VAR_5);
  return VAR_12;
 }

 FUNC_18(VAR_9->private->wait_q,
  VAR_11->state == VAR_7 ||
  VAR_11->state == VAR_6, VAR_3);

 if (VAR_11->state != VAR_7) {
  FUNC_7(&VAR_11->setup_mutex);
  FUNC_15(VAR_9, VAR_5);
  return -VAR_1;
 }

 FUNC_14(VAR_11);

 FUNC_8(VAR_11);


 FUNC_10(VAR_11);

 FUNC_7(&VAR_11->setup_mutex);
 FUNC_11(VAR_11, VAR_9);
 FUNC_12(VAR_11, VAR_9);
 return 0;
}
