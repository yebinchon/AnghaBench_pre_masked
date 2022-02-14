
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wbuf ;
typedef int u8 ;
typedef int u32 ;
struct usb_req {int member_1; int member_2; int* member_3; int member_4; int* member_5; int member_0; } ;
struct dvb_usb_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_usb_device*,struct usb_req*) ;

__attribute__((used)) static int FUNC_1(struct dvb_usb_device *VAR_1, u32 VAR_2, u8 *VAR_3, int VAR_4)
{
 u8 VAR_5[] = { VAR_4, 2, 0, 0, (VAR_2 >> 8) & 0xff, VAR_2 & 0xff };
 u8 VAR_6 = (VAR_2 >> 16) & 0xff;
 struct usb_req VAR_7 = { VAR_0, VAR_6, sizeof(VAR_5), VAR_5, &VAR_4, *VAR_3 };

 return FUNC_0(VAR_1, &VAR_7);
}
