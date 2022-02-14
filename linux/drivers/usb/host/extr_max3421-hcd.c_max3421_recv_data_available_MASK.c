
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct usb_hcd {int dummy; } ;
struct urb {scalar_t__ actual_length; scalar_t__ transfer_buffer_length; void* transfer_buffer; } ;
struct max3421_hcd {size_t curr_len; struct urb* curr_urb; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct max3421_hcd* FUNC_1 (struct usb_hcd*) ;
 size_t FUNC_2 (struct usb_hcd*,int ) ;
 int FUNC_3 (struct usb_hcd*,int ,void*,size_t) ;
 int FUNC_4 (struct usb_hcd*,int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct usb_hcd *VAR_5)
{
 struct max3421_hcd *VAR_6 = FUNC_1(VAR_5);
 struct urb *VAR_7 = VAR_6->curr_urb;
 size_t VAR_8, VAR_9;
 u8 VAR_10;

 VAR_10 = FUNC_2(VAR_5, VAR_3);

 if (VAR_10 > VAR_0)
  VAR_10 = VAR_0;
 if (VAR_7->actual_length >= VAR_7->transfer_buffer_length)
  VAR_8 = 0;
 else
  VAR_8 = VAR_7->transfer_buffer_length - VAR_7->actual_length;
 VAR_9 = VAR_10;
 if (VAR_9 > VAR_8)
  VAR_9 = VAR_8;
 if (VAR_9 > 0) {
  void *VAR_11 = VAR_7->transfer_buffer + VAR_7->actual_length;

  FUNC_3(VAR_5, VAR_4, VAR_11, VAR_9);
  VAR_7->actual_length += VAR_9;
  VAR_6->curr_len = VAR_9;
 }


 FUNC_4(VAR_5, VAR_2, FUNC_0(VAR_1));
}
