
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlxsw_item {int dummy; } ;
struct TYPE_2__ {int mask; int key; } ;
struct mlxsw_afk_element_values {int elusage; TYPE_1__ storage; } ;
struct mlxsw_afk_element_info {scalar_t__ type; struct mlxsw_item item; } ;
typedef enum mlxsw_afk_element { ____Placeholder_mlxsw_afk_element } mlxsw_afk_element ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,struct mlxsw_item const*,int ,int ) ;
 struct mlxsw_afk_element_info* VAR_1 ;
 int FUNC_2 (int *,int) ;

void FUNC_3(struct mlxsw_afk_element_values *VAR_2,
         enum mlxsw_afk_element VAR_3,
         u32 VAR_4, u32 VAR_5)
{
 const struct mlxsw_afk_element_info *VAR_6 =
    &VAR_1[VAR_3];
 const struct mlxsw_item *VAR_7 = &VAR_6->item;

 if (!VAR_5)
  return;
 if (FUNC_0(VAR_6->type != VAR_0))
  return;
 FUNC_1(VAR_2->storage.key, VAR_7, 0, VAR_4);
 FUNC_1(VAR_2->storage.mask, VAR_7, 0, VAR_5);
 FUNC_2(&VAR_2->elusage, VAR_3);
}
