
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ibmvnic_sub_crq_queue {int hw_irq; int crq_num; int msg_token; scalar_t__ cur; int used; int msgs; scalar_t__ irq; } ;
struct ibmvnic_adapter {TYPE_1__* vdev; } ;
struct TYPE_2__ {int unit_address; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (scalar_t__,struct ibmvnic_sub_crq_queue*) ;
 int FUNC_2 (int ,int ,int,int *,int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct ibmvnic_adapter *VAR_1,
       struct ibmvnic_sub_crq_queue *VAR_2)
{
 int VAR_3;

 if (VAR_2->irq) {
  FUNC_1(VAR_2->irq, VAR_2);
  FUNC_3(VAR_2->irq);
  VAR_2->irq = 0;
 }

 FUNC_4(VAR_2->msgs, 0, 4 * VAR_0);
 FUNC_0(&VAR_2->used, 0);
 VAR_2->cur = 0;

 VAR_3 = FUNC_2(VAR_1->vdev->unit_address, VAR_2->msg_token,
      4 * VAR_0, &VAR_2->crq_num, &VAR_2->hw_irq);
 return VAR_3;
}
