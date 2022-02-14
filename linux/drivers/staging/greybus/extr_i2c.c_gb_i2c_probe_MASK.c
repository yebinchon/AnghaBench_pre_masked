
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * parent; } ;
struct i2c_adapter {int class; int name; TYPE_2__ dev; int * algo; int owner; } ;
struct gbphy_device_id {int dummy; } ;
struct gbphy_device {int dev; TYPE_1__* cport_desc; int bundle; } ;
struct gb_i2c_device {struct i2c_adapter adapter; struct gbphy_device* gbphy_dev; struct gb_connection* connection; } ;
struct gb_connection {int dummy; } ;
struct TYPE_3__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct gb_connection*) ;
 int FUNC_1 (struct gb_connection*) ;
 int VAR_4 ;
 struct gb_connection* FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (struct gb_connection*) ;
 int FUNC_4 (struct gb_connection*) ;
 int FUNC_5 (struct gb_connection*) ;
 int FUNC_6 (struct gb_connection*,struct gb_i2c_device*) ;
 int FUNC_7 (struct gbphy_device*,struct gb_i2c_device*) ;
 int VAR_5 ;
 int FUNC_8 (struct gb_i2c_device*) ;
 int FUNC_9 (struct gbphy_device*) ;
 int FUNC_10 (struct i2c_adapter*) ;
 int FUNC_11 (struct i2c_adapter*,struct gb_i2c_device*) ;
 int FUNC_12 (struct gb_i2c_device*) ;
 struct gb_i2c_device* FUNC_13 (int,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int,char*) ;

__attribute__((used)) static int FUNC_16(struct gbphy_device *VAR_6,
   const struct gbphy_device_id *VAR_7)
{
 struct gb_connection *VAR_8;
 struct gb_i2c_device *VAR_9;
 struct i2c_adapter *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_13(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_8 =
  FUNC_2(VAR_6->bundle,
         FUNC_14(VAR_6->cport_desc->id),
         ((void*)0));
 if (FUNC_0(VAR_8)) {
  VAR_11 = FUNC_1(VAR_8);
  goto exit_i2cdev_free;
 }

 VAR_9->connection = VAR_8;
 FUNC_6(VAR_8, VAR_9);
 VAR_9->gbphy_dev = VAR_6;
 FUNC_7(VAR_6, VAR_9);

 VAR_11 = FUNC_5(VAR_8);
 if (VAR_11)
  goto exit_connection_destroy;

 VAR_11 = FUNC_8(VAR_9);
 if (VAR_11)
  goto exit_connection_disable;


 VAR_10 = &VAR_9->adapter;
 VAR_10->owner = VAR_4;
 VAR_10->class = VAR_2 | VAR_3;
 VAR_10->algo = &VAR_5;


 VAR_10->dev.parent = &VAR_6->dev;
 FUNC_15(VAR_10->name, sizeof(VAR_10->name), "Greybus i2c adapter");
 FUNC_11(VAR_10, VAR_9);

 VAR_11 = FUNC_10(VAR_10);
 if (VAR_11)
  goto exit_connection_disable;

 FUNC_9(VAR_6);
 return 0;

exit_connection_disable:
 FUNC_4(VAR_8);
exit_connection_destroy:
 FUNC_3(VAR_8);
exit_i2cdev_free:
 FUNC_12(VAR_9);

 return VAR_11;
}
