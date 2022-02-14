
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_priv {int dummy; } ;
struct usbhs_mod_info {struct usbhs_mod** mod; } ;
struct usbhs_mod {struct usbhs_priv* priv; } ;


 struct usbhs_mod_info* FUNC_0 (struct usbhs_priv*) ;

void FUNC_1(struct usbhs_priv *VAR_0, struct usbhs_mod *VAR_1, int VAR_2)
{
 struct usbhs_mod_info *VAR_3 = FUNC_0(VAR_0);

 VAR_3->mod[VAR_2] = VAR_1;
 VAR_1->priv = VAR_0;
}
