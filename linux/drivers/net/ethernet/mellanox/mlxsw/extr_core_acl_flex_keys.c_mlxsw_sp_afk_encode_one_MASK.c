
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlxsw_item {int dummy; } ;
struct mlxsw_afk_element_inst {scalar_t__ type; struct mlxsw_item item; TYPE_1__* info; } ;
struct TYPE_2__ {struct mlxsw_item item; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct mlxsw_item const*,struct mlxsw_item const*,char*,char*) ;
 int FUNC_1 (struct mlxsw_item const*,struct mlxsw_item const*,char*,char*,int) ;

__attribute__((used)) static void
FUNC_2(const struct mlxsw_afk_element_inst *VAR_2,
   char *VAR_3, char *VAR_4, int VAR_5)
{
 const struct mlxsw_item *VAR_6 = &VAR_2->info->item;
 const struct mlxsw_item *VAR_7 = &VAR_2->item;

 if (VAR_2->type == VAR_1)
  FUNC_1(VAR_6, VAR_7,
     VAR_4, VAR_3, VAR_5);
 else if (VAR_2->type == VAR_0)
  FUNC_0(VAR_6, VAR_7,
     VAR_4, VAR_3);
}
