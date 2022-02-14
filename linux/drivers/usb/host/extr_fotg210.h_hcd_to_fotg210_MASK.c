
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {scalar_t__ hcd_priv; } ;
struct fotg210_hcd {int dummy; } ;



__attribute__((used)) static inline struct fotg210_hcd *FUNC_0(struct usb_hcd *VAR_0)
{
 return (struct fotg210_hcd *)(VAR_0->hcd_priv);
}
