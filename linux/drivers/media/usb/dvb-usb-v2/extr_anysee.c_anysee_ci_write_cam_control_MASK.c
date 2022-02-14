
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_usb_device {int dummy; } ;
struct dvb_ca_en50221 {struct dvb_usb_device* data; } ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_usb_device*,int*,int,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct dvb_ca_en50221 *VAR_1, int VAR_2,
 u8 VAR_3, u8 VAR_4)
{
 struct dvb_usb_device *VAR_5 = VAR_1->data;
 int VAR_6;
 u8 VAR_7[] = {VAR_0, 0x05, 0x40, VAR_3, 0x00, 1, VAR_4};

 VAR_6 = FUNC_0(VAR_5, VAR_7, sizeof(VAR_7), ((void*)0), 0);
 if (VAR_6)
  return VAR_6;

 return 0;
}
