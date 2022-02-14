
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbhs_priv {int dummy; } ;
struct usbhs_pipe {int dummy; } ;
struct usbhs_fifo {int sel; } ;


 int VAR_0 ;
 int FUNC_0 (struct usbhs_priv*,int ,int ,int ) ;
 struct usbhs_priv* FUNC_1 (struct usbhs_pipe*) ;

__attribute__((used)) static void FUNC_2(struct usbhs_pipe *VAR_1,
         struct usbhs_fifo *VAR_2,
         u16 VAR_3)
{
 struct usbhs_priv *VAR_4 = FUNC_1(VAR_1);

 FUNC_0(VAR_4, VAR_2->sel, VAR_0, VAR_3);
}
