
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbtest_dev {int out_pipe; } ;
struct usb_device {int dummy; } ;
struct urb {int pipe; int transfer_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct usb_device*,int ) ;
 struct urb* FUNC_1 (struct usb_device*,int ,int,int ) ;
 int FUNC_2 (struct urb*) ;
 int FUNC_3 (struct usbtest_dev*,int,struct urb*) ;
 struct usb_device* FUNC_4 (struct usbtest_dev*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct usbtest_dev *VAR_2)
{
 int VAR_3;
 int VAR_4 = 0;
 struct urb *VAR_5;
 struct usb_device *VAR_6 = FUNC_4(VAR_2);
 unsigned VAR_7 = FUNC_0(VAR_6, VAR_2->out_pipe);






 VAR_5 = FUNC_1(VAR_6, 0, 2 * VAR_7, 0);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_5->transfer_flags |= VAR_1;

 VAR_3 = FUNC_5(VAR_2->out_pipe);
 VAR_5->pipe = VAR_2->out_pipe;
 VAR_4 = FUNC_3(VAR_2, VAR_3, VAR_5);

 FUNC_2(VAR_5);
 return VAR_4;
}
