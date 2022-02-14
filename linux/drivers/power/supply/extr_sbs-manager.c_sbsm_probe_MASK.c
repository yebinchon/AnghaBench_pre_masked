
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sbsm_data {int is_ltc1760; int supported_bats; TYPE_1__* muxc; int psy; struct i2c_client* client; } ;
struct power_supply_desc {int name; } ;
struct power_supply_config {int of_node; struct sbsm_data* drv_data; } ;
struct i2c_device_id {int name; } ;
struct device {int of_node; } ;
struct i2c_client {int addr; struct device dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_4__ {struct sbsm_data* priv; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct device*,char*,...) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,int ,char*,int ) ;
 struct power_supply_desc* FUNC_6 (struct device*,int *,int,int ) ;
 struct sbsm_data* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (struct device*,struct power_supply_desc*,struct power_supply_config*) ;
 int FUNC_9 (struct i2c_adapter*,int ) ;
 int FUNC_10 (TYPE_1__*,int ,int,int ) ;
 TYPE_1__* FUNC_11 (struct i2c_adapter*,struct device*,int,int ,int ,int *,int *) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (struct i2c_client*,struct sbsm_data*) ;
 int VAR_9 ;
 int FUNC_14 (struct sbsm_data*) ;
 int FUNC_15 (struct i2c_client*,int ) ;
 int VAR_10 ;
 int FUNC_16 (int ,char*) ;

__attribute__((used)) static int FUNC_17(struct i2c_client *VAR_11,
        const struct i2c_device_id *VAR_12)
{
 struct i2c_adapter *VAR_13 = VAR_11->adapter;
 struct sbsm_data *VAR_14;
 struct device *VAR_15 = &VAR_11->dev;
 struct power_supply_desc *VAR_16;
 struct power_supply_config VAR_17 = {};
 int VAR_18 = 0, VAR_19;


 if (VAR_11->addr != 0x0a)
  return -VAR_0;

 if (!FUNC_9(VAR_13, VAR_4))
  return -VAR_2;

 VAR_14 = FUNC_7(VAR_15, sizeof(*VAR_14), VAR_3);
 if (!VAR_14)
  return -VAR_1;

 FUNC_13(VAR_11, VAR_14);

 VAR_14->client = VAR_11;
 VAR_14->is_ltc1760 = !!FUNC_16(VAR_12->name, "ltc1760");

 VAR_18 = FUNC_15(VAR_11, VAR_6);
 if (VAR_18 < 0)
  return VAR_18;
 VAR_14->supported_bats = VAR_18 & VAR_7;
 VAR_14->muxc = FUNC_11(VAR_13, VAR_15, VAR_8, 0,
       VAR_5, &VAR_10, ((void*)0));
 if (!VAR_14->muxc) {
  FUNC_3(VAR_15, "failed to alloc i2c mux\n");
  VAR_18 = -VAR_1;
  goto err_mux_alloc;
 }
 VAR_14->muxc->priv = VAR_14;


 for (VAR_19 = 0; VAR_19 < VAR_8; ++VAR_19) {
  if (VAR_14->supported_bats & FUNC_0(VAR_19)) {
   VAR_18 = FUNC_10(VAR_14->muxc, 0, VAR_19 + 1, 0);
   if (VAR_18)
    break;
  }
 }
 if (VAR_18) {
  FUNC_3(VAR_15, "failed to register i2c mux channel %d\n", VAR_19 + 1);
  goto err_mux_register;
 }

 VAR_16 = FUNC_6(VAR_15, &VAR_9,
    sizeof(struct power_supply_desc),
    VAR_3);
 if (!VAR_16) {
  VAR_18 = -VAR_1;
  goto err_psy;
 }

 VAR_16->name = FUNC_5(VAR_15, VAR_3, "sbsm-%s",
     FUNC_4(&VAR_11->dev));
 if (!VAR_16->name) {
  VAR_18 = -VAR_1;
  goto err_psy;
 }
 VAR_18 = FUNC_14(VAR_14);
 if (VAR_18 < 0)
  goto err_psy;

 VAR_17.drv_data = VAR_14;
 VAR_17.of_node = VAR_15->of_node;
 VAR_14->psy = FUNC_8(VAR_15, VAR_16, &VAR_17);
 if (FUNC_1(VAR_14->psy)) {
  VAR_18 = FUNC_2(VAR_14->psy);
  FUNC_3(VAR_15, "failed to register power supply %s\n",
   VAR_16->name);
  goto err_psy;
 }

 return 0;

err_psy:
err_mux_register:
 FUNC_12(VAR_14->muxc);

err_mux_alloc:
 return VAR_18;
}
