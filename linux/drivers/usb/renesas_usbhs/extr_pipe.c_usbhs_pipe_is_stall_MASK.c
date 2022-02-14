
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct usbhs_pipe {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct usbhs_pipe*) ;

int FUNC_1(struct usbhs_pipe *VAR_3)
{
 u16 VAR_4 = FUNC_0(VAR_3) & VAR_0;

 return (int)(VAR_4 == VAR_1 || VAR_4 == VAR_2);
}
