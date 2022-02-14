
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhsg_uep {int dummy; } ;
struct usbhs_pkt {int dummy; } ;
struct usbhs_pipe {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct usbhs_pipe*) ;
 struct usbhs_pkt* FUNC_1 (struct usbhs_pipe*,int *) ;
 int FUNC_2 (struct usbhs_pkt*) ;
 int FUNC_3 (struct usbhsg_uep*,int ,int ) ;
 struct usbhs_pipe* FUNC_4 (struct usbhsg_uep*) ;

__attribute__((used)) static int FUNC_5(struct usbhsg_uep *VAR_1)
{
 struct usbhs_pipe *VAR_2 = FUNC_4(VAR_1);
 struct usbhs_pkt *VAR_3;

 while (1) {
  VAR_3 = FUNC_1(VAR_2, ((void*)0));
  if (!VAR_3)
   break;

  FUNC_3(VAR_1, FUNC_2(VAR_3), -VAR_0);
 }

 FUNC_0(VAR_2);

 return 0;
}
