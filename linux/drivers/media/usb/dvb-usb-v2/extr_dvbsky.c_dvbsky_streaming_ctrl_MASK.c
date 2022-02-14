
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_usb_device {int dummy; } ;
struct dvb_frontend {int dummy; } ;


 int FUNC_0 (struct dvb_usb_device*,int) ;
 struct dvb_usb_device* FUNC_1 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0, int VAR_1)
{
 struct dvb_usb_device *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2, (VAR_1 == 0) ? 0 : 1);
}
