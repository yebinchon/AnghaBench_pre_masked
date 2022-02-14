
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx4_mpt_entry {int pd_flags; } ;
struct mlx4_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct mlx4_dev*) ;

int FUNC_3(struct mlx4_dev *VAR_3, struct mlx4_mpt_entry *VAR_4,
    u32 VAR_5)
{
 u32 VAR_6 = FUNC_0(VAR_4->pd_flags) & ~VAR_1;

 if (FUNC_2(VAR_3))
  VAR_6 &= ~VAR_2;

 VAR_4->pd_flags = FUNC_1(VAR_6 |
       (VAR_5 & VAR_1)
       | VAR_0);
 return 0;
}
