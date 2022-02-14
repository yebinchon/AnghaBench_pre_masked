
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct hns3_nic_priv {int vector_num; struct hns3_enet_tqp_vector* tqp_vector; struct hnae3_handle* ae_handle; } ;
struct hns3_enet_tqp_vector {int vector_irq; } ;
struct hnae3_handle {TYPE_2__* ae_algo; struct pci_dev* pdev; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* put_vector ) (struct hnae3_handle*,int ) ;} ;


 int FUNC_0 (int *,struct hns3_enet_tqp_vector*) ;
 int FUNC_1 (struct hnae3_handle*,int ) ;

__attribute__((used)) static int FUNC_2(struct hns3_nic_priv *VAR_0)
{
 struct hnae3_handle *VAR_1 = VAR_0->ae_handle;
 struct pci_dev *VAR_2 = VAR_1->pdev;
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_0->vector_num; VAR_3++) {
  struct hns3_enet_tqp_vector *VAR_5;

  VAR_5 = &VAR_0->tqp_vector[VAR_3];
  VAR_4 = VAR_1->ae_algo->ops->put_vector(VAR_1, VAR_5->vector_irq);
  if (VAR_4)
   return VAR_4;
 }

 FUNC_0(&VAR_2->dev, VAR_0->tqp_vector);
 return 0;
}
