
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_priv {int dummy; } ;
struct usbhs_mod_info {struct usbhs_mod** mod; } ;
struct usbhs_mod {int dummy; } ;




 struct usbhs_mod_info* FUNC_0 (struct usbhs_priv*) ;

struct usbhs_mod *FUNC_1(struct usbhs_priv *VAR_0, int VAR_1)
{
 struct usbhs_mod_info *VAR_2 = FUNC_0(VAR_0);
 struct usbhs_mod *VAR_3 = ((void*)0);

 switch (VAR_1) {
 case 128:
 case 129:
  VAR_3 = VAR_2->mod[VAR_1];
  break;
 }

 return VAR_3;
}
