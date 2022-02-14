
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbhs_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct usbhs_priv*,int ) ;

int FUNC_1(struct usbhs_priv *VAR_6)
{
 u16 VAR_7 = FUNC_0(VAR_6, VAR_0);

 switch (VAR_1 & VAR_7) {
 case 128:
  return VAR_4;
 case 130:
  return VAR_2;
 case 129:
  return VAR_3;
 }

 return VAR_5;
}
