
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_priv {int dummy; } ;
struct usbhs_pipe {int dummy; } ;
struct usbhs_fifo {int dummy; } ;


 struct usbhs_priv* FUNC_0 (struct usbhs_pipe*) ;
 int FUNC_1 (struct usbhs_pipe*,struct usbhs_fifo*) ;
 scalar_t__ FUNC_2 (struct usbhs_pipe*,struct usbhs_fifo*,int) ;
 int FUNC_3 (struct usbhs_pipe*,struct usbhs_fifo*) ;
 struct usbhs_fifo* FUNC_4 (struct usbhs_priv*) ;

void FUNC_5(struct usbhs_pipe *VAR_0)
{
 struct usbhs_priv *VAR_1 = FUNC_0(VAR_0);
 struct usbhs_fifo *VAR_2 = FUNC_4(VAR_1);


 if (FUNC_2(VAR_0, VAR_2, 1) < 0)
  return;
 FUNC_1(VAR_0, VAR_2);
 FUNC_3(VAR_0, VAR_2);


 if (FUNC_2(VAR_0, VAR_2, 0) < 0)
  return;
 FUNC_1(VAR_0, VAR_2);
 FUNC_3(VAR_0, VAR_2);
}
