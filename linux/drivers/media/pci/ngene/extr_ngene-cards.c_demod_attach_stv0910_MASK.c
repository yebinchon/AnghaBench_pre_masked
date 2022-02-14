
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stv0910_cfg {int adr; } ;
struct ngene_channel {int number; int * fe; TYPE_2__* dev; } ;
struct lnbh25_config {int i2c_address; } ;
struct i2c_adapter {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pci_dev; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 void* FUNC_1 (int ,int *,...) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 struct lnbh25_config VAR_2 ;
 int VAR_3 ;
 struct stv0910_cfg VAR_4 ;

__attribute__((used)) static int FUNC_3(struct ngene_channel *VAR_5,
    struct i2c_adapter *VAR_6)
{
 struct device *VAR_7 = &VAR_5->dev->pci_dev->dev;
 struct stv0910_cfg VAR_8 = VAR_4;
 struct lnbh25_config VAR_9 = VAR_2;

 VAR_5->fe = FUNC_1(VAR_3, VAR_6, &VAR_8, (VAR_5->number & 1));
 if (!VAR_5->fe) {
  VAR_8.adr = 0x6c;
  VAR_5->fe = FUNC_1(VAR_3, VAR_6,
          &VAR_8, (VAR_5->number & 1));
 }
 if (!VAR_5->fe) {
  FUNC_0(VAR_7, "stv0910_attach() failed!\n");
  return -VAR_0;
 }





 VAR_9.i2c_address = (((VAR_5->number & 1) ? 0x0d : 0x0c) << 1);
 if (!FUNC_1(VAR_1, VAR_5->fe, &VAR_9, VAR_6)) {
  VAR_9.i2c_address = (((VAR_5->number & 1) ? 0x09 : 0x08) << 1);
  if (!FUNC_1(VAR_1, VAR_5->fe, &VAR_9, VAR_6)) {
   FUNC_0(VAR_7, "lnbh25_attach() failed!\n");
   FUNC_2(VAR_5->fe);
   VAR_5->fe = ((void*)0);
   return -VAR_0;
  }
 }

 return 0;
}
