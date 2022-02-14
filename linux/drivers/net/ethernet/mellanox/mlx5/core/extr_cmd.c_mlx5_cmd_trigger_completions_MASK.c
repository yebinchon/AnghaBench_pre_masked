
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u64 ;
struct TYPE_2__ {unsigned long bitmask; int log_sz; int alloc_lock; } ;
struct mlx5_core_dev {TYPE_1__ cmd; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct mlx5_core_dev*,unsigned long,int) ;
 int FUNC_1 (struct mlx5_core_dev*,char*,unsigned long) ;
 int FUNC_2 (struct mlx5_core_dev*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct mlx5_core_dev *VAR_1)
{
 unsigned long VAR_2;
 u64 VAR_3;


 FUNC_2(VAR_1);
 FUNC_3(&VAR_1->cmd.alloc_lock, VAR_2);
 VAR_3 = ~VAR_1->cmd.bitmask & ((1ul << (1 << VAR_1->cmd.log_sz)) - 1);
 if (!VAR_3)
  goto no_trig;

 VAR_3 |= VAR_0;
 FUNC_4(&VAR_1->cmd.alloc_lock, VAR_2);

 FUNC_1(VAR_1, "vector 0x%llx\n", VAR_3);
 FUNC_0(VAR_1, VAR_3, 1);
 return;

no_trig:
 FUNC_4(&VAR_1->cmd.alloc_lock, VAR_2);
}
