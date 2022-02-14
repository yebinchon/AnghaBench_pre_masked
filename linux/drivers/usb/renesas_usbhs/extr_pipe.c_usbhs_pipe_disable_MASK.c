
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
 int FUNC_1 (int) ;
 int FUNC_2 (struct usbhs_pipe*) ;
 int FUNC_3 (struct usbhs_pipe*,int ,int ) ;

void FUNC_4(struct usbhs_pipe *VAR_3)
{
 int VAR_4 = 1024;
 u16 VAR_5;


 FUNC_0(VAR_3);

 FUNC_3(VAR_3, VAR_1, VAR_2);

 do {
  VAR_5 = FUNC_2(VAR_3);
  VAR_5 &= VAR_0;
  if (!VAR_5)
   break;

  FUNC_1(10);
 } while (VAR_4--);
}
