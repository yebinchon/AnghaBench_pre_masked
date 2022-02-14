
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_priv {int dummy; } ;
struct usbhs_pipe {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct usbhs_pipe*) ;
 struct usbhs_priv* FUNC_1 (struct usbhs_pipe*) ;
 int FUNC_2 (struct usbhs_priv*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct usbhs_pipe *VAR_1)
{
 struct usbhs_priv *VAR_2 = FUNC_1(VAR_1);
 FUNC_2(VAR_2, VAR_0, 0xF & FUNC_0(VAR_1));
}
