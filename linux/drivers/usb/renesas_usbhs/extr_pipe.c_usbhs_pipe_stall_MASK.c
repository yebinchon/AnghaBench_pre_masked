
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbhs_pipe {int dummy; } ;



 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct usbhs_pipe*) ;
 int FUNC_1 (struct usbhs_pipe*,int,int ) ;

void FUNC_2(struct usbhs_pipe *VAR_3)
{
 u16 VAR_4 = FUNC_0(VAR_3);

 VAR_4 &= VAR_0;





 switch (VAR_4) {
 case 128:
  FUNC_1(VAR_3, VAR_0, VAR_1);
  break;
 case 129:
  FUNC_1(VAR_3, VAR_0, VAR_2);
  break;
 }
}
