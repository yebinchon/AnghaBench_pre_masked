
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_priv {int dummy; } ;
struct usbhs_pipe {int dummy; } ;
struct usbhs_fifo {int ctr; } ;


 int VAR_0 ;
 int FUNC_0 (struct usbhs_pipe*) ;
 int FUNC_1 (struct usbhs_pipe*) ;
 scalar_t__ FUNC_2 (struct usbhs_pipe*) ;
 struct usbhs_priv* FUNC_3 (struct usbhs_pipe*) ;
 int FUNC_4 (struct usbhs_priv*,int ,int ) ;
 int FUNC_5 (struct usbhs_priv*,struct usbhs_fifo*) ;

__attribute__((used)) static void FUNC_6(struct usbhs_pipe *VAR_1,
         struct usbhs_fifo *VAR_2)
{
 struct usbhs_priv *VAR_3 = FUNC_3(VAR_1);
 int VAR_4 = 0;

 if (!FUNC_1(VAR_1)) {





  if (FUNC_2(VAR_1))
   VAR_4 = FUNC_0(VAR_1);
  if (!VAR_4)
   VAR_4 = FUNC_5(VAR_3, VAR_2);
 }





 if (!VAR_4)
  FUNC_4(VAR_3, VAR_2->ctr, VAR_0);
}
