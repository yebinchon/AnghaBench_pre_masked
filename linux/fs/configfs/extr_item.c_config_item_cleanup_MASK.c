
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct config_item_type {TYPE_1__* ct_item_ops; } ;
struct config_item {int * ci_name; int * ci_namebuf; struct config_item* ci_parent; struct config_group* ci_group; struct config_item_type* ci_type; } ;
struct config_group {int dummy; } ;
struct TYPE_2__ {int (* release ) (struct config_item*) ;} ;


 int FUNC_0 (struct config_group*) ;
 int FUNC_1 (struct config_item*) ;
 int FUNC_2 (struct config_item*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (struct config_item*) ;

__attribute__((used)) static void FUNC_6(struct config_item *VAR_0)
{
 const struct config_item_type *VAR_1 = VAR_0->ci_type;
 struct config_group *VAR_2 = VAR_0->ci_group;
 struct config_item *VAR_3 = VAR_0->ci_parent;

 FUNC_4("config_item %s: cleaning up\n", FUNC_1(VAR_0));
 if (VAR_0->ci_name != VAR_0->ci_namebuf)
  FUNC_3(VAR_0->ci_name);
 VAR_0->ci_name = ((void*)0);
 if (VAR_1 && VAR_1->ct_item_ops && VAR_1->ct_item_ops->release)
  VAR_1->ct_item_ops->release(VAR_0);
 if (VAR_2)
  FUNC_0(VAR_2);
 if (VAR_3)
  FUNC_2(VAR_3);
}
