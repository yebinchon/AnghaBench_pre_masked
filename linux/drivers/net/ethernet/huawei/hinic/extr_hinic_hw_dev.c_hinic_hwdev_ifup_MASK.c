
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dev; } ;
struct msix_entry {int dummy; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_cap {int num_qps; int max_qps; } ;
struct hinic_func_to_io {int dummy; } ;
struct hinic_hwdev {struct msix_entry* msix_entries; struct hinic_hwif* hwif; struct hinic_cap nic_cap; struct hinic_func_to_io func_to_io; } ;


 int VAR_0 ;
 int FUNC_0 (struct hinic_hwif*) ;
 int FUNC_1 (struct hinic_hwif*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct hinic_hwdev*,int *) ;
 int FUNC_5 (struct hinic_hwif*,int ) ;
 int FUNC_6 (struct hinic_func_to_io*,int ,int,struct msix_entry*,struct msix_entry*) ;
 int FUNC_7 (struct hinic_func_to_io*,int) ;
 int FUNC_8 (struct hinic_func_to_io*) ;
 int FUNC_9 (struct hinic_func_to_io*,struct hinic_hwif*,int ,int,struct msix_entry*) ;
 int FUNC_10 (struct hinic_hwdev*,int ,int ) ;
 int FUNC_11 (struct hinic_hwdev*) ;

int FUNC_12(struct hinic_hwdev *VAR_3)
{
 struct hinic_func_to_io *VAR_4 = &VAR_3->func_to_io;
 struct hinic_cap *VAR_5 = &VAR_3->nic_cap;
 struct hinic_hwif *VAR_6 = VAR_3->hwif;
 int VAR_7, VAR_8, VAR_9, VAR_10;
 struct msix_entry *VAR_11;
 struct msix_entry *VAR_12;
 struct msix_entry *VAR_13;
 struct pci_dev *VAR_14 = VAR_6->pdev;
 u16 VAR_15;

 VAR_7 = FUNC_4(VAR_3, &VAR_15);
 if (VAR_7) {
  FUNC_2(&VAR_14->dev, "Failed to get global base qp number\n");
  return VAR_7;
 }

 VAR_8 = FUNC_0(VAR_6);
 VAR_9 = FUNC_1(VAR_6);

 VAR_11 = &VAR_3->msix_entries[VAR_8];

 VAR_7 = FUNC_9(VAR_4, VAR_6, VAR_5->max_qps, VAR_9,
       VAR_11);
 if (VAR_7) {
  FUNC_2(&VAR_14->dev, "Failed to init IO channel\n");
  return VAR_7;
 }

 VAR_10 = VAR_5->num_qps;
 VAR_12 = &VAR_3->msix_entries[VAR_8 + VAR_9];
 VAR_13 = &VAR_3->msix_entries[VAR_8 + VAR_9 + VAR_10];

 VAR_7 = FUNC_6(VAR_4, VAR_15, VAR_10,
      VAR_12, VAR_13);
 if (VAR_7) {
  FUNC_2(&VAR_14->dev, "Failed to create QPs\n");
  goto err_create_qps;
 }

 VAR_7 = FUNC_11(VAR_3);
 if (VAR_7) {
  FUNC_3(&VAR_14->dev, "db - disabled, try again\n");
  FUNC_5(VAR_6, VAR_0);
 }

 VAR_7 = FUNC_10(VAR_3, VAR_2, VAR_1);
 if (VAR_7) {
  FUNC_2(&VAR_14->dev, "Failed to set HW IO ctxt\n");
  goto err_hw_ioctxt;
 }

 return 0;

err_hw_ioctxt:
 FUNC_7(VAR_4, VAR_10);

err_create_qps:
 FUNC_8(VAR_4);
 return VAR_7;
}
