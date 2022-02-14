
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int fatal_error; } ;
struct TYPE_4__ {TYPE_1__ health; } ;
struct mlx5_core_dev {TYPE_2__ priv; } ;






 int VAR_0 ;
 int FUNC_0 (struct mlx5_core_dev*,char*,...) ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (struct mlx5_core_dev*) ;

__attribute__((used)) static void FUNC_3(struct mlx5_core_dev *VAR_1)
{
 u8 VAR_2 = FUNC_2(VAR_1);

 switch (VAR_2) {
 case 130:
  FUNC_0(VAR_1, "Expected to see disabled NIC but it is full driver\n");
  break;

 case 131:
  FUNC_0(VAR_1, "starting teardown\n");
  break;

 case 129:
  FUNC_0(VAR_1, "Expected to see disabled NIC but it is no dram nic\n");
  break;

 case 128:
  if (VAR_1->priv.health.fatal_error != VAR_0)
   FUNC_0(VAR_1, "NIC SW reset in progress\n");
  break;

 default:
  FUNC_0(VAR_1, "Expected to see disabled NIC but it is has invalid value %d\n",
          VAR_2);
 }

 FUNC_1(VAR_1);
}
