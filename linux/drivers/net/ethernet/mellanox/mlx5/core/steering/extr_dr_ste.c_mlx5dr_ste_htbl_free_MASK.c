
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5dr_ste_htbl {int chunk; int refcount; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5dr_ste_htbl*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;

int FUNC_3(struct mlx5dr_ste_htbl *VAR_1)
{
 if (FUNC_2(&VAR_1->refcount))
  return -VAR_0;

 FUNC_1(VAR_1->chunk);
 FUNC_0(VAR_1);
 return 0;
}
