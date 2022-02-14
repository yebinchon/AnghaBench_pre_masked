
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_dev {int irq; int unit_address; } ;
struct ibmvmc_crq_msg {int dummy; } ;
struct crq_queue {int size; struct ibmvmc_crq_msg* msgs; int msg_token; int lock; scalar_t__ cur; } ;
struct crq_server_adapter {int dev; int work_task; struct crq_queue queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,struct ibmvmc_crq_msg*,int,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int,int ) ;
 int FUNC_5 (unsigned long) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_6 ;
 int FUNC_8 (struct crq_server_adapter*) ;
 int VAR_7 ;
 int FUNC_9 (int ,int ,int ,int) ;
 scalar_t__ FUNC_10 (int,int ,int ,char*,void*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ,unsigned long) ;
 int FUNC_13 (int *) ;
 struct vio_dev* FUNC_14 (int ) ;
 int FUNC_15 (struct vio_dev*) ;

__attribute__((used)) static int FUNC_16(struct crq_server_adapter *VAR_8)
{
 struct vio_dev *VAR_9 = FUNC_14(VAR_8->dev);
 struct crq_queue *VAR_10 = &VAR_8->queue;
 int VAR_11 = 0;
 int VAR_12 = 0;

 VAR_10->msgs = (struct ibmvmc_crq_msg *)FUNC_6(VAR_2);

 if (!VAR_10->msgs)
  goto malloc_failed;

 VAR_10->size = VAR_5 / sizeof(*VAR_10->msgs);

 VAR_10->msg_token = FUNC_2(VAR_8->dev, VAR_10->msgs,
       VAR_10->size * sizeof(*VAR_10->msgs),
       VAR_0);

 if (FUNC_3(VAR_8->dev, VAR_10->msg_token))
  goto map_failed;

 VAR_12 = FUNC_9(VAR_3,
       VAR_9->unit_address,
       VAR_10->msg_token, VAR_5);
 VAR_11 = VAR_12;

 if (VAR_11 == VAR_4)
  VAR_11 = FUNC_8(VAR_8);

 if (VAR_11 == 2) {
  FUNC_1(VAR_8->dev, "Partner adapter not ready\n");
  VAR_12 = 0;
 } else if (VAR_11 != 0) {
  FUNC_0(VAR_8->dev, "Error %d opening adapter\n", VAR_11);
  goto reg_crq_failed;
 }

 VAR_10->cur = 0;
 FUNC_11(&VAR_10->lock);

 FUNC_12(&VAR_8->work_task, VAR_7, (unsigned long)VAR_8);

 if (FUNC_10(VAR_9->irq,
   VAR_6,
   0, "ibmvmc", (void *)VAR_8) != 0) {
  FUNC_0(VAR_8->dev, "couldn't register irq 0x%x\n",
   VAR_9->irq);
  goto req_irq_failed;
 }

 VAR_11 = FUNC_15(VAR_9);
 if (VAR_11 != 0) {
  FUNC_0(VAR_8->dev, "Error %d enabling interrupts!!!\n", VAR_11);
  goto req_irq_failed;
 }

 return VAR_12;

req_irq_failed:



 FUNC_13(&VAR_8->work_task);
 FUNC_7(VAR_9->unit_address);
reg_crq_failed:
 FUNC_4(VAR_8->dev,
    VAR_10->msg_token,
    VAR_10->size * sizeof(*VAR_10->msgs), VAR_0);
map_failed:
 FUNC_5((unsigned long)VAR_10->msgs);
malloc_failed:
 return -VAR_1;
}
