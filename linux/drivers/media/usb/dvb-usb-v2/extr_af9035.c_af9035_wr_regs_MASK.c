
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wbuf ;
typedef int u8 ;
typedef int u32 ;
struct usb_req {int member_1; int member_2; int* member_3; int * member_5; int member_4; int member_0; } ;
struct usb_interface {int dev; } ;
struct dvb_usb_device {struct usb_interface* intf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dvb_usb_device*,struct usb_req*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int*,int*,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_usb_device *VAR_3, u32 VAR_4, u8 *VAR_5, int VAR_6)
{
 struct usb_interface *VAR_7 = VAR_3->intf;
 u8 VAR_8[VAR_2];
 u8 VAR_9 = (VAR_4 >> 16) & 0xff;
 struct usb_req VAR_10 = { VAR_0, VAR_9, 6 + VAR_6, VAR_8, 0, ((void*)0) };

 if (6 + VAR_6 > sizeof(VAR_8)) {
  FUNC_1(&VAR_7->dev, "i2c wr: len=%d is too big!\n", VAR_6);
  return -VAR_1;
 }

 VAR_8[0] = VAR_6;
 VAR_8[1] = 2;
 VAR_8[2] = 0;
 VAR_8[3] = 0;
 VAR_8[4] = (VAR_4 >> 8) & 0xff;
 VAR_8[5] = (VAR_4 >> 0) & 0xff;
 FUNC_2(&VAR_8[6], VAR_5, VAR_6);

 return FUNC_0(VAR_3, &VAR_10);
}
