
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct lp8727_platform_data {int dummy; } ;
struct lp8727_chg {TYPE_1__* dev; int xfer_lock; struct lp8727_platform_data* pdata; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_5__ {scalar_t__ of_node; } ;
struct i2c_client {TYPE_1__ dev; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct lp8727_platform_data*) ;
 int FUNC_1 (struct lp8727_platform_data*) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 struct lp8727_platform_data* FUNC_3 (TYPE_1__*) ;
 struct lp8727_chg* FUNC_4 (TYPE_1__*,int,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct i2c_client*,struct lp8727_chg*) ;
 int FUNC_7 (struct lp8727_chg*) ;
 struct lp8727_platform_data* FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (struct lp8727_chg*) ;
 int FUNC_10 (struct lp8727_chg*) ;
 int FUNC_11 (struct lp8727_chg*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_4, const struct i2c_device_id *VAR_5)
{
 struct lp8727_chg *VAR_6;
 struct lp8727_platform_data *VAR_7;
 int VAR_8;

 if (!FUNC_5(VAR_4->adapter, VAR_3))
  return -VAR_0;

 if (VAR_4->dev.of_node) {
  VAR_7 = FUNC_8(&VAR_4->dev);
  if (FUNC_0(VAR_7))
   return FUNC_1(VAR_7);
 } else {
  VAR_7 = FUNC_3(&VAR_4->dev);
 }

 VAR_6 = FUNC_4(&VAR_4->dev, sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_6->client = VAR_4;
 VAR_6->dev = &VAR_4->dev;
 VAR_6->pdata = VAR_7;
 FUNC_6(VAR_4, VAR_6);

 FUNC_12(&VAR_6->xfer_lock);

 VAR_8 = FUNC_7(VAR_6);
 if (VAR_8) {
  FUNC_2(VAR_6->dev, "i2c communication err: %d", VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_9(VAR_6);
 if (VAR_8) {
  FUNC_2(VAR_6->dev, "power supplies register err: %d", VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_10(VAR_6);
 if (VAR_8) {
  FUNC_2(VAR_6->dev, "irq handler err: %d", VAR_8);
  FUNC_11(VAR_6);
  return VAR_8;
 }

 return 0;
}
