
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_usb_device {int dummy; } ;
struct af9015_state {int dual_mode; } ;


 struct af9015_state* FUNC_0 (struct dvb_usb_device*) ;

__attribute__((used)) static int FUNC_1(struct dvb_usb_device *VAR_0)
{
 struct af9015_state *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->dual_mode + 1;
}
