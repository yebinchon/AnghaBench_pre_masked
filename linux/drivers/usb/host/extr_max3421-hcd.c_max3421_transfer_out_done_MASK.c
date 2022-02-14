
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct usb_hcd {int dummy; } ;
struct urb {scalar_t__ actual_length; scalar_t__ transfer_buffer_length; int transfer_flags; int pipe; int dev; } ;
struct max3421_hcd {scalar_t__ curr_len; } ;


 int VAR_0 ;
 struct max3421_hcd* FUNC_0 (struct usb_hcd*) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct usb_hcd *VAR_1, struct urb *VAR_2)
{
 struct max3421_hcd *VAR_3 = FUNC_0(VAR_1);

 VAR_2->actual_length += VAR_3->curr_len;
 if (VAR_2->actual_length < VAR_2->transfer_buffer_length)
  return 0;
 if (VAR_2->transfer_flags & VAR_0) {







  u32 VAR_4 = FUNC_1(VAR_2->dev, VAR_2->pipe, 1);

  if (VAR_3->curr_len == VAR_4)
   return 0;
 }
 return 1;
}
