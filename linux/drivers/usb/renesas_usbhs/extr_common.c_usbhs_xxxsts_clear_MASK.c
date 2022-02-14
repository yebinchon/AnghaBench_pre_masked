
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbhs_priv {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct usbhs_priv*,int ) ;
 int FUNC_2 (struct usbhs_priv*,int,int) ;

void FUNC_3(struct usbhs_priv *VAR_1, u16 VAR_2, u16 VAR_3)
{
 u16 VAR_4 = (u16)FUNC_0(FUNC_1(VAR_1, VAR_0), 0);

 FUNC_2(VAR_1, VAR_2, ~(1 << VAR_3) & VAR_4);
}
