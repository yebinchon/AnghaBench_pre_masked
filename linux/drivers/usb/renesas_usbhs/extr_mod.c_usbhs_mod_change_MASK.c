
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_priv {int dummy; } ;
struct usbhs_mod_info {struct usbhs_mod* curt; struct usbhs_mod** mod; } ;
struct usbhs_mod {int dummy; } ;


 int VAR_0 ;


 struct usbhs_mod_info* FUNC_0 (struct usbhs_priv*) ;

int FUNC_1(struct usbhs_priv *VAR_1, int VAR_2)
{
 struct usbhs_mod_info *VAR_3 = FUNC_0(VAR_1);
 struct usbhs_mod *VAR_4 = ((void*)0);
 int VAR_5 = 0;


 switch (VAR_2) {
 case 128:
 case 129:
  VAR_4 = VAR_3->mod[VAR_2];
  break;
 default:
  VAR_5 = -VAR_0;
 }
 VAR_3->curt = VAR_4;

 return VAR_5;
}
