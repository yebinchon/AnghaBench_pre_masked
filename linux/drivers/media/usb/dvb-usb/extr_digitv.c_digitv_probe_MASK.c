
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_interface {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct dvb_usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dvb_usb_device*,int ,int ,int*,int,int *,int ) ;
 int VAR_4 ;
 int FUNC_1 (struct usb_interface*,int *,int ,struct dvb_usb_device**,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_interface *VAR_5,
  const struct usb_device_id *VAR_6)
{
 struct dvb_usb_device *VAR_7;
 int VAR_8 = FUNC_1(VAR_5, &VAR_4, VAR_0, &VAR_7,
          VAR_3);
 if (VAR_8 == 0) {
  u8 VAR_9[4] = { 0 };

  if (VAR_7 != ((void*)0)) {
   VAR_9[0] = 1;
   FUNC_0(VAR_7,VAR_2,0,VAR_9,4,((void*)0),0);

   VAR_9[0] = 0;
   FUNC_0(VAR_7,VAR_1,0,VAR_9,4,((void*)0),0);
  }
 }
 return VAR_8;
}
