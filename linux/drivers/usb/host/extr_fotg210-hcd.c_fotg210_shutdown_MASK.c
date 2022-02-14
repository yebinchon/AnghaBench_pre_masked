
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct fotg210_hcd {int shutdown; int hrtimer; int lock; scalar_t__ enabled_hrtimer_events; int rh_state; } ;


 int VAR_0 ;
 int FUNC_0 (struct fotg210_hcd*) ;
 struct fotg210_hcd* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct usb_hcd *VAR_1)
{
 struct fotg210_hcd *VAR_2 = FUNC_1(VAR_1);

 FUNC_3(&VAR_2->lock);
 VAR_2->shutdown = 1;
 VAR_2->rh_state = VAR_0;
 VAR_2->enabled_hrtimer_events = 0;
 FUNC_4(&VAR_2->lock);

 FUNC_0(VAR_2);

 FUNC_2(&VAR_2->hrtimer);
}
