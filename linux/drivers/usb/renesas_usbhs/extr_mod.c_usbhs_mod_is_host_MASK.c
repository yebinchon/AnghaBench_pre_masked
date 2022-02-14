
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_priv {int dummy; } ;
struct usbhs_mod_info {struct usbhs_mod** mod; } ;
struct usbhs_mod {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct usbhs_mod* FUNC_0 (struct usbhs_priv*) ;
 struct usbhs_mod_info* FUNC_1 (struct usbhs_priv*) ;

int FUNC_2(struct usbhs_priv *VAR_2)
{
 struct usbhs_mod *VAR_3 = FUNC_0(VAR_2);
 struct usbhs_mod_info *VAR_4 = FUNC_1(VAR_2);

 if (!VAR_3)
  return -VAR_0;

 return VAR_4->mod[VAR_1] == VAR_3;
}
