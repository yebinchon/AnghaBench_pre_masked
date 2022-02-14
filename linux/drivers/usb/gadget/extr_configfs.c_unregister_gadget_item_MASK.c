
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gadget_info {int lock; } ;
struct config_item {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct gadget_info* FUNC_2 (struct config_item*) ;
 int FUNC_3 (struct gadget_info*) ;

void FUNC_4(struct config_item *VAR_0)
{
 struct gadget_info *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(&VAR_1->lock);
 FUNC_3(VAR_1);
 FUNC_1(&VAR_1->lock);
}
