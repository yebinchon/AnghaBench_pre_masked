
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct mlx5e_priv {struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;
struct ieee_maxrate {int* tc_maxrate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int,char*) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (struct mlx5_core_dev*) ;
 int FUNC_3 (struct mlx5_core_dev*,int*,int*) ;
 struct mlx5e_priv* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3,
           struct ieee_maxrate *VAR_4)
{
 struct mlx5e_priv *VAR_5 = FUNC_4(VAR_3);
 struct mlx5_core_dev *VAR_6 = VAR_5->mdev;
 u8 VAR_7[VAR_0];
 u8 VAR_8[VAR_0];
 int VAR_9;
 int VAR_10;

 VAR_9 = FUNC_3(VAR_6, VAR_7, VAR_8);
 if (VAR_9)
  return VAR_9;

 FUNC_1(VAR_4->tc_maxrate, 0, sizeof(VAR_4->tc_maxrate));

 for (VAR_10 = 0; VAR_10 <= FUNC_2(VAR_6); VAR_10++) {
  switch (VAR_8[VAR_10]) {
  case 130:
   VAR_4->tc_maxrate[VAR_10] = VAR_7[VAR_10] * VAR_1;
   break;
  case 128:
   VAR_4->tc_maxrate[VAR_10] = VAR_7[VAR_10] * VAR_2;
   break;
  case 129:
   break;
  default:
   FUNC_0(1, "non-supported BW unit");
   break;
  }
 }

 return 0;
}
