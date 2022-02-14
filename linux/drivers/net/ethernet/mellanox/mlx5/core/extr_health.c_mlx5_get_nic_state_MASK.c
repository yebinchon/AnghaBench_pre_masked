
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mlx5_core_dev {TYPE_1__* iseg; } ;
struct TYPE_2__ {int cmdq_addr_l_sz; } ;


 int FUNC_0 (int *) ;

u8 FUNC_1(struct mlx5_core_dev *VAR_0)
{
 return (FUNC_0(&VAR_0->iseg->cmdq_addr_l_sz) >> 8) & 7;
}
