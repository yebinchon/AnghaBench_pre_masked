
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_item_type {int dummy; } ;
struct config_group {int dummy; } ;


 int VAR_0 ;
 struct config_group* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct config_group*,char const*,struct config_item_type const*) ;
 int FUNC_2 (struct config_group*,struct config_group*) ;
 int FUNC_3 (struct config_group*) ;
 struct config_group* FUNC_4 (int,int ) ;

struct config_group *
FUNC_5(struct config_group *VAR_2,
    const char *VAR_3,
    const struct config_item_type *VAR_4)
{
 int VAR_5;
 struct config_group *VAR_6;

 VAR_6 = FUNC_4(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);
 FUNC_1(VAR_6, VAR_3, VAR_4);

 VAR_5 = FUNC_2(VAR_2, VAR_6);
 if (VAR_5) {
  FUNC_3(VAR_6);
  return FUNC_0(VAR_5);
 }
 return VAR_6;
}
