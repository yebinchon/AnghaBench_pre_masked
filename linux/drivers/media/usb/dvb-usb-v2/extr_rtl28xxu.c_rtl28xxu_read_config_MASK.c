
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtl28xxu_dev {scalar_t__ chip_id; } ;
struct dvb_usb_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct rtl28xxu_dev* FUNC_0 (struct dvb_usb_device*) ;
 int FUNC_1 (struct dvb_usb_device*) ;
 int FUNC_2 (struct dvb_usb_device*) ;

__attribute__((used)) static int FUNC_3(struct dvb_usb_device *VAR_1)
{
 struct rtl28xxu_dev *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2->chip_id == VAR_0)
  return FUNC_1(VAR_1);
 else
  return FUNC_2(VAR_1);
}
