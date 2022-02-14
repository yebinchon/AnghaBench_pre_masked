
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_interface {int dev; } ;
struct req_t {int member_5; int* member_6; int member_4; int member_3; int member_2; int member_1; int member_0; } ;
struct dvb_usb_device {struct usb_interface* intf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dvb_usb_device*,struct req_t*) ;
 int FUNC_1 (int *,char*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_usb_device *VAR_3, const char **VAR_4)
{
 struct usb_interface *VAR_5 = VAR_3->intf;
 int VAR_6;
 u8 VAR_7;
 struct req_t VAR_8 = {VAR_1, 0, 0, 0, 0, 1, VAR_7};

 VAR_6 = FUNC_0(VAR_3, &VAR_8);
 if (VAR_6)
  return VAR_6;

 FUNC_1(&VAR_5->dev, "reply %02x\n", VAR_7);

 if (VAR_7 == 0x02)
  VAR_6 = VAR_2;
 else
  VAR_6 = VAR_0;

 return VAR_6;
}
