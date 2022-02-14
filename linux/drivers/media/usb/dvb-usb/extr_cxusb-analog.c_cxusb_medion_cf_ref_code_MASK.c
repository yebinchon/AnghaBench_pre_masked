
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_usb_device {int dummy; } ;
struct cxusb_bt656_params {scalar_t__ fmode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct dvb_usb_device*,struct cxusb_bt656_params*,int,unsigned int,unsigned char*) ;
 int FUNC_1 (struct dvb_usb_device*,struct cxusb_bt656_params*,int,unsigned char*) ;
 int FUNC_2 (struct dvb_usb_device*,struct cxusb_bt656_params*,unsigned char*) ;

__attribute__((used)) static bool FUNC_3(struct dvb_usb_device *VAR_3,
         struct cxusb_bt656_params *VAR_4,
         bool VAR_5,
         unsigned int VAR_6,
         unsigned int VAR_7,
         unsigned char VAR_8[4])
{
 if (VAR_4->fmode == VAR_1) {
  FUNC_1(VAR_3, VAR_4, VAR_5, VAR_8);
 } else if (VAR_4->fmode == VAR_0) {
  FUNC_0(VAR_3, VAR_4, VAR_5,
            VAR_7, VAR_8);
  return 0;
 } else if (VAR_4->fmode == VAR_2) {
  FUNC_2(VAR_3, VAR_4, VAR_8);
  return 0;
 }

 return 1;
}
