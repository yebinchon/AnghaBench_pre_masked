
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {struct uni_screen* vc_uni_screen; } ;
struct uni_screen {int dummy; } ;


 int FUNC_0 (struct uni_screen*) ;

__attribute__((used)) static void FUNC_1(struct vc_data *VAR_0, struct uni_screen *VAR_1)
{
 FUNC_0(VAR_0->vc_uni_screen);
 VAR_0->vc_uni_screen = VAR_1;
}
