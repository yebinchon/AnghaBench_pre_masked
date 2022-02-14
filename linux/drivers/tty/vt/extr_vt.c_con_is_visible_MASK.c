
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {struct vc_data const** vc_display_fg; } ;


 int FUNC_0 () ;

bool FUNC_1(const struct vc_data *VAR_0)
{
 FUNC_0();

 return *VAR_0->vc_display_fg == VAR_0;
}
