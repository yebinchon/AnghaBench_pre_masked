
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ctrlrequest {int dummy; } ;
struct urb {int error_count; int interval; int number_of_packets; int start_frame; scalar_t__ setup_packet; int pipe; int actual_length; int transfer_buffer_length; int transfer_flags; int status; TYPE_1__* dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct usb_ctrlrequest*) ;
 int FUNC_5 (TYPE_1__*) ;

void FUNC_6(struct urb *VAR_1)
{
 struct device *VAR_2;

 if (!VAR_1) {
  FUNC_1("urb: null pointer!!\n");
  return;
 }

 if (!VAR_1->dev) {
  FUNC_1("urb->dev: null pointer!!\n");
  return;
 }

 VAR_2 = &VAR_1->dev->dev;

 FUNC_5(VAR_1->dev);

 FUNC_0(VAR_2, "   pipe                  :%08x ", VAR_1->pipe);

 FUNC_3(VAR_1->pipe);

 FUNC_0(VAR_2, "   status                :%d\n", VAR_1->status);
 FUNC_0(VAR_2, "   transfer_flags        :%08X\n", VAR_1->transfer_flags);
 FUNC_0(VAR_2, "   transfer_buffer_length:%d\n",
      VAR_1->transfer_buffer_length);
 FUNC_0(VAR_2, "   actual_length         :%d\n", VAR_1->actual_length);

 if (VAR_1->setup_packet && FUNC_2(VAR_1->pipe) == VAR_0)
  FUNC_4(
   (struct usb_ctrlrequest *)VAR_1->setup_packet);

 FUNC_0(VAR_2, "   start_frame           :%d\n", VAR_1->start_frame);
 FUNC_0(VAR_2, "   number_of_packets     :%d\n", VAR_1->number_of_packets);
 FUNC_0(VAR_2, "   interval              :%d\n", VAR_1->interval);
 FUNC_0(VAR_2, "   error_count           :%d\n", VAR_1->error_count);
}
