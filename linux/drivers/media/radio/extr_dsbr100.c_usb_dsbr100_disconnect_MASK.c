
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct dsbr100_device {int v4l2_dev; int v4l2_lock; int videodev; int transfer_buffer; int usbdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int,int,int,int ,int,int) ;
 struct dsbr100_device* FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct usb_interface*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct usb_interface *VAR_4)
{
 struct dsbr100_device *VAR_5 = FUNC_3(VAR_4);

 FUNC_0(&VAR_5->v4l2_lock);





 FUNC_2(VAR_5->usbdev,
  FUNC_4(VAR_5->usbdev, 0),
  VAR_0,
  VAR_3 | VAR_2 | VAR_1,
  0x00, 0x00, VAR_5->transfer_buffer, 8, 300);
 FUNC_5(VAR_4, ((void*)0));
 FUNC_8(&VAR_5->videodev);
 FUNC_6(&VAR_5->v4l2_dev);
 FUNC_1(&VAR_5->v4l2_lock);
 FUNC_7(&VAR_5->v4l2_dev);
}
