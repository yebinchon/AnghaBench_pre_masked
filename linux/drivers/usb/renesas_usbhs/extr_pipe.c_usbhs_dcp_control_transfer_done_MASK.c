
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_priv {int dummy; } ;
struct usbhs_pipe {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct usbhs_priv*) ;
 int FUNC_2 (struct usbhs_pipe*) ;
 int FUNC_3 (struct usbhs_pipe*) ;
 struct usbhs_priv* FUNC_4 (struct usbhs_pipe*) ;
 int FUNC_5 (struct usbhs_pipe*,int ,int ) ;

void FUNC_6(struct usbhs_pipe *VAR_1)
{
 struct usbhs_priv *VAR_2 = FUNC_4(VAR_1);

 FUNC_0(!FUNC_3(VAR_1));

 FUNC_2(VAR_1);

 if (!FUNC_1(VAR_2))
  FUNC_5(VAR_1, VAR_0, VAR_0);
}
