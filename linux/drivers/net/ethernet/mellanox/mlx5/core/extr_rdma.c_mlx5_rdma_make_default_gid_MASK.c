
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int subnet_prefix; } ;
union ib_gid {int * raw; TYPE_1__ global; } ;
typedef int u8 ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mlx5_core_dev*,int *) ;

__attribute__((used)) static void FUNC_3(struct mlx5_core_dev *VAR_1, union ib_gid *VAR_2)
{
 u8 VAR_3[VAR_0];

 FUNC_2(VAR_1, VAR_3);
 VAR_2->global.subnet_prefix = FUNC_1(0xfe80000000000000LL);
 FUNC_0(&VAR_2->raw[8], VAR_3);
}
