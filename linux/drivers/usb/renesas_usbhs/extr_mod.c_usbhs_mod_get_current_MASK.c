
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_priv {int dummy; } ;
struct usbhs_mod_info {struct usbhs_mod* curt; } ;
struct usbhs_mod {int dummy; } ;


 struct usbhs_mod_info* FUNC_0 (struct usbhs_priv*) ;

struct usbhs_mod *FUNC_1(struct usbhs_priv *VAR_0)
{
 struct usbhs_mod_info *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->curt;
}
