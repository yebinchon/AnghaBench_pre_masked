
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct dvb_usb_device {struct usb_interface* intf; } ;
struct af9015_state {int regmap; int fe_mutex; } ;


 struct af9015_state* FUNC_0 (struct dvb_usb_device*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_usb_device *VAR_0)
{
 struct af9015_state *VAR_1 = FUNC_0(VAR_0);
 struct usb_interface *VAR_2 = VAR_0->intf;
 int VAR_3;

 FUNC_1(&VAR_2->dev, "\n");

 FUNC_2(&VAR_1->fe_mutex);


 VAR_3 = FUNC_3(VAR_1->regmap, 0x98e9, 0xff);
 if (VAR_3)
  goto error;

error:
 return VAR_3;
}
