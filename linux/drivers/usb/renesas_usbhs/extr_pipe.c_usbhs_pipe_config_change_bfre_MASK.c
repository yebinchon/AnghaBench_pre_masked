
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhs_pipe {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct usbhs_pipe*,int,int) ;
 scalar_t__ FUNC_1 (struct usbhs_pipe*) ;
 int FUNC_2 (struct usbhs_pipe*) ;
 int FUNC_3 (struct usbhs_pipe*) ;

void FUNC_4(struct usbhs_pipe *VAR_1, int VAR_2)
{
 if (FUNC_1(VAR_1))
  return;

 FUNC_3(VAR_1);

 if (!(VAR_2 ^ !!(FUNC_2(VAR_1) & VAR_0)))
  return;

 FUNC_0(VAR_1, 1, VAR_2);
}
