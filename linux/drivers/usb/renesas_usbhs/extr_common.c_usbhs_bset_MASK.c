
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct usbhs_priv {int dummy; } ;


 int FUNC_0 (struct usbhs_priv*,int ) ;
 int FUNC_1 (struct usbhs_priv*,int ,int) ;

void FUNC_2(struct usbhs_priv *VAR_0, u32 VAR_1, u16 VAR_2, u16 VAR_3)
{
 u16 VAR_4 = FUNC_0(VAR_0, VAR_1);

 VAR_4 &= ~VAR_2;
 VAR_4 |= VAR_3 & VAR_2;

 FUNC_1(VAR_0, VAR_1, VAR_4);
}
