
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct mei_me_hw {struct mei_cfg const* cfg; } ;
struct mei_device {int fw_f_fw_ver_supported; TYPE_1__* dr_dscr; } ;
struct mei_cfg {int fw_ver_supported; int * dma_size; } ;
struct TYPE_2__ {int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mei_device* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (struct mei_device*,int *,int *) ;
 int VAR_2 ;
 struct mei_me_hw* FUNC_2 (struct mei_device*) ;

struct mei_device *FUNC_3(struct pci_dev *VAR_3,
       const struct mei_cfg *VAR_4)
{
 struct mei_device *VAR_5;
 struct mei_me_hw *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_0(&VAR_3->dev, sizeof(struct mei_device) +
      sizeof(struct mei_me_hw), VAR_1);
 if (!VAR_5)
  return ((void*)0);

 VAR_6 = FUNC_2(VAR_5);

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  VAR_5->dr_dscr[VAR_7].size = VAR_4->dma_size[VAR_7];

 FUNC_1(VAR_5, &VAR_3->dev, &VAR_2);
 VAR_6->cfg = VAR_4;

 VAR_5->fw_f_fw_ver_supported = VAR_4->fw_ver_supported;

 return VAR_5;
}
