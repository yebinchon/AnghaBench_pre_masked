
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_anchor {int urb_list; int suspend_wakeups; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct usb_anchor *VAR_0)
{
 return FUNC_0(&VAR_0->suspend_wakeups) == 0 &&
  FUNC_1(&VAR_0->urb_list);
}
