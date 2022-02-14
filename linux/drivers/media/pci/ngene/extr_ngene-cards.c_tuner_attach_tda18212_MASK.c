
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct tda18212_config {int if_dvbt_6; int if_dvbt_7; int if_dvbt_8; int if_dvbt2_6; int if_dvbt2_7; int if_dvbt2_8; int if_dvbc; int fe; } ;
struct ngene_channel {int number; int i2c_client_fe; struct i2c_client** i2c_client; int fe; TYPE_1__* dev; } ;
struct i2c_client {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;
struct TYPE_3__ {TYPE_2__* pci_dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;
 struct i2c_client* FUNC_1 (char*,int *,struct i2c_adapter*,int,struct tda18212_config*) ;
 struct i2c_adapter* FUNC_2 (struct ngene_channel*) ;
 int FUNC_3 (struct ngene_channel*,struct i2c_adapter*,int) ;

__attribute__((used)) static int FUNC_4(struct ngene_channel *VAR_2, u32 VAR_3)
{
 struct device *VAR_4 = &VAR_2->dev->pci_dev->dev;
 struct i2c_adapter *VAR_5 = FUNC_2(VAR_2);
 struct i2c_client *VAR_6;
 struct tda18212_config VAR_7 = {
  .fe = VAR_2->fe,
  .if_dvbt_6 = 3550,
  .if_dvbt_7 = 3700,
  .if_dvbt_8 = 4150,
  .if_dvbt2_6 = 3250,
  .if_dvbt2_7 = 4000,
  .if_dvbt2_8 = 4000,
  .if_dvbc = 5000,
 };
 u8 VAR_8 = (VAR_2->number & 1) ? 0x63 : 0x60;






 if (VAR_3 == VAR_0)
  FUNC_3(VAR_2, VAR_5, VAR_8);


 VAR_6 = FUNC_1("tda18212", ((void*)0), VAR_5, VAR_8, &VAR_7);
 if (!VAR_6)
  goto err;

 VAR_2->i2c_client[0] = VAR_6;
 VAR_2->i2c_client_fe = 1;

 return 0;
err:
 FUNC_0(VAR_4, "TDA18212 tuner not found. Device is not fully operational.\n");
 return -VAR_1;
}
