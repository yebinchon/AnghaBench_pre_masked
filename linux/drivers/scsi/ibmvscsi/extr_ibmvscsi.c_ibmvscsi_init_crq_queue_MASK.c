
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct viosrp_crq {int dummy; } ;
struct vio_dev {int irq; int unit_address; } ;
struct ibmvscsi_host_data {int dev; int srp_task; } ;
struct crq_queue {int size; struct viosrp_crq* msgs; int msg_token; int lock; scalar_t__ cur; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,struct viosrp_crq*,int,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int,int ) ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_8 ;
 int FUNC_9 (struct crq_queue*,struct ibmvscsi_host_data*) ;
 scalar_t__ VAR_9 ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,int ,...) ;
 scalar_t__ FUNC_12 (int,int ,int ,char*,void*) ;
 int FUNC_13 (struct ibmvscsi_host_data*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,void*,unsigned long) ;
 int FUNC_16 (int *) ;
 struct vio_dev* FUNC_17 (int ) ;
 int FUNC_18 (struct vio_dev*) ;

__attribute__((used)) static int FUNC_19(struct crq_queue *VAR_10,
       struct ibmvscsi_host_data *VAR_11,
       int VAR_12)
{
 int VAR_13;
 int VAR_14;
 struct vio_dev *VAR_15 = FUNC_17(VAR_11->dev);

 VAR_10->msgs = (struct viosrp_crq *)FUNC_8(VAR_1);

 if (!VAR_10->msgs)
  goto malloc_failed;
 VAR_10->size = VAR_7 / sizeof(*VAR_10->msgs);

 VAR_10->msg_token = FUNC_3(VAR_11->dev, VAR_10->msgs,
       VAR_10->size * sizeof(*VAR_10->msgs),
       VAR_0);

 if (FUNC_4(VAR_11->dev, VAR_10->msg_token))
  goto map_failed;

 FUNC_7();
 FUNC_13(VAR_11);

 VAR_14 = VAR_13 = FUNC_11(VAR_5,
    VAR_15->unit_address,
    VAR_10->msg_token, VAR_7);
 if (VAR_13 == VAR_6)

  VAR_13 = FUNC_9(VAR_10,
           VAR_11);

 if (VAR_13 == VAR_3) {

  FUNC_2(VAR_11->dev, "Partner adapter not ready\n");
  VAR_14 = 0;
 } else if (VAR_13 != 0) {
  FUNC_2(VAR_11->dev, "Error %d opening adapter\n", VAR_13);
  goto reg_crq_failed;
 }

 VAR_10->cur = 0;
 FUNC_14(&VAR_10->lock);

 FUNC_15(&VAR_11->srp_task, (void *)VAR_9,
       (unsigned long)VAR_11);

 if (FUNC_12(VAR_15->irq,
   VAR_8,
   0, "ibmvscsi", (void *)VAR_11) != 0) {
  FUNC_1(VAR_11->dev, "couldn't register irq 0x%x\n",
   VAR_15->irq);
  goto req_irq_failed;
 }

 VAR_13 = FUNC_18(VAR_15);
 if (VAR_13 != 0) {
  FUNC_1(VAR_11->dev, "Error %d enabling interrupts!!!\n", VAR_13);
  goto req_irq_failed;
 }

 return VAR_14;

      req_irq_failed:
 FUNC_16(&VAR_11->srp_task);
 VAR_13 = 0;
 do {
  if (VAR_13)
   FUNC_10(100);
  VAR_13 = FUNC_11(VAR_4, VAR_15->unit_address);
 } while ((VAR_13 == VAR_2) || (FUNC_0(VAR_13)));
      reg_crq_failed:
 FUNC_5(VAR_11->dev,
    VAR_10->msg_token,
    VAR_10->size * sizeof(*VAR_10->msgs), VAR_0);
      map_failed:
 FUNC_6((unsigned long)VAR_10->msgs);
      malloc_failed:
 return -1;
}
