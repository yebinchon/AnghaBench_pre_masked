
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {char* board_id; int device; } ;
struct ethtool_drvinfo {int bus_info; int fw_version; int version; int driver; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (struct mlx5_core_dev*) ;
 int FUNC_3 (struct mlx5_core_dev*) ;
 int FUNC_4 (int ,int,char*,int,int,int,char*) ;
 int FUNC_5 (int ,int ,int) ;

void FUNC_6(struct mlx5e_priv *VAR_2,
          struct ethtool_drvinfo *VAR_3)
{
 struct mlx5_core_dev *VAR_4 = VAR_2->mdev;

 FUNC_5(VAR_3->driver, VAR_0, sizeof(VAR_3->driver));
 FUNC_5(VAR_3->version, VAR_1,
  sizeof(VAR_3->version));
 FUNC_4(VAR_3->fw_version, sizeof(VAR_3->fw_version),
   "%d.%d.%04d (%.16s)",
   FUNC_1(VAR_4), FUNC_2(VAR_4), FUNC_3(VAR_4),
   VAR_4->board_id);
 FUNC_5(VAR_3->bus_info, FUNC_0(VAR_4->device),
  sizeof(VAR_3->bus_info));
}
