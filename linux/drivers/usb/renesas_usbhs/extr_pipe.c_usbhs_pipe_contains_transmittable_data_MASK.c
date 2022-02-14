
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usbhs_pipe {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct usbhs_pipe*) ;
 int FUNC_1 (struct usbhs_pipe*) ;

bool FUNC_2(struct usbhs_pipe *VAR_1)
{
 u16 VAR_2;


 if (FUNC_0(VAR_1))
  return 0;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 & VAR_0)
  return 1;

 return 0;
}
