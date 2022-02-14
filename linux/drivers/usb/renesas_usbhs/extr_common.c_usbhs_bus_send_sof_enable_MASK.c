
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbhs_priv {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct usbhs_priv*,int ,int,int) ;
 struct device* FUNC_2 (struct usbhs_priv*) ;
 int FUNC_3 (struct usbhs_priv*,int ) ;

void FUNC_4(struct usbhs_priv *VAR_3)
{
 u16 VAR_4 = FUNC_3(VAR_3, VAR_0) & (VAR_2 | VAR_1);

 if (VAR_4 != VAR_2) {
  struct device *VAR_5 = FUNC_2(VAR_3);
  FUNC_0(VAR_5, "usbhs should be reset\n");
 }

 FUNC_1(VAR_3, VAR_0, (VAR_2 | VAR_1), VAR_1);
}
