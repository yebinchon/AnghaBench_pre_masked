
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {TYPE_1__* adapter; int irq; struct device dev; } ;
struct ec_response_get_protocol_info {int dummy; } ;
struct ec_host_response_i2c {int dummy; } ;
struct ec_host_request_i2c {int dummy; } ;
struct cros_ec_device {int din_size; int dout_size; int phys_name; int pkt_xfer; int cmd_xfer; int irq; struct i2c_client* priv; struct device* dev; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cros_ec_device*) ;
 int FUNC_1 (struct device*,char*) ;
 struct cros_ec_device* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct i2c_client*,struct cros_ec_device*) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_4,
        const struct i2c_device_id *VAR_5)
{
 struct device *VAR_6 = &VAR_4->dev;
 struct cros_ec_device *VAR_7 = ((void*)0);
 int VAR_8;

 VAR_7 = FUNC_2(VAR_6, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_3(VAR_4, VAR_7);
 VAR_7->dev = VAR_6;
 VAR_7->priv = VAR_4;
 VAR_7->irq = VAR_4->irq;
 VAR_7->cmd_xfer = VAR_2;
 VAR_7->pkt_xfer = VAR_3;
 VAR_7->phys_name = VAR_4->adapter->name;
 VAR_7->din_size = sizeof(struct ec_host_response_i2c) +
      sizeof(struct ec_response_get_protocol_info);
 VAR_7->dout_size = sizeof(struct ec_host_request_i2c);

 VAR_8 = FUNC_0(VAR_7);
 if (VAR_8) {
  FUNC_1(VAR_6, "cannot register EC\n");
  return VAR_8;
 }

 return 0;
}
