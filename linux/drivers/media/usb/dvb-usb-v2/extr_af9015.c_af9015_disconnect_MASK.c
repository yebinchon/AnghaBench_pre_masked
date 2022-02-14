
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct dvb_usb_device {struct usb_interface* intf; } ;
struct af9015_state {int regmap; } ;


 struct af9015_state* FUNC_0 (struct dvb_usb_device*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct dvb_usb_device *VAR_0)
{
 struct af9015_state *VAR_1 = FUNC_0(VAR_0);
 struct usb_interface *VAR_2 = VAR_0->intf;

 FUNC_1(&VAR_2->dev, "\n");

 FUNC_2(VAR_1->regmap);
}
