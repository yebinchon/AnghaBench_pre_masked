
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct dvb_usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dvb_usb_device*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct usb_interface*) ;
 int VAR_14 ;
 int FUNC_2 (struct dvb_usb_device*) ;
 int FUNC_3 (struct dvb_usb_device*) ;
 int FUNC_4 (struct dvb_usb_device*,int) ;
 int VAR_15 ;
 int FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (struct usb_interface*,int *,int ,struct dvb_usb_device**,int ) ;

__attribute__((used)) static int FUNC_7(struct usb_interface *VAR_16,
         const struct usb_device_id *VAR_17)
{
 struct dvb_usb_device *VAR_18;
 int VAR_19;


 if (!FUNC_6(VAR_16, &VAR_14,
     VAR_2, &VAR_18, VAR_3)) {
  if (!FUNC_1(VAR_16)) {
   VAR_19 = -VAR_1;
   goto ret_uninit;
  }

  FUNC_0(VAR_18, 1);
  VAR_19 = FUNC_4(VAR_18, 0);
  if (VAR_19)
   goto ret_uninit;

  VAR_19 = FUNC_3(VAR_18);

  FUNC_4(VAR_18, 1);
  FUNC_0(VAR_18, 0);

  if (VAR_19 != 0)
   goto ret_uninit;


  FUNC_2(VAR_18);

  return 0;
 } else if (!FUNC_6(VAR_16,
     &VAR_9,
     VAR_2, ((void*)0), VAR_3) ||
     !FUNC_6(VAR_16,
     &VAR_5,
     VAR_2, ((void*)0), VAR_3) ||
     !FUNC_6(VAR_16,
     &VAR_10,
     VAR_2, ((void*)0), VAR_3) ||
     !FUNC_6(VAR_16,
     &VAR_6,
     VAR_2, ((void*)0), VAR_3) ||
     !FUNC_6(VAR_16,
     &VAR_7,
     VAR_2, ((void*)0), VAR_3) ||
     !FUNC_6(VAR_16,
     &VAR_12,
     VAR_2, ((void*)0), VAR_3) ||
     !FUNC_6(VAR_16,
     &VAR_11,
     VAR_2, ((void*)0), VAR_3) ||
     !FUNC_6(VAR_16, &VAR_4,
     VAR_2, ((void*)0), VAR_3) ||
     !FUNC_6(VAR_16,
     &VAR_8,
     VAR_2, ((void*)0), VAR_3) ||
     !FUNC_6(VAR_16, &VAR_13,
     VAR_2, ((void*)0), VAR_3) ||
     !FUNC_6(VAR_16, &VAR_15,
     VAR_2, ((void*)0), VAR_3) ||
     0)
  return 0;

 return -VAR_0;

ret_uninit:
 FUNC_5(VAR_16);

 return VAR_19;
}
