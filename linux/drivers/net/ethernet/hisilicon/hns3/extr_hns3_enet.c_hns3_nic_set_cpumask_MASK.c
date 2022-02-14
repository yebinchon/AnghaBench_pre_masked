
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct hns3_nic_priv {int vector_num; struct hns3_enet_tqp_vector* tqp_vector; TYPE_1__* ae_handle; } ;
struct hns3_enet_tqp_vector {int affinity_mask; } ;
struct TYPE_2__ {struct pci_dev* pdev; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct hns3_nic_priv *VAR_0)
{
 struct pci_dev *VAR_1 = VAR_0->ae_handle->pdev;
 struct hns3_enet_tqp_vector *VAR_2;
 int VAR_3 = VAR_0->vector_num;
 int VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(&VAR_1->dev);

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_2 = &VAR_0->tqp_vector[VAR_5];
  FUNC_1(FUNC_0(VAR_5, VAR_4),
    &VAR_2->affinity_mask);
 }
}
