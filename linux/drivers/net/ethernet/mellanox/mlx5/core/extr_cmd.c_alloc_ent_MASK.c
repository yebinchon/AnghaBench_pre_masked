
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_cmd {int max_reg_cmds; int alloc_lock; int bitmask; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct mlx5_cmd *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;

 FUNC_2(&VAR_1->alloc_lock, VAR_2);
 VAR_3 = FUNC_1(&VAR_1->bitmask, VAR_1->max_reg_cmds);
 if (VAR_3 < VAR_1->max_reg_cmds)
  FUNC_0(VAR_3, &VAR_1->bitmask);
 FUNC_3(&VAR_1->alloc_lock, VAR_2);

 return VAR_3 < VAR_1->max_reg_cmds ? VAR_3 : -VAR_0;
}
