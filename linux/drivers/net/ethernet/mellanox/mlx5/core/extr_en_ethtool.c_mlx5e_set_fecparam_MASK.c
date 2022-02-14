
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct mlx5e_priv {struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;
struct ethtool_fecparam {int fec; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (struct mlx5_core_dev*) ;
 int FUNC_2 (struct mlx5_core_dev*,int) ;
 struct mlx5e_priv* FUNC_3 (struct net_device*) ;
 int* VAR_0 ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1,
         struct ethtool_fecparam *VAR_2)
{
 struct mlx5e_priv *VAR_3 = FUNC_3(VAR_1);
 struct mlx5_core_dev *VAR_4 = VAR_3->mdev;
 u8 VAR_5 = 0;
 int VAR_6;
 int VAR_7;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_0); VAR_6++) {
  if (!(VAR_0[VAR_6] & VAR_2->fec))
   continue;
  VAR_5 |= (1 << VAR_6);
  break;
 }

 VAR_7 = FUNC_2(VAR_4, VAR_5);

 if (VAR_7)
  return VAR_7;

 FUNC_1(VAR_4);

 return 0;
}
