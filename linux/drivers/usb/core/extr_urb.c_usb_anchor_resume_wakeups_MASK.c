
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_anchor {int wait; int suspend_wakeups; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct usb_anchor*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct usb_anchor *VAR_0)
{
 if (!VAR_0)
  return;

 FUNC_0(&VAR_0->suspend_wakeups);
 if (FUNC_1(VAR_0))
  FUNC_2(&VAR_0->wait);
}
