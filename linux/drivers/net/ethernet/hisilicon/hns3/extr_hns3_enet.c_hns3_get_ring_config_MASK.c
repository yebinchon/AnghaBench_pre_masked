
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct hns3_nic_priv {TYPE_2__* ring_data; int * dev; struct hnae3_handle* ae_handle; } ;
struct TYPE_4__ {int num_tqps; int * tqp; } ;
struct hnae3_handle {TYPE_1__ kinfo; struct pci_dev* pdev; } ;
struct TYPE_5__ {struct TYPE_5__* ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ,struct hns3_nic_priv*) ;

__attribute__((used)) static int FUNC_4(struct hns3_nic_priv *VAR_2)
{
 struct hnae3_handle *VAR_3 = VAR_2->ae_handle;
 struct pci_dev *VAR_4 = VAR_3->pdev;
 int VAR_5, VAR_6;

 VAR_2->ring_data = FUNC_2(&VAR_4->dev,
     FUNC_0(VAR_3->kinfo.num_tqps,
          sizeof(*VAR_2->ring_data),
          2),
     VAR_1);
 if (!VAR_2->ring_data)
  return -VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_3->kinfo.num_tqps; VAR_5++) {
  VAR_6 = FUNC_3(VAR_3->kinfo.tqp[VAR_5], VAR_2);
  if (VAR_6)
   goto err;
 }

 return 0;
err:
 while (VAR_5--) {
  FUNC_1(VAR_2->dev, VAR_2->ring_data[VAR_5].ring);
  FUNC_1(VAR_2->dev,
      VAR_2->ring_data[VAR_5 + VAR_3->kinfo.num_tqps].ring);
 }

 FUNC_1(&VAR_4->dev, VAR_2->ring_data);
 VAR_2->ring_data = ((void*)0);
 return VAR_6;
}
