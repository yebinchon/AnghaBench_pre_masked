
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct hinic_hwif {struct pci_dev* pdev; } ;
struct hinic_hwdev {TYPE_1__* msix_entries; struct hinic_hwif* hwif; } ;
struct TYPE_3__ {int entry; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hinic_hwif*) ;
 int FUNC_1 (struct hinic_hwif*) ;
 int FUNC_2 (struct hinic_hwif*) ;
 int VAR_2 ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int *,char*) ;
 TYPE_1__* FUNC_5 (int *,size_t,int ) ;
 int FUNC_6 (struct pci_dev*,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_7(struct hinic_hwdev *VAR_3)
{
 struct hinic_hwif *VAR_4 = VAR_3->hwif;
 struct pci_dev *VAR_5 = VAR_4->pdev;
 int VAR_6, VAR_7, VAR_8;
 size_t VAR_9;
 int VAR_10, VAR_11;

 VAR_7 = FUNC_0(VAR_4);
 VAR_8 = FUNC_1(VAR_4);
 VAR_6 = FUNC_3(VAR_2, VAR_7, VAR_8);
 if (VAR_6 > FUNC_2(VAR_4))
  VAR_6 = FUNC_2(VAR_4);

 VAR_9 = VAR_6 * sizeof(*VAR_3->msix_entries);
 VAR_3->msix_entries = FUNC_5(&VAR_5->dev, VAR_9,
        VAR_1);
 if (!VAR_3->msix_entries)
  return -VAR_0;

 for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++)
  VAR_3->msix_entries[VAR_10].entry = VAR_10;

 VAR_11 = FUNC_6(VAR_5, VAR_3->msix_entries, VAR_6);
 if (VAR_11) {
  FUNC_4(&VAR_5->dev, "Failed to enable pci msix\n");
  return VAR_11;
 }

 return 0;
}
