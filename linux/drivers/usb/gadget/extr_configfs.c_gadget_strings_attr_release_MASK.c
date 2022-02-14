
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gadget_strings {int list; struct gadget_strings* serialnumber; struct gadget_strings* product; struct gadget_strings* manufacturer; } ;
struct config_item {int dummy; } ;


 int FUNC_0 (struct gadget_strings*) ;
 int FUNC_1 (int *) ;
 struct gadget_strings* FUNC_2 (struct config_item*) ;

__attribute__((used)) static void FUNC_3(struct config_item *VAR_0)
{
 struct gadget_strings *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_1->manufacturer);
 FUNC_0(VAR_1->product);
 FUNC_0(VAR_1->serialnumber);

 FUNC_1(&VAR_1->list);
 FUNC_0(VAR_1);
}
