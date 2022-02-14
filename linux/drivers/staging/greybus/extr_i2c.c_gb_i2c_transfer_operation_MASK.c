
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct i2c_msg {int dummy; } ;
struct gb_operation {TYPE_1__* response; } ;
struct gb_i2c_transfer_response {int dummy; } ;
struct gb_i2c_device {TYPE_2__* gbphy_dev; struct gb_connection* connection; } ;
struct gb_connection {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_5__ {struct device dev; } ;
struct TYPE_4__ {struct gb_i2c_transfer_response* payload; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (struct i2c_msg*,int,struct gb_i2c_transfer_response*) ;
 int FUNC_2 (int) ;
 struct gb_operation* FUNC_3 (struct gb_connection*,struct i2c_msg*,int) ;
 int FUNC_4 (struct gb_operation*) ;
 int FUNC_5 (struct gb_operation*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_8(struct gb_i2c_device *VAR_1,
         struct i2c_msg *VAR_2, u32 VAR_3)
{
 struct gb_connection *VAR_4 = VAR_1->connection;
 struct device *VAR_5 = &VAR_1->gbphy_dev->dev;
 struct gb_operation *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(VAR_4, VAR_2, VAR_3);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_6(VAR_1->gbphy_dev);
 if (VAR_7)
  goto exit_operation_put;

 VAR_7 = FUNC_5(VAR_6);
 if (!VAR_7) {
  struct gb_i2c_transfer_response *VAR_8;

  VAR_8 = VAR_6->response->payload;
  FUNC_1(VAR_2, VAR_3, VAR_8);
  VAR_7 = VAR_3;
 } else if (!FUNC_2(VAR_7)) {
  FUNC_0(VAR_5, "transfer operation failed (%d)\n", VAR_7);
 }

 FUNC_7(VAR_1->gbphy_dev);

exit_operation_put:
 FUNC_4(VAR_6);

 return VAR_7;
}
