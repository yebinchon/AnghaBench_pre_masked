
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbhs_priv {int dummy; } ;
struct usbhs_pipe {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct usbhs_priv*) ;
 int FUNC_2 (struct usbhs_pipe*) ;
 struct usbhs_priv* FUNC_3 (struct usbhs_pipe*) ;
 int FUNC_4 (struct usbhs_priv*,int ,int ) ;
 int FUNC_5 (struct usbhs_pipe*) ;

__attribute__((used)) static int FUNC_6(struct usbhs_pipe *VAR_4)
{
 struct usbhs_priv *VAR_5 = FUNC_3(VAR_4);
 int VAR_6 = 1024;
 u16 VAR_7 = FUNC_1(VAR_5) ? (VAR_1 | VAR_3) : VAR_3;
 FUNC_4(VAR_5, VAR_0, 0);
 FUNC_2(VAR_4);

 do {
  if (!(FUNC_5(VAR_4) & VAR_7))
   return 0;

  FUNC_0(10);

 } while (VAR_6--);

 return -VAR_2;
}
