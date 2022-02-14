
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ngene_channel {int number; TYPE_2__* dev; } ;
struct i2c_adapter {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pci_dev; } ;
struct TYPE_3__ {struct device dev; } ;


 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (struct i2c_adapter*,int,int,int*) ;
 int FUNC_2 (struct i2c_adapter*,int,int,int*,int) ;
 int FUNC_3 (struct i2c_adapter*,int,int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct ngene_channel *VAR_0, struct i2c_adapter *VAR_1)
{
 struct device *VAR_2 = &VAR_0->dev->pci_dev->dev;
 u8 VAR_3 = 0x10;
 u8 VAR_4, VAR_5[2];
 int VAR_6;

 VAR_6 = FUNC_2(VAR_1, VAR_3, 0x04, VAR_5, 2);
 if (VAR_6 < 0)
  return VAR_6;

 if (VAR_5[0] != 0x01) {
  FUNC_0(VAR_2, "Invalid XO2 on channel %d\n", VAR_0->number);
  return -1;
 }

 FUNC_1(VAR_1, VAR_3, 0x08, &VAR_4);
 if (VAR_4 != 0) {
  FUNC_3(VAR_1, VAR_3, 0x08, 0x00);
  FUNC_4(100);
 }

 FUNC_3(VAR_1, VAR_3, 0x08, 0x04);
 FUNC_5(2000, 3000);

 FUNC_3(VAR_1, VAR_3, 0x08, 0x07);
 FUNC_3(VAR_1, VAR_3, 0x09, 1);

 FUNC_3(VAR_1, VAR_3, 0x0a, 0x01);
 FUNC_3(VAR_1, VAR_3, 0x0b, 0x01);

 FUNC_5(2000, 3000);

 FUNC_3(VAR_1, VAR_3, 0x08, 0x87);

 return 0;
}
