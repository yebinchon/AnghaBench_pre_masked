
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct mlx5e_priv {struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;
typedef enum ethtool_phys_id_state { ____Placeholder_ethtool_phys_id_state } ethtool_phys_id_state ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx5_core_dev*,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 struct mlx5e_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_4,
        enum ethtool_phys_id_state VAR_5)
{
 struct mlx5e_priv *VAR_6 = FUNC_2(VAR_4);
 struct mlx5_core_dev *VAR_7 = VAR_6->mdev;
 u16 VAR_8;

 if (!FUNC_0(VAR_7, VAR_3))
  return -VAR_0;

 switch (VAR_5) {
 case 129:
  VAR_8 = VAR_1;
  break;
 case 128:
  VAR_8 = VAR_2;
  break;
 default:
  return -VAR_0;
 }

 return FUNC_1(VAR_7, VAR_8);
}
