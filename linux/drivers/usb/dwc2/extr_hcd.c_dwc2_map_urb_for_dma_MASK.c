
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct urb {int setup_dma; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct urb*,int ) ;
 int FUNC_2 (struct urb*) ;
 int FUNC_3 (struct usb_hcd*,struct urb*,int ) ;

__attribute__((used)) static int FUNC_4(struct usb_hcd *VAR_1, struct urb *VAR_2,
    gfp_t VAR_3)
{
 int VAR_4;


 FUNC_0(VAR_2->setup_dma &&
       (VAR_2->setup_dma & (VAR_0 - 1)));

 VAR_4 = FUNC_1(VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3);
 if (VAR_4)
  FUNC_2(VAR_2);

 return VAR_4;
}
