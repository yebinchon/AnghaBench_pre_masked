
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct i2c_client {int addr; int name; } ;
struct i2c_board_info {struct htcpld_chip* platform_data; int type; int addr; } ;
struct i2c_adapter {int dummy; } ;
struct htcpld_data {struct htcpld_chip* chip; } ;
struct htcpld_core_platform_data {int i2c_adapter_id; struct htcpld_chip_platform_data* chip; } ;
struct htcpld_chip_platform_data {int addr; } ;
struct htcpld_chip {int cache_out; int cache_in; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct htcpld_core_platform_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*,int ,...) ;
 int FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_adapter*,int ) ;
 struct i2c_adapter* FUNC_4 (int ) ;
 struct i2c_client* FUNC_5 (struct i2c_adapter*,struct i2c_board_info*) ;
 int FUNC_6 (struct i2c_client*,struct htcpld_chip*) ;
 int FUNC_7 (struct i2c_client*,int ) ;
 int FUNC_8 (struct i2c_board_info*,int ,int) ;
 struct htcpld_data* FUNC_9 (struct platform_device*) ;
 int FUNC_10 (int ,int ,char*,int) ;
 int FUNC_11 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_12(
  struct platform_device *VAR_4,
  int VAR_5)
{
 struct htcpld_data *VAR_6;
 struct device *VAR_7 = &VAR_4->dev;
 struct htcpld_core_platform_data *VAR_8;
 struct htcpld_chip *VAR_9;
 struct htcpld_chip_platform_data *VAR_10;
 struct i2c_adapter *VAR_11;
 struct i2c_client *VAR_12;
 struct i2c_board_info VAR_13;


 VAR_8 = FUNC_0(VAR_7);
 VAR_6 = FUNC_9(VAR_4);
 VAR_9 = &VAR_6->chip[VAR_5];
 VAR_10 = &VAR_8->chip[VAR_5];

 VAR_11 = FUNC_4(VAR_8->i2c_adapter_id);
 if (!VAR_11) {

  FUNC_1(VAR_7, "Chip at i2c address 0x%x: Invalid i2c adapter %d\n",
    VAR_10->addr, VAR_8->i2c_adapter_id);
  return -VAR_1;
 }

 if (!FUNC_3(VAR_11, VAR_2)) {
  FUNC_1(VAR_7, "i2c adapter %d non-functional\n",
    VAR_8->i2c_adapter_id);
  return -VAR_0;
 }

 FUNC_8(&VAR_13, 0, sizeof(struct i2c_board_info));
 VAR_13.addr = VAR_10->addr;
 FUNC_11(VAR_13.type, "htcpld-chip", VAR_3);
 VAR_13.platform_data = VAR_9;


 VAR_12 = FUNC_5(VAR_11, &VAR_13);
 if (!VAR_12) {

  FUNC_1(VAR_7, "Unable to add I2C device for 0x%x\n",
    VAR_10->addr);
  return -VAR_1;
 }

 FUNC_6(VAR_12, VAR_9);
 FUNC_10(VAR_12->name, VAR_3, "Chip_0x%x", VAR_12->addr);
 VAR_9->client = VAR_12;


 FUNC_2(VAR_12);
 VAR_9->cache_in = FUNC_7(VAR_12, VAR_9->cache_out);

 return 0;
}
