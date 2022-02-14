
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvcg_config_group_type {int type; int name; } ;
struct config_group {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct config_group*,int ,int *) ;
 int FUNC_1 (struct config_group*,struct config_group*) ;
 struct config_group* FUNC_2 (int,int ) ;
 int FUNC_3 (struct config_group*,struct uvcg_config_group_type const*) ;

__attribute__((used)) static int FUNC_4(struct config_group *VAR_2,
        const struct uvcg_config_group_type *VAR_3)
{
 struct config_group *VAR_4;

 VAR_4 = FUNC_2(sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_0(VAR_4, VAR_3->name, &VAR_3->type);
 FUNC_1(VAR_4, VAR_2);

 return FUNC_3(VAR_4, VAR_3);
}
