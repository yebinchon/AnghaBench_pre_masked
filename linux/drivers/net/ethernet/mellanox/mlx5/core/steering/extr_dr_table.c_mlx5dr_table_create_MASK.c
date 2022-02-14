
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5dr_table {int refcount; int level; struct mlx5dr_domain* dmn; } ;
struct mlx5dr_domain {int refcount; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5dr_table*) ;
 int FUNC_1 (struct mlx5dr_table*) ;
 int FUNC_2 (struct mlx5dr_table*) ;
 int FUNC_3 (struct mlx5dr_table*) ;
 struct mlx5dr_table* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;

struct mlx5dr_table *FUNC_8(struct mlx5dr_domain *VAR_1, u32 VAR_2)
{
 struct mlx5dr_table *VAR_3;
 int VAR_4;

 FUNC_6(&VAR_1->refcount);

 VAR_3 = FUNC_4(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  goto dec_ref;

 VAR_3->dmn = VAR_1;
 VAR_3->level = VAR_2;
 FUNC_7(&VAR_3->refcount, 1);

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  goto free_tbl;

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4)
  goto uninit_tbl;

 return VAR_3;

uninit_tbl:
 FUNC_2(VAR_3);
free_tbl:
 FUNC_3(VAR_3);
dec_ref:
 FUNC_5(&VAR_1->refcount);
 return ((void*)0);
}
