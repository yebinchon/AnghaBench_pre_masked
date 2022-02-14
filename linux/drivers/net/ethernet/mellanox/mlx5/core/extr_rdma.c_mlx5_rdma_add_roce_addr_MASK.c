
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ib_gid {int raw; } ;
typedef int u8 ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5_core_dev*,int ,int ,int ,int ,int *,int,int ,int) ;
 int FUNC_1 (struct mlx5_core_dev*,union ib_gid*) ;

__attribute__((used)) static int FUNC_2(struct mlx5_core_dev *VAR_2)
{
 union ib_gid VAR_3;
 u8 VAR_4[VAR_0];

 FUNC_1(VAR_2, &VAR_3);
 return FUNC_0(VAR_2, 0,
          VAR_1,
          0, VAR_3.raw, VAR_4,
          0, 0, 1);
}
