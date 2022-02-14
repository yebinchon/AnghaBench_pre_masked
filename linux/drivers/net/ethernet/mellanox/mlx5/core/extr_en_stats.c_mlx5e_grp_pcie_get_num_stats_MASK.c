
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_priv {int mdev; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_1(struct mlx5e_priv *VAR_6)
{
 int VAR_7 = 0;

 if (FUNC_0((VAR_6)->mdev, VAR_4))
  VAR_7 += VAR_0;

 if (FUNC_0((VAR_6)->mdev, VAR_5))
  VAR_7 += VAR_1;

 if (FUNC_0((VAR_6)->mdev, VAR_3))
  VAR_7 += VAR_2;

 return VAR_7;
}
