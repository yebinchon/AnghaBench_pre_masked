
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlx4_fmr {scalar_t__ maps; scalar_t__ mpt; } ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 () ;

void FUNC_1(struct mlx4_dev *VAR_1, struct mlx4_fmr *VAR_2,
      u32 *VAR_3, u32 *VAR_4)
{
 if (!VAR_2->maps)
  return;


 *(u8 *)VAR_2->mpt = VAR_0;


 FUNC_0();

 VAR_2->maps = 0;
}
