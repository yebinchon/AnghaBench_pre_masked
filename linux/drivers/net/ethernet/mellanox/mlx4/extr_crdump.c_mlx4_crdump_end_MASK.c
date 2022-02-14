
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_fw_crdump {int region_crspace; int region_fw_health; } ;
struct mlx4_dev {TYPE_1__* persist; } ;
struct TYPE_2__ {struct mlx4_fw_crdump crdump; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct mlx4_dev *VAR_0)
{
 struct mlx4_fw_crdump *VAR_1 = &VAR_0->persist->crdump;

 FUNC_0(VAR_1->region_fw_health);
 FUNC_0(VAR_1->region_crspace);
}
