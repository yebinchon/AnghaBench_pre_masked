
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ngene_ci {struct ngene* dev; int en; } ;
struct ngene {TYPE_2__* channel; struct ngene_ci ci; TYPE_1__* pci_dev; } ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;
struct cxd2099_cfg {int * en; } ;
struct TYPE_4__ {struct i2c_client** i2c_client; int i2c_adapter; } ;
struct TYPE_3__ {struct device dev; } ;


 struct cxd2099_cfg VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*) ;
 struct i2c_client* FUNC_3 (char*,int *,int *,int,struct cxd2099_cfg*) ;
 int FUNC_4 (int *,int*) ;

__attribute__((used)) static void FUNC_5(struct ngene *VAR_1)
{
 struct device *VAR_2 = &VAR_1->pci_dev->dev;
 struct ngene_ci *VAR_3 = &VAR_1->ci;
 struct cxd2099_cfg VAR_4 = VAR_0;
 struct i2c_client *VAR_5;
 int VAR_6;
 u8 VAR_7;


 VAR_6 = FUNC_4(&VAR_1->channel[0].i2c_adapter, &VAR_7);
 if (!VAR_6) {
  FUNC_0(VAR_2, "No CXD2099AR found\n");
  return;
 }

 if (VAR_7 != 1) {
  FUNC_2(VAR_2, "CXD2099AR is uninitialized!\n");
  return;
 }

 VAR_4.en = &VAR_3->en;
 VAR_5 = FUNC_3("cxd2099", ((void*)0),
      &VAR_1->channel[0].i2c_adapter,
      0x40, &VAR_4);
 if (!VAR_5)
  goto err;

 VAR_3->dev = VAR_1;
 VAR_1->channel[0].i2c_client[0] = VAR_5;
 return;

err:
 FUNC_1(VAR_2, "CXD2099AR attach failed\n");
 return;
}
