
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {scalar_t__ hcd_priv; } ;
struct sl811 {int dummy; } ;



__attribute__((used)) static inline struct sl811 *FUNC_0(struct usb_hcd *VAR_0)
{
 return (struct sl811 *) (VAR_0->hcd_priv);
}
