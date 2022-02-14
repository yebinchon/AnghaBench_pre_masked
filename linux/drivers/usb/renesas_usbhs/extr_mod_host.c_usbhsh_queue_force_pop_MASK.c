
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_priv {int dummy; } ;
struct usbhs_pkt {int dummy; } ;
struct usbhs_pipe {int dummy; } ;


 struct usbhs_pkt* FUNC_0 (struct usbhs_pipe*,int *) ;
 int FUNC_1 (struct usbhs_priv*,struct usbhs_pkt*) ;

__attribute__((used)) static void FUNC_2(struct usbhs_priv *VAR_0,
       struct usbhs_pipe *VAR_1)
{
 struct usbhs_pkt *VAR_2;

 while (1) {
  VAR_2 = FUNC_0(VAR_1, ((void*)0));
  if (!VAR_2)
   break;






  FUNC_1(VAR_0, VAR_2);
 }
}
