
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_afk_ops {int blocks_count; int blocks; } ;
struct mlxsw_afk {unsigned int max_blocks; int blocks_count; int blocks; struct mlxsw_afk_ops const* ops; int key_info_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 struct mlxsw_afk* FUNC_2 (int,int ) ;
 int FUNC_3 (struct mlxsw_afk*) ;

struct mlxsw_afk *FUNC_4(unsigned int VAR_1,
       const struct mlxsw_afk_ops *VAR_2)
{
 struct mlxsw_afk *VAR_3;

 VAR_3 = FUNC_2(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);
 FUNC_0(&VAR_3->key_info_list);
 VAR_3->max_blocks = VAR_1;
 VAR_3->ops = VAR_2;
 VAR_3->blocks = VAR_2->blocks;
 VAR_3->blocks_count = VAR_2->blocks_count;
 FUNC_1(!FUNC_3(VAR_3));
 return VAR_3;
}
