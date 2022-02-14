
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbhs_pipe {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usbhs_pipe*) ;

int FUNC_1(struct usbhs_pipe *VAR_2)
{
 u16 VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 & VAR_0)
  return 0;

 return -VAR_1;
}
