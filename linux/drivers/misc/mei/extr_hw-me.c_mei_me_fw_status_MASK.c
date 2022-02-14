
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct mei_me_hw {TYPE_1__* cfg; } ;
struct mei_fw_status {int count; int * status; } ;
struct mei_device {int dev; } ;
struct TYPE_2__ {struct mei_fw_status fw_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,int ,int *) ;
 struct mei_me_hw* FUNC_1 (struct mei_device*) ;
 struct pci_dev* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct mei_device *VAR_2,
       struct mei_fw_status *VAR_3)
{
 struct pci_dev *VAR_4 = FUNC_2(VAR_2->dev);
 struct mei_me_hw *VAR_5 = FUNC_1(VAR_2);
 const struct mei_fw_status *VAR_6 = &VAR_5->cfg->fw_status;
 int VAR_7;
 int VAR_8;

 if (!VAR_3)
  return -VAR_0;

 VAR_3->count = VAR_6->count;
 for (VAR_8 = 0; VAR_8 < VAR_6->count && VAR_8 < VAR_1; VAR_8++) {
  VAR_7 = FUNC_0(VAR_4, VAR_6->status[VAR_8],
         &VAR_3->status[VAR_8]);
  FUNC_3(VAR_2->dev, "PCI_CFG_HSF_X",
           VAR_6->status[VAR_8],
           VAR_3->status[VAR_8]);
  if (VAR_7)
   return VAR_7;
 }

 return 0;
}
