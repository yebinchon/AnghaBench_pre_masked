
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union sub_crq {int dummy; } sub_crq ;
struct ibmvnic_sub_crq_queue {int size; union sub_crq* msgs; int msg_token; int irq; int hw_irq; int crq_num; int lock; struct ibmvnic_adapter* adapter; } ;
struct ibmvnic_adapter {int netdev; TYPE_1__* vdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int unit_address; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (struct device*,union sub_crq*,int,int ) ;
 scalar_t__ FUNC_3 (struct device*,int ) ;
 int FUNC_4 (struct device*,int ,int,int ) ;
 int FUNC_5 (unsigned long,int) ;
 int FUNC_6 (int ,int ,int,int *,int *) ;
 int FUNC_7 (struct ibmvnic_adapter*) ;
 int FUNC_8 (struct ibmvnic_sub_crq_queue*) ;
 struct ibmvnic_sub_crq_queue* FUNC_9 (int,int) ;
 int FUNC_10 (int ,char*,int ,int ,int ) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static struct ibmvnic_sub_crq_queue *FUNC_12(struct ibmvnic_adapter
       *VAR_6)
{
 struct device *VAR_7 = &VAR_6->vdev->dev;
 struct ibmvnic_sub_crq_queue *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_9(sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return ((void*)0);

 VAR_8->msgs =
  (union sub_crq *)FUNC_0(VAR_1 | VAR_5, 2);
 if (!VAR_8->msgs) {
  FUNC_1(VAR_7, "Couldn't allocate crq queue messages page\n");
  goto zero_page_failed;
 }

 VAR_8->msg_token = FUNC_2(VAR_7, VAR_8->msgs, 4 * VAR_4,
      VAR_0);
 if (FUNC_3(VAR_7, VAR_8->msg_token)) {
  FUNC_1(VAR_7, "Couldn't map crq queue messages page\n");
  goto map_failed;
 }

 VAR_9 = FUNC_6(VAR_6->vdev->unit_address, VAR_8->msg_token,
      4 * VAR_4, &VAR_8->crq_num, &VAR_8->hw_irq);

 if (VAR_9 == VAR_3)
  VAR_9 = FUNC_7(VAR_6);

 if (VAR_9 == VAR_2) {
  FUNC_1(VAR_7, "Partner adapter not ready, waiting.\n");
 } else if (VAR_9) {
  FUNC_1(VAR_7, "Error %d registering sub-crq\n", VAR_9);
  goto reg_failed;
 }

 VAR_8->adapter = VAR_6;
 VAR_8->size = 4 * VAR_4 / sizeof(*VAR_8->msgs);
 FUNC_11(&VAR_8->lock);

 FUNC_10(VAR_6->netdev,
     "sub-crq initialized, num %lx, hw_irq=%lx, irq=%x\n",
     VAR_8->crq_num, VAR_8->hw_irq, VAR_8->irq);

 return VAR_8;

reg_failed:
 FUNC_4(VAR_7, VAR_8->msg_token, 4 * VAR_4,
    VAR_0);
map_failed:
 FUNC_5((unsigned long)VAR_8->msgs, 2);
zero_page_failed:
 FUNC_8(VAR_8);

 return ((void*)0);
}
