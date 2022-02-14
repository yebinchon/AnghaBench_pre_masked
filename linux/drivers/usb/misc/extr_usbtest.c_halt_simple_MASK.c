
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbtest_dev {scalar_t__ out_pipe; scalar_t__ in_pipe; } ;
struct usb_device {scalar_t__ speed; } ;
struct urb {scalar_t__ pipe; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct urb* FUNC_0 (struct usb_device*,int ,int,int ) ;
 int FUNC_1 (struct urb*) ;
 int FUNC_2 (struct usbtest_dev*,int,struct urb*) ;
 struct usb_device* FUNC_3 (struct usbtest_dev*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct usbtest_dev *VAR_3)
{
 int VAR_4;
 int VAR_5 = 0;
 struct urb *VAR_6;
 struct usb_device *VAR_7 = FUNC_3(VAR_3);

 if (VAR_7->speed == VAR_2)
  VAR_6 = FUNC_0(VAR_7, 0, 1024, 0);
 else
  VAR_6 = FUNC_0(VAR_7, 0, 512, 0);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 if (VAR_3->in_pipe) {
  VAR_4 = FUNC_4(VAR_3->in_pipe) | VAR_1;
  VAR_6->pipe = VAR_3->in_pipe;
  VAR_5 = FUNC_2(VAR_3, VAR_4, VAR_6);
  if (VAR_5 < 0)
   goto done;
 }

 if (VAR_3->out_pipe) {
  VAR_4 = FUNC_4(VAR_3->out_pipe);
  VAR_6->pipe = VAR_3->out_pipe;
  VAR_5 = FUNC_2(VAR_3, VAR_4, VAR_6);
 }
done:
 FUNC_1(VAR_6);
 return VAR_5;
}
