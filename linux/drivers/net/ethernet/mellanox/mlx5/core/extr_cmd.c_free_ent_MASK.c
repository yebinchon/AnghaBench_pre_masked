
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_cmd {int alloc_lock; int bitmask; } ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct mlx5_cmd *VAR_0, int VAR_1)
{
 unsigned long VAR_2;

 FUNC_1(&VAR_0->alloc_lock, VAR_2);
 FUNC_0(VAR_1, &VAR_0->bitmask);
 FUNC_2(&VAR_0->alloc_lock, VAR_2);
}
