
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_usb_device {int udev; } ;
struct anysee_state {scalar_t__ has_ci; } ;


 int FUNC_0 (struct dvb_usb_device*) ;
 int FUNC_1 (struct dvb_usb_device*,int) ;
 int FUNC_2 (struct dvb_usb_device*,int,int) ;
 struct anysee_state* FUNC_3 (struct dvb_usb_device*) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct dvb_usb_device *VAR_0)
{
 struct anysee_state *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;





 VAR_2 = FUNC_4(VAR_0->udev, 0, 0);
 if (VAR_2)
  return VAR_2;


 VAR_2 = FUNC_2(VAR_0, 0x01, 0x03);
 if (VAR_2)
  return VAR_2;


 VAR_2 = FUNC_1(VAR_0, 1);
 if (VAR_2)
  return VAR_2;


 if (VAR_1->has_ci) {
  VAR_2 = FUNC_0(VAR_0);
  if (VAR_2)
   return VAR_2;
 }

 return 0;
}
