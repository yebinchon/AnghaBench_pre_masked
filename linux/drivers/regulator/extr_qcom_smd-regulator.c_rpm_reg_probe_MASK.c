
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct rpm_regulator_data {scalar_t__ name; int supply; int desc; int id; int type; } ;
struct regulator_dev {int dummy; } ;
struct regulator_config {struct qcom_rpm_reg* driver_data; TYPE_1__* dev; } ;
struct qcom_smd_rpm {int dummy; } ;
struct TYPE_8__ {int id; scalar_t__ of_match; int supply_name; scalar_t__ name; int type; int owner; } ;
struct qcom_rpm_reg {TYPE_2__ desc; struct qcom_smd_rpm* rpm; int id; int type; TYPE_1__* dev; } ;
struct TYPE_7__ {int parent; } ;
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
 struct qcom_smd_rpm* FUNC_3 (int ) ;
 struct qcom_rpm_reg* FUNC_4 (TYPE_1__*,int,int ) ;
 struct regulator_dev* FUNC_5 (TYPE_1__*,TYPE_2__*,struct regulator_config*) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;
 struct of_device_id* FUNC_7 (int ,TYPE_1__*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_6)
{
 const struct rpm_regulator_data *VAR_7;
 const struct of_device_id *VAR_8;
 struct regulator_config VAR_9 = { };
 struct regulator_dev *VAR_10;
 struct qcom_rpm_reg *VAR_11;
 struct qcom_smd_rpm *VAR_12;

 VAR_12 = FUNC_3(VAR_6->dev.parent);
 if (!VAR_12) {
  FUNC_2(&VAR_6->dev, "unable to retrieve handle to rpm\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_7(VAR_5, &VAR_6->dev);
 if (!VAR_8) {
  FUNC_2(&VAR_6->dev, "failed to match device\n");
  return -VAR_0;
 }

 for (VAR_7 = VAR_8->data; VAR_7->name; VAR_7++) {
  VAR_11 = FUNC_4(&VAR_6->dev, sizeof(*VAR_11), VAR_2);
  if (!VAR_11)
   return -VAR_1;

  VAR_11->dev = &VAR_6->dev;
  VAR_11->type = VAR_7->type;
  VAR_11->id = VAR_7->id;
  VAR_11->rpm = VAR_12;

  FUNC_6(&VAR_11->desc, VAR_7->desc, sizeof(VAR_11->desc));

  VAR_11->desc.id = -1;
  VAR_11->desc.owner = VAR_4;
  VAR_11->desc.type = VAR_3;
  VAR_11->desc.name = VAR_7->name;
  VAR_11->desc.supply_name = VAR_7->supply;
  VAR_11->desc.of_match = VAR_7->name;

  VAR_9.dev = &VAR_6->dev;
  VAR_9.driver_data = VAR_11;
  VAR_10 = FUNC_5(&VAR_6->dev, &VAR_11->desc, &VAR_9);
  if (FUNC_0(VAR_10)) {
   FUNC_2(&VAR_6->dev, "failed to register %s\n", VAR_7->name);
   return FUNC_1(VAR_10);
  }
 }

 return 0;
}
