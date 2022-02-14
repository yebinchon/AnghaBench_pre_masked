
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct config_item_type {TYPE_1__* ct_group_ops; } ;
struct config_item {struct config_item_type* ci_type; } ;
struct TYPE_2__ {int (* drop_item ) (int ,struct config_item*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct config_item*) ;
 int FUNC_2 (int ,struct config_item*) ;
 int FUNC_3 (struct config_item*) ;

__attribute__((used)) static void FUNC_4(struct config_item *VAR_0,
        struct config_item *VAR_1)
{
 const struct config_item_type *VAR_2;

 VAR_2 = VAR_0->ci_type;
 FUNC_0(!VAR_2);





 if (VAR_2->ct_group_ops && VAR_2->ct_group_ops->drop_item)
  VAR_2->ct_group_ops->drop_item(FUNC_3(VAR_0),
           VAR_1);
 else
  FUNC_1(VAR_1);
}
