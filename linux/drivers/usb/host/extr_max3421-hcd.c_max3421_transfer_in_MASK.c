
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct urb {int pipe; } ;
struct max3421_hcd {int hien; scalar_t__ curr_len; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 struct max3421_hcd* FUNC_2 (struct usb_hcd*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct usb_hcd *VAR_1, struct urb *VAR_2)
{
 struct max3421_hcd *VAR_3 = FUNC_2(VAR_1);
 int VAR_4 = FUNC_3(VAR_2->pipe);

 VAR_3->curr_len = 0;
 VAR_3->hien |= FUNC_0(VAR_0);
 return FUNC_1(VAR_4);
}
