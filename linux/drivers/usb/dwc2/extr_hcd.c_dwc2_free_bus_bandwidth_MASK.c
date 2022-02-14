
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_hcd {int dummy; } ;
struct usb_bus {int bandwidth_allocated; int bandwidth_int_reqs; int bandwidth_isoc_reqs; } ;
struct urb {int interval; int pipe; } ;


 scalar_t__ VAR_0 ;
 struct usb_bus* FUNC_0 (struct usb_hcd*) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct usb_hcd *VAR_1, u16 VAR_2,
        struct urb *VAR_3)
{
 struct usb_bus *VAR_4 = FUNC_0(VAR_1);

 if (VAR_3->interval)
  VAR_4->bandwidth_allocated -= VAR_2 / VAR_3->interval;
 if (FUNC_1(VAR_3->pipe) == VAR_0)
  VAR_4->bandwidth_isoc_reqs--;
 else
  VAR_4->bandwidth_int_reqs--;
}
