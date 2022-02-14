
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvcg_config_group_type {int (* create_children ) (struct config_group*) ;struct uvcg_config_group_type** children; } ;
struct config_group {int dummy; } ;


 int FUNC_0 (struct config_group*) ;
 int FUNC_1 (struct config_group*,struct uvcg_config_group_type const*) ;

__attribute__((used)) static int FUNC_2(struct config_group *VAR_0,
    const struct uvcg_config_group_type *VAR_1)
{
 const struct uvcg_config_group_type **VAR_2;
 int VAR_3;

 if (VAR_1->create_children)
  return VAR_1->create_children(VAR_0);

 for (VAR_2 = VAR_1->children; VAR_2 && *VAR_2; ++VAR_2) {
  VAR_3 = FUNC_1(VAR_0, *VAR_2);
  if (VAR_3 < 0)
   return VAR_3;
 }

 return 0;
}
