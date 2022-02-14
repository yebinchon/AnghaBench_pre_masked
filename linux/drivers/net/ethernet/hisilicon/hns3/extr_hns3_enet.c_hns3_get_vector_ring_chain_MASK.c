
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct TYPE_7__ {struct hns3_enet_ring* ring; } ;
struct TYPE_6__ {struct hns3_enet_ring* ring; } ;
struct hns3_enet_tqp_vector {TYPE_3__ rx_group; TYPE_2__ tx_group; TYPE_1__* handle; } ;
struct hns3_enet_ring {struct hns3_enet_ring* next; TYPE_4__* tqp; } ;
struct hnae3_ring_chain_node {struct hnae3_ring_chain_node* next; int int_gl_idx; int flag; int tqp_index; } ;
struct TYPE_8__ {int tqp_index; } ;
struct TYPE_5__ {struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,struct hnae3_ring_chain_node*) ;
 struct hnae3_ring_chain_node* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct hns3_enet_tqp_vector *VAR_9,
          struct hnae3_ring_chain_node *VAR_10)
{
 struct pci_dev *VAR_11 = VAR_9->handle->pdev;
 struct hnae3_ring_chain_node *VAR_12 = VAR_10;
 struct hnae3_ring_chain_node *VAR_13;
 struct hns3_enet_ring *VAR_14;
 struct hns3_enet_ring *VAR_15;

 VAR_14 = VAR_9->tx_group.ring;
 if (VAR_14) {
  VAR_12->tqp_index = VAR_14->tqp->tqp_index;
  FUNC_2(VAR_12->flag, VAR_6,
         VAR_8);
  FUNC_3(VAR_12->int_gl_idx, VAR_2,
    VAR_3, VAR_5);

  VAR_12->next = ((void*)0);

  while (VAR_14->next) {
   VAR_14 = VAR_14->next;

   VAR_13 = FUNC_1(&VAR_11->dev, sizeof(*VAR_13),
          VAR_1);
   if (!VAR_13)
    goto err_free_chain;

   VAR_12->next = VAR_13;
   VAR_13->tqp_index = VAR_14->tqp->tqp_index;
   FUNC_2(VAR_13->flag, VAR_6,
          VAR_8);
   FUNC_3(VAR_13->int_gl_idx,
     VAR_2,
     VAR_3,
     VAR_5);

   VAR_12 = VAR_13;
  }
 }

 VAR_15 = VAR_9->rx_group.ring;
 if (!VAR_14 && VAR_15) {
  VAR_12->next = ((void*)0);
  VAR_12->tqp_index = VAR_15->tqp->tqp_index;
  FUNC_2(VAR_12->flag, VAR_6,
         VAR_7);
  FUNC_3(VAR_12->int_gl_idx, VAR_2,
    VAR_3, VAR_4);

  VAR_15 = VAR_15->next;
 }

 while (VAR_15) {
  VAR_13 = FUNC_1(&VAR_11->dev, sizeof(*VAR_13), VAR_1);
  if (!VAR_13)
   goto err_free_chain;

  VAR_12->next = VAR_13;
  VAR_13->tqp_index = VAR_15->tqp->tqp_index;
  FUNC_2(VAR_13->flag, VAR_6,
         VAR_7);
  FUNC_3(VAR_13->int_gl_idx, VAR_2,
    VAR_3, VAR_4);

  VAR_12 = VAR_13;

  VAR_15 = VAR_15->next;
 }

 return 0;

err_free_chain:
 VAR_12 = VAR_10->next;
 while (VAR_12) {
  VAR_13 = VAR_12->next;
  FUNC_0(&VAR_11->dev, VAR_12);
  VAR_12 = VAR_13;
 }
 VAR_10->next = ((void*)0);

 return -VAR_0;
}
