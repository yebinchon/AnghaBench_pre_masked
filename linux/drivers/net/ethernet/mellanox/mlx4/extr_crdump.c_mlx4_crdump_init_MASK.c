
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct mlx4_fw_crdump {int snapshot_enable; void* region_fw_health; void* region_crspace; } ;
struct mlx4_dev {TYPE_1__* persist; } ;
struct devlink {int dummy; } ;
struct TYPE_2__ {struct pci_dev* pdev; struct mlx4_fw_crdump crdump; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_1 ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (struct devlink*,int ,int ,int ) ;
 int FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (struct mlx4_dev*,char*,int ,int ) ;
 int FUNC_5 (struct pci_dev*,int ) ;
 struct devlink* FUNC_6 (int ) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_7(struct mlx4_dev *VAR_4)
{
 struct devlink *VAR_5 = FUNC_6(FUNC_3(VAR_4));
 struct mlx4_fw_crdump *VAR_6 = &VAR_4->persist->crdump;
 struct pci_dev *VAR_7 = VAR_4->persist->pdev;

 VAR_6->snapshot_enable = 0;


 VAR_6->region_crspace =
  FUNC_2(VAR_5,
          VAR_2,
          VAR_1,
          FUNC_5(VAR_7, 0));
 if (FUNC_0(VAR_6->region_crspace))
  FUNC_4(VAR_4, "crdump: create devlink region %s err %ld\n",
     VAR_2,
     FUNC_1(VAR_6->region_crspace));


 VAR_6->region_fw_health =
  FUNC_2(VAR_5,
          VAR_3,
          VAR_1,
          VAR_0);
 if (FUNC_0(VAR_6->region_fw_health))
  FUNC_4(VAR_4, "crdump: create devlink region %s err %ld\n",
     VAR_3,
     FUNC_1(VAR_6->region_fw_health));

 return 0;
}
