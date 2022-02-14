
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct urb {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (struct urb*,int ) ;
 int FUNC_1 (struct urb*) ;
 int FUNC_2 (struct usb_hcd*,struct urb*,int ) ;

__attribute__((used)) static int FUNC_3(struct usb_hcd *VAR_0, struct urb *VAR_1,
          gfp_t VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
 if (VAR_3)
  FUNC_1(VAR_1);

 return VAR_3;
}
