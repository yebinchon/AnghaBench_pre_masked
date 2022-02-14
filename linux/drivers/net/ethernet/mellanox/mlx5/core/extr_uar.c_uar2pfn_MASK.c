
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct mlx5_core_dev {int bar_addr; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlx5_core_dev*,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u64 FUNC_1(struct mlx5_core_dev *VAR_3, u32 VAR_4)
{
 u32 VAR_5;

 if (FUNC_0(VAR_3, VAR_2))
  VAR_5 = VAR_4 >> (VAR_1 - VAR_0);
 else
  VAR_5 = VAR_4;

 return (VAR_3->bar_addr >> VAR_1) + VAR_5;
}
