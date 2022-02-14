
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_priv {int base; } ;
struct platform_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int VAR_0 ;
 int FUNC_2 (struct usbhs_priv*,int ,struct platform_device*,int ,int) ;
 struct device* FUNC_3 (struct usbhs_priv*) ;
 struct platform_device* FUNC_4 (struct usbhs_priv*) ;
 int FUNC_5 (struct usbhs_priv*,int) ;
 int FUNC_6 (struct usbhs_priv*) ;
 scalar_t__ FUNC_7 (struct usbhs_priv*) ;

__attribute__((used)) static void FUNC_8(struct usbhs_priv *VAR_1, int VAR_2)
{
 struct platform_device *VAR_3 = FUNC_4(VAR_1);
 struct device *VAR_4 = FUNC_3(VAR_1);

 if (VAR_2) {

  FUNC_0(VAR_4);


  if (FUNC_7(VAR_1))
   return;


  FUNC_2(VAR_1, VAR_0, VAR_3, VAR_1->base, VAR_2);


  FUNC_5(VAR_1, VAR_2);
 } else {

  FUNC_5(VAR_1, VAR_2);


  FUNC_2(VAR_1, VAR_0, VAR_3, VAR_1->base, VAR_2);


  FUNC_6(VAR_1);


  FUNC_1(VAR_4);
 }
}
