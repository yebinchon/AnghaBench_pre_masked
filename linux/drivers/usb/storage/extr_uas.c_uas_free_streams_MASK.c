
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_host_endpoint {int dummy; } ;
struct usb_device {int dummy; } ;
struct uas_dev_info {int intf; int data_out_pipe; int data_in_pipe; int status_pipe; struct usb_device* udev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct usb_host_endpoint**,int,int ) ;
 struct usb_host_endpoint* FUNC_1 (struct usb_device*,int ) ;

__attribute__((used)) static void FUNC_2(struct uas_dev_info *VAR_1)
{
 struct usb_device *VAR_2 = VAR_1->udev;
 struct usb_host_endpoint *VAR_3[3];

 VAR_3[0] = FUNC_1(VAR_2, VAR_1->status_pipe);
 VAR_3[1] = FUNC_1(VAR_2, VAR_1->data_in_pipe);
 VAR_3[2] = FUNC_1(VAR_2, VAR_1->data_out_pipe);
 FUNC_0(VAR_1->intf, VAR_3, 3, VAR_0);
}
