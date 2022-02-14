
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbhs_pipe {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usbhs_pipe*,int,int) ;

void FUNC_1(struct usbhs_pipe *VAR_2, int VAR_3)
{
 u16 VAR_4 = (VAR_0 | VAR_1);
 u16 VAR_5;







 switch (VAR_3) {
 case 0:
  VAR_5 = VAR_0;
  break;
 case 1:
  VAR_5 = VAR_1;
  break;
 default:
  return;
 }

 FUNC_0(VAR_2, VAR_4, VAR_5);
}
