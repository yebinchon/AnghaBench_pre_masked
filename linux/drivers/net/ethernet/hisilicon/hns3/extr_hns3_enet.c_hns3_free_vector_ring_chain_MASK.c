
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct hns3_enet_tqp_vector {TYPE_1__* handle; } ;
struct hnae3_ring_chain_node {struct hnae3_ring_chain_node* next; } ;
struct TYPE_2__ {struct pci_dev* pdev; } ;


 int FUNC_0 (int *,struct hnae3_ring_chain_node*) ;

__attribute__((used)) static void FUNC_1(struct hns3_enet_tqp_vector *VAR_0,
     struct hnae3_ring_chain_node *VAR_1)
{
 struct pci_dev *VAR_2 = VAR_0->handle->pdev;
 struct hnae3_ring_chain_node *VAR_3, *VAR_4;

 VAR_4 = VAR_1->next;

 while (VAR_4) {
  VAR_3 = VAR_4->next;
  FUNC_0(&VAR_2->dev, VAR_4);
  VAR_4 = VAR_3;
 }
}
