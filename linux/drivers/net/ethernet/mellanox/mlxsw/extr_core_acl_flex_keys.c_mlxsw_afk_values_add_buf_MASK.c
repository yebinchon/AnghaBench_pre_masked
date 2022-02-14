
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int bytes; } ;
struct mlxsw_item {TYPE_1__ size; } ;
struct TYPE_4__ {int mask; int key; } ;
struct mlxsw_afk_element_values {int elusage; TYPE_2__ storage; } ;
struct mlxsw_afk_element_info {scalar_t__ type; struct mlxsw_item item; } ;
typedef enum mlxsw_afk_element { ____Placeholder_mlxsw_afk_element } mlxsw_afk_element ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char const*,struct mlxsw_item const*,int ) ;
 int FUNC_2 (char const*,int ,unsigned int) ;
 struct mlxsw_afk_element_info* VAR_1 ;
 int FUNC_3 (int *,int) ;

void FUNC_4(struct mlxsw_afk_element_values *VAR_2,
         enum mlxsw_afk_element VAR_3,
         const char *VAR_4, const char *VAR_5,
         unsigned int VAR_6)
{
 const struct mlxsw_afk_element_info *VAR_7 =
    &VAR_1[VAR_3];
 const struct mlxsw_item *VAR_8 = &VAR_7->item;

 if (!FUNC_2(VAR_5, 0, VAR_6))
  return;
 if (FUNC_0(VAR_7->type != VAR_0) ||
     FUNC_0(VAR_7->item.size.bytes != VAR_6))
  return;
 FUNC_1(VAR_2->storage.key, VAR_4,
          VAR_8, 0);
 FUNC_1(VAR_2->storage.mask, VAR_5,
          VAR_8, 0);
 FUNC_3(&VAR_2->elusage, VAR_3);
}
