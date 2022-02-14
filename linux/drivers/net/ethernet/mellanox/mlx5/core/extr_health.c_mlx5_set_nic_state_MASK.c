
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mlx5_core_dev {TYPE_1__* iseg; } ;
struct TYPE_2__ {int cmdq_addr_l_sz; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

void FUNC_2(struct mlx5_core_dev *VAR_1, u8 VAR_2)
{
 u32 VAR_3;

 VAR_3 = FUNC_0(&VAR_1->iseg->cmdq_addr_l_sz);
 FUNC_1((VAR_3 & 0xFFFFF000) |
      VAR_2 << VAR_0,
      &VAR_1->iseg->cmdq_addr_l_sz);
}
