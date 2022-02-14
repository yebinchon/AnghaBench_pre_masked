
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_function {int dummy; } ;
struct f_uas {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct f_uas*) ;
 struct f_uas* FUNC_1 (struct usb_function*) ;
 int FUNC_2 (struct f_uas*) ;

__attribute__((used)) static void FUNC_3(struct usb_function *VAR_2)
{
 struct f_uas *VAR_3 = FUNC_1(VAR_2);

 if (VAR_3->flags & VAR_1)
  FUNC_2(VAR_3);
 else if (VAR_3->flags & VAR_0)
  FUNC_0(VAR_3);
 VAR_3->flags = 0;
}
