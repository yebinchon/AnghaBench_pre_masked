
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_usb_device {int dummy; } ;
struct dvb_ca_en50221 {struct dvb_usb_device* data; } ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_usb_device*,int*,int,int*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_ca_en50221 *VAR_1, int VAR_2,
 u8 VAR_3)
{
 struct dvb_usb_device *VAR_4 = VAR_1->data;
 int VAR_5;
 u8 VAR_6[] = {VAR_0, 0x04, 0x40, VAR_3, 0x00, 1};
 u8 VAR_7;

 VAR_5 = FUNC_0(VAR_4, VAR_6, sizeof(VAR_6), &VAR_7, 1);
 if (VAR_5)
  return VAR_5;

 return VAR_7;
}
