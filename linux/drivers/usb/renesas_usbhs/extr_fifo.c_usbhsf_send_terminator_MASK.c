
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_priv {int dummy; } ;
struct usbhs_pipe {int dummy; } ;
struct usbhs_fifo {int ctr; } ;


 int VAR_0 ;
 int FUNC_0 (struct usbhs_priv*,int ,int ,int ) ;
 struct usbhs_priv* FUNC_1 (struct usbhs_pipe*) ;

__attribute__((used)) static void FUNC_2(struct usbhs_pipe *VAR_1,
       struct usbhs_fifo *VAR_2)
{
 struct usbhs_priv *VAR_3 = FUNC_1(VAR_1);

 FUNC_0(VAR_3, VAR_2->ctr, VAR_0, VAR_0);
}
