
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int usage; } ;
struct mlxsw_afk_key_info {int* element_to_block; struct mlxsw_afk_block** blocks; TYPE_1__ elusage; } ;
struct mlxsw_afk_element_inst {int dummy; } ;
struct mlxsw_afk_block {int dummy; } ;
typedef enum mlxsw_afk_element { ____Placeholder_mlxsw_afk_element } mlxsw_afk_element ;


 scalar_t__ FUNC_0 (int) ;
 struct mlxsw_afk_element_inst* FUNC_1 (struct mlxsw_afk_block const*,int) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static const struct mlxsw_afk_element_inst *
FUNC_3(struct mlxsw_afk_key_info *VAR_0,
         enum mlxsw_afk_element VAR_1,
         int *VAR_2)
{
 const struct mlxsw_afk_element_inst *VAR_3;
 const struct mlxsw_afk_block *VAR_4;
 int VAR_5;

 if (FUNC_0(!FUNC_2(VAR_1, VAR_0->elusage.usage)))
  return ((void*)0);
 VAR_5 = VAR_0->element_to_block[VAR_1];
 VAR_4 = VAR_0->blocks[VAR_5];

 VAR_3 = FUNC_1(VAR_4, VAR_1);
 if (FUNC_0(!VAR_3))
  return ((void*)0);

 *VAR_2 = VAR_5;
 return VAR_3;
}
