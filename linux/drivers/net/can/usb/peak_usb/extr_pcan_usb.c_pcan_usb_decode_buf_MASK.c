
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {scalar_t__ actual_length; int transfer_buffer; } ;
struct peak_usb_device {int netdev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (struct peak_usb_device*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct peak_usb_device *VAR_2, struct urb *VAR_3)
{
 int VAR_4 = 0;

 if (VAR_3->actual_length > VAR_1) {
  VAR_4 = FUNC_1(VAR_2, VAR_3->transfer_buffer,
   VAR_3->actual_length);

 } else if (VAR_3->actual_length > 0) {
  FUNC_0(VAR_2->netdev, "usb message length error (%u)\n",
   VAR_3->actual_length);
  VAR_4 = -VAR_0;
 }

 return VAR_4;
}
