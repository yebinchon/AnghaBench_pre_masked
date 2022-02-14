
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ngene_channel {int number; int fe; TYPE_2__* dev; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_frontend {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pci_dev; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 struct dvb_frontend* FUNC_1 (int ,int ,struct i2c_adapter*,int) ;
 struct i2c_adapter* FUNC_2 (struct ngene_channel*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct ngene_channel *VAR_2)
{
 struct device *VAR_3 = &VAR_2->dev->pci_dev->dev;
 struct i2c_adapter *VAR_4 = FUNC_2(VAR_2);
 struct dvb_frontend *VAR_5;
 u8 VAR_6 = 4 + ((VAR_2->number & 1) ? 0x63 : 0x60);

 VAR_5 = FUNC_1(VAR_1, VAR_2->fe, VAR_4, VAR_6);
 if (!VAR_5) {
  VAR_5 = FUNC_1(VAR_1, VAR_2->fe, VAR_4, VAR_6 & ~4);
  if (!VAR_5) {
   FUNC_0(VAR_3, "stv6111_attach() failed!\n");
   return -VAR_0;
  }
 }
 return 0;
}
