
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct mei_fw_status {int count; int * status; } ;
struct mei_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mei_fw_status VAR_2 ;
 int FUNC_0 (struct pci_dev*,int ,int *) ;
 struct pci_dev* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct mei_device *VAR_3,
        struct mei_fw_status *VAR_4)
{
 const struct mei_fw_status *VAR_5 = &VAR_2;
 struct pci_dev *VAR_6 = FUNC_1(VAR_3->dev);
 int VAR_7;
 int VAR_8;

 if (!VAR_4)
  return -VAR_0;

 VAR_4->count = VAR_5->count;
 for (VAR_8 = 0; VAR_8 < VAR_5->count && VAR_8 < VAR_1; VAR_8++) {
  VAR_7 = FUNC_0(VAR_6, VAR_5->status[VAR_8],
         &VAR_4->status[VAR_8]);
  FUNC_2(VAR_3->dev, "PCI_CFG_HSF_X",
           VAR_5->status[VAR_8],
           VAR_4->status[VAR_8]);
  if (VAR_7)
   return VAR_7;
 }

 return 0;
}
