
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct urb {int dummy; } ;
struct musb {scalar_t__ hwvers; } ;
typedef int gfp_t ;


 scalar_t__ VAR_0 ;
 struct musb* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (struct urb*,int ) ;
 int FUNC_2 (struct urb*) ;
 int FUNC_3 (struct usb_hcd*,struct urb*,int ) ;

__attribute__((used)) static int FUNC_4(struct usb_hcd *VAR_1, struct urb *VAR_2,
          gfp_t VAR_3)
{
 struct musb *VAR_4 = FUNC_0(VAR_1);
 int VAR_5;







 if (VAR_4->hwvers < VAR_0)
  return FUNC_3(VAR_1, VAR_2, VAR_3);

 VAR_5 = FUNC_1(VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_3);
 if (VAR_5)
  FUNC_2(VAR_2);

 return VAR_5;
}
