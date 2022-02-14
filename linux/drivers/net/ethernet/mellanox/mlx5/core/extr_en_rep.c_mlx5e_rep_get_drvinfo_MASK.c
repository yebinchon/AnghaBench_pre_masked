
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mlx5e_priv {struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {char* board_id; } ;
struct ethtool_drvinfo {int fw_version; int version; int driver; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_core_dev*) ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (struct mlx5_core_dev*) ;
 int VAR_1 ;
 struct mlx5e_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int ,int,char*,int,int,int,char*) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_2,
      struct ethtool_drvinfo *VAR_3)
{
 struct mlx5e_priv *VAR_4 = FUNC_3(VAR_2);
 struct mlx5_core_dev *VAR_5 = VAR_4->mdev;

 FUNC_5(VAR_3->driver, VAR_1,
  sizeof(VAR_3->driver));
 FUNC_5(VAR_3->version, VAR_0, sizeof(VAR_3->version));
 FUNC_4(VAR_3->fw_version, sizeof(VAR_3->fw_version),
   "%d.%d.%04d (%.16s)",
   FUNC_0(VAR_5), FUNC_1(VAR_5),
   FUNC_2(VAR_5), VAR_5->board_id);
}
