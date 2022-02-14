
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rpm_regulator_data {scalar_t__ name; int supply; int resource; int template; } ;
struct regulator_dev {int dummy; } ;
struct regulator_config {struct qcom_rpm_reg* driver_data; TYPE_1__* dev; } ;
struct TYPE_7__ {int id; int of_parse_cb; scalar_t__ of_match; int supply_name; scalar_t__ name; int type; int owner; } ;
struct qcom_rpm_reg {TYPE_3__ desc; struct qcom_rpm* rpm; int resource; TYPE_1__* dev; int lock; } ;
struct qcom_rpm {int dummy; } ;
struct TYPE_6__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct of_device_id {struct rpm_regulator_data* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 struct qcom_rpm* FUNC_3 (int ) ;
 struct qcom_rpm_reg* FUNC_4 (TYPE_1__*,int,int ) ;
 struct regulator_dev* FUNC_5 (TYPE_1__*,TYPE_3__*,struct regulator_config*) ;
 int FUNC_6 (struct qcom_rpm_reg*,int ,int) ;
 int FUNC_7 (int *) ;
 struct of_device_id* FUNC_8 (int ,TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_7)
{
 const struct rpm_regulator_data *VAR_8;
 const struct of_device_id *VAR_9;
 struct regulator_config VAR_10 = { };
 struct regulator_dev *VAR_11;
 struct qcom_rpm_reg *VAR_12;
 struct qcom_rpm *VAR_13;

 VAR_13 = FUNC_3(VAR_7->dev.parent);
 if (!VAR_13) {
  FUNC_2(&VAR_7->dev, "unable to retrieve handle to rpm\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_8(VAR_5, &VAR_7->dev);
 if (!VAR_9) {
  FUNC_2(&VAR_7->dev, "failed to match device\n");
  return -VAR_0;
 }

 for (VAR_8 = VAR_9->data; VAR_8->name; VAR_8++) {
  VAR_12 = FUNC_4(&VAR_7->dev, sizeof(*VAR_12), VAR_2);
  if (!VAR_12)
   return -VAR_1;

  FUNC_6(VAR_12, VAR_8->template, sizeof(*VAR_12));
  FUNC_7(&VAR_12->lock);

  VAR_12->dev = &VAR_7->dev;
  VAR_12->resource = VAR_8->resource;
  VAR_12->rpm = VAR_13;

  VAR_12->desc.id = -1;
  VAR_12->desc.owner = VAR_4;
  VAR_12->desc.type = VAR_3;
  VAR_12->desc.name = VAR_8->name;
  VAR_12->desc.supply_name = VAR_8->supply;
  VAR_12->desc.of_match = VAR_8->name;
  VAR_12->desc.of_parse_cb = VAR_6;

  VAR_10.dev = &VAR_7->dev;
  VAR_10.driver_data = VAR_12;
  VAR_11 = FUNC_5(&VAR_7->dev, &VAR_12->desc, &VAR_10);
  if (FUNC_0(VAR_11)) {
   FUNC_2(&VAR_7->dev, "failed to register %s\n", VAR_8->name);
   return FUNC_1(VAR_11);
  }
 }

 return 0;
}
