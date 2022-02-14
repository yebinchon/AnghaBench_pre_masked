
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ibmvnic_crq {int dummy; } ibmvnic_crq ;
struct device {int dummy; } ;
struct vio_dev {int unit_address; int irq; struct device dev; } ;
struct ibmvnic_crq_queue {int size; union ibmvnic_crq* msgs; int msg_token; int lock; scalar_t__ cur; int name; } ;
struct ibmvnic_adapter {int tasklet; struct vio_dev* vdev; int netdev; struct ibmvnic_crq_queue crq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct device*,char*,int,...) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,union ibmvnic_crq*,int,int ) ;
 scalar_t__ FUNC_4 (struct device*,int ) ;
 int FUNC_5 (struct device*,int ,int,int ) ;
 int FUNC_6 (unsigned long) ;
 scalar_t__ FUNC_7 (int ) ;
 int VAR_9 ;
 int FUNC_8 (struct ibmvnic_adapter*) ;
 scalar_t__ VAR_10 ;
 int FUNC_9 (int ,char*,int ) ;
 int FUNC_10 (int ,int,...) ;
 int FUNC_11 (int ,int ,int ,int ,struct ibmvnic_adapter*) ;
 int FUNC_12 (int ,int,char*,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,void*,unsigned long) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct vio_dev*) ;

__attribute__((used)) static int FUNC_17(struct ibmvnic_adapter *VAR_11)
{
 struct ibmvnic_crq_queue *VAR_12 = &VAR_11->crq;
 struct device *VAR_13 = &VAR_11->vdev->dev;
 struct vio_dev *VAR_14 = VAR_11->vdev;
 int VAR_15, VAR_16 = -VAR_1;

 if (VAR_12->msgs)
  return 0;

 VAR_12->msgs = (union ibmvnic_crq *)FUNC_7(VAR_2);


 if (!VAR_12->msgs)
  return -VAR_1;

 VAR_12->size = VAR_8 / sizeof(*VAR_12->msgs);
 VAR_12->msg_token = FUNC_3(VAR_13, VAR_12->msgs, VAR_8,
     VAR_0);
 if (FUNC_4(VAR_13, VAR_12->msg_token))
  goto map_failed;

 VAR_15 = FUNC_10(VAR_6, VAR_14->unit_address,
    VAR_12->msg_token, VAR_8);

 if (VAR_15 == VAR_7)

  VAR_15 = FUNC_8(VAR_11);
 VAR_16 = VAR_15;

 if (VAR_15 == VAR_4) {
  FUNC_2(VAR_13, "Partner adapter not ready\n");
 } else if (VAR_15) {
  FUNC_2(VAR_13, "Error %d opening adapter\n", VAR_15);
  goto reg_crq_failed;
 }

 VAR_16 = 0;

 FUNC_14(&VAR_11->tasklet, (void *)VAR_10,
       (unsigned long)VAR_11);

 FUNC_9(VAR_11->netdev, "registering irq 0x%x\n", VAR_14->irq);
 FUNC_12(VAR_12->name, sizeof(VAR_12->name), "ibmvnic-%x",
   VAR_11->vdev->unit_address);
 VAR_15 = FUNC_11(VAR_14->irq, VAR_9, 0, VAR_12->name, VAR_11);
 if (VAR_15) {
  FUNC_1(VAR_13, "Couldn't register irq 0x%x. rc=%d\n",
   VAR_14->irq, VAR_15);
  goto req_irq_failed;
 }

 VAR_15 = FUNC_16(VAR_14);
 if (VAR_15) {
  FUNC_1(VAR_13, "Error %d enabling interrupts\n", VAR_15);
  goto req_irq_failed;
 }

 VAR_12->cur = 0;
 FUNC_13(&VAR_12->lock);

 return VAR_16;

req_irq_failed:
 FUNC_15(&VAR_11->tasklet);
 do {
  VAR_15 = FUNC_10(VAR_5, VAR_14->unit_address);
 } while (VAR_15 == VAR_3 || FUNC_0(VAR_15));
reg_crq_failed:
 FUNC_5(VAR_13, VAR_12->msg_token, VAR_8, VAR_0);
map_failed:
 FUNC_6((unsigned long)VAR_12->msgs);
 VAR_12->msgs = ((void*)0);
 return VAR_16;
}
