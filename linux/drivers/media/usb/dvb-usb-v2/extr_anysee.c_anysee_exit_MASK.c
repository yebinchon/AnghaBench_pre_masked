
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_usb_device {int dummy; } ;
struct anysee_state {scalar_t__* i2c_client; } ;


 void FUNC_0 (struct dvb_usb_device*) ;
 int FUNC_1 (struct dvb_usb_device*) ;
 struct anysee_state* FUNC_2 (struct dvb_usb_device*) ;

__attribute__((used)) static void FUNC_3(struct dvb_usb_device *VAR_0)
{
 struct anysee_state *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->i2c_client[0])
  FUNC_1(VAR_0);

 return FUNC_0(VAR_0);
}
