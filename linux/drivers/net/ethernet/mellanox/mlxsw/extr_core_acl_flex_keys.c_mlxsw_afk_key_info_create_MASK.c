
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlxsw_afk_key_info {int ref_count; int list; } ;
struct mlxsw_afk_element_usage {int dummy; } ;
struct mlxsw_afk {int key_info_list; int max_blocks; } ;


 int VAR_0 ;
 struct mlxsw_afk_key_info* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct mlxsw_afk_key_info*) ;
 struct mlxsw_afk_key_info* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct mlxsw_afk*,struct mlxsw_afk_key_info*,struct mlxsw_afk_element_usage*) ;
 int FUNC_5 (struct mlxsw_afk_key_info*,int ,int ) ;

__attribute__((used)) static struct mlxsw_afk_key_info *
FUNC_6(struct mlxsw_afk *VAR_3,
     struct mlxsw_afk_element_usage *VAR_4)
{
 struct mlxsw_afk_key_info *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(FUNC_5(VAR_5, VAR_2, VAR_3->max_blocks),
      VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);
 VAR_6 = FUNC_4(VAR_3, VAR_5, VAR_4);
 if (VAR_6)
  goto err_picker;
 FUNC_3(&VAR_5->list, &VAR_3->key_info_list);
 VAR_5->ref_count = 1;
 return VAR_5;

err_picker:
 FUNC_1(VAR_5);
 return FUNC_0(VAR_6);
}
