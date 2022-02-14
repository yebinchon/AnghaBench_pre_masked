
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rtl28xxu_dev {int tuner; } ;
struct TYPE_4__ {struct device* parent; } ;
struct i2c_adapter {TYPE_2__ dev; } ;
struct dvb_usb_device {TYPE_1__* intf; struct rtl28xxu_dev* priv; } ;
struct device {int * type; } ;
struct TYPE_3__ {int dev; } ;



 int VAR_0 ;


 int FUNC_0 (int *,char*,int,int,int) ;
 int VAR_1 ;
 struct dvb_usb_device* FUNC_1 (struct i2c_adapter*) ;
 int FUNC_2 (struct dvb_usb_device*,int,int) ;
 int FUNC_3 (struct dvb_usb_device*,int,int) ;
 struct i2c_adapter* FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(void *VAR_2, int VAR_3,
  int VAR_4, int VAR_5)
{
 struct i2c_adapter *VAR_6 = VAR_2;
 struct device *VAR_7 = VAR_6->dev.parent;
 struct i2c_adapter *VAR_8;
 struct dvb_usb_device *VAR_9;
 struct rtl28xxu_dev *VAR_10;







 if (VAR_7 != ((void*)0) && VAR_7->type == &VAR_1)
  VAR_8 = FUNC_4(VAR_7);
 else
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_8);
 VAR_10 = VAR_9->priv;

 FUNC_0(&VAR_9->intf->dev, "component=%d cmd=%d arg=%d\n",
  VAR_3, VAR_4, VAR_5);

 switch (VAR_3) {
 case 130:
  switch (VAR_10->tuner) {
  case 129:
   return FUNC_2(VAR_9, VAR_4, VAR_5);
  case 128:
   return FUNC_3(VAR_9, VAR_4, VAR_5);
  }
 }

 return 0;
}
