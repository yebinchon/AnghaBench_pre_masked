
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f_uvc_opts {int func_inst; } ;
struct config_item {int dummy; } ;


 int FUNC_0 (struct config_item*) ;
 struct f_uvc_opts* FUNC_1 (struct config_item*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct config_item *VAR_0)
{
 struct f_uvc_opts *VAR_1 = FUNC_1(VAR_0);

 FUNC_3(FUNC_0(VAR_0));
 FUNC_2(&VAR_1->func_inst);
}
