
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct rn5t618 {long variant; int regmap; } ;
struct of_device_id {scalar_t__ data; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_9__ {int of_node; } ;
struct i2c_client {TYPE_3__ dev; } ;
struct TYPE_8__ {int priority; int notifier_call; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,char*,...) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 struct rn5t618* FUNC_5 (TYPE_3__*,int,int ) ;
 int FUNC_6 (TYPE_3__*,int,int ,int ,int *,int ,int *) ;
 int FUNC_7 (struct i2c_client*,int *) ;
 int FUNC_8 (struct i2c_client*,struct rn5t618*) ;
 scalar_t__ FUNC_9 (int ) ;
 struct of_device_id* FUNC_10 (int ,TYPE_3__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_11 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct rn5t618* VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__ VAR_10 ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_11,
        const struct i2c_device_id *VAR_12)
{
 const struct of_device_id *VAR_13;
 struct rn5t618 *VAR_14;
 int VAR_15;

 VAR_13 = FUNC_10(VAR_5, &VAR_11->dev);
 if (!VAR_13) {
  FUNC_3(&VAR_11->dev, "Failed to find matching DT ID\n");
  return -VAR_0;
 }

 VAR_14 = FUNC_5(&VAR_11->dev, sizeof(*VAR_14), VAR_2);
 if (!VAR_14)
  return -VAR_1;

 FUNC_8(VAR_11, VAR_14);
 VAR_14->variant = (long)VAR_13->data;

 VAR_14->regmap = FUNC_7(VAR_11, &VAR_8);
 if (FUNC_1(VAR_14->regmap)) {
  VAR_15 = FUNC_2(VAR_14->regmap);
  FUNC_3(&VAR_11->dev, "regmap init failed: %d\n", VAR_15);
  return VAR_15;
 }

 VAR_15 = FUNC_6(&VAR_11->dev, -1, VAR_4,
       FUNC_0(VAR_4), ((void*)0), 0, ((void*)0));
 if (VAR_15) {
  FUNC_3(&VAR_11->dev, "failed to add sub-devices: %d\n", VAR_15);
  return VAR_15;
 }

 VAR_6 = VAR_14;
 if (FUNC_9(VAR_11->dev.of_node)) {
  if (!VAR_3)
   VAR_3 = VAR_7;
  else
   FUNC_4(&VAR_11->dev, "Poweroff callback already assigned\n");
 }

 VAR_10.notifier_call = VAR_9;
 VAR_10.priority = 192;

 VAR_15 = FUNC_11(&VAR_10);
 if (VAR_15) {
  FUNC_3(&VAR_11->dev, "cannot register restart handler, %d\n", VAR_15);
  return VAR_15;
 }

 return 0;
}
