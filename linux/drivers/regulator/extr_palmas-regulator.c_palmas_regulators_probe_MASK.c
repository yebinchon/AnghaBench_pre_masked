
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct regulator_config {struct palmas_pmic* driver_data; TYPE_2__* dev; int regmap; } ;
struct TYPE_8__ {struct device_node* of_node; int parent; } ;
struct platform_device {char* name; TYPE_2__ dev; } ;
struct palmas_pmic_platform_data {int dummy; } ;
struct palmas_pmic_driver_data {int (* smps_register ) (struct palmas_pmic*,struct palmas_pmic_driver_data*,struct palmas_pmic_platform_data*,char const*,struct regulator_config) ;int (* ldo_register ) (struct palmas_pmic*,struct palmas_pmic_driver_data*,struct palmas_pmic_platform_data*,char const*,struct regulator_config) ;} ;
struct palmas_pmic {int smps123; int smps12; int smps457; struct palmas* palmas; TYPE_2__* dev; } ;
struct palmas {int * regmap; struct palmas_pmic_driver_data* pmic_ddata; struct palmas_pmic* pmic; } ;
struct of_device_id {scalar_t__ data; } ;
struct device_node {int dummy; } ;
struct TYPE_9__ {int has_regen3; } ;
struct TYPE_7__ {int ctrl_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 struct palmas* FUNC_0 (int ) ;
 struct palmas_pmic_platform_data* FUNC_1 (TYPE_2__*) ;
 void* FUNC_2 (TYPE_2__*,int,int ) ;
 scalar_t__ FUNC_3 (struct device_node*,char*) ;
 struct of_device_id* FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int VAR_9 ;
 TYPE_3__ VAR_10 ;
 int FUNC_6 (TYPE_2__*,struct device_node*,struct palmas_pmic_platform_data*,struct palmas_pmic_driver_data*) ;
 TYPE_1__* VAR_11 ;
 int FUNC_7 (struct palmas*,int ,unsigned int*) ;
 int FUNC_8 (struct platform_device*,struct palmas_pmic*) ;
 int FUNC_9 (struct palmas_pmic*,struct palmas_pmic_driver_data*,struct palmas_pmic_platform_data*,char const*,struct regulator_config) ;
 int FUNC_10 (struct palmas_pmic*,struct palmas_pmic_driver_data*,struct palmas_pmic_platform_data*,char const*,struct regulator_config) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_12)
{
 struct palmas *VAR_13 = FUNC_0(VAR_12->dev.parent);
 struct palmas_pmic_platform_data *VAR_14 = FUNC_1(&VAR_12->dev);
 struct device_node *VAR_15 = VAR_12->dev.of_node;
 struct palmas_pmic_driver_data *VAR_16;
 struct regulator_config VAR_17 = { };
 struct palmas_pmic *VAR_18;
 const char *VAR_19;
 const struct of_device_id *VAR_20;
 int VAR_21 = 0;
 unsigned int VAR_22;

 VAR_20 = FUNC_4(FUNC_5(VAR_9), &VAR_12->dev);

 if (!VAR_20)
  return -VAR_0;

 VAR_16 = (struct palmas_pmic_driver_data *)VAR_20->data;
 VAR_14 = FUNC_2(&VAR_12->dev, sizeof(*VAR_14), VAR_2);
 if (!VAR_14)
  return -VAR_1;

 VAR_18 = FUNC_2(&VAR_12->dev, sizeof(*VAR_18), VAR_2);
 if (!VAR_18)
  return -VAR_1;

 if (FUNC_3(VAR_15, "ti,tps659038-pmic")) {
  VAR_11[VAR_3].ctrl_addr =
       VAR_8;
  VAR_10.has_regen3 = 0;
 }

 VAR_18->dev = &VAR_12->dev;
 VAR_18->palmas = VAR_13;
 VAR_13->pmic = VAR_18;
 FUNC_8(VAR_12, VAR_18);
 VAR_18->palmas->pmic_ddata = VAR_16;

 VAR_21 = FUNC_6(&VAR_12->dev, VAR_15, VAR_14, VAR_16);
 if (VAR_21)
  return VAR_21;

 VAR_21 = FUNC_7(VAR_13, VAR_4, &VAR_22);
 if (VAR_21)
  return VAR_21;

 if (VAR_22 & VAR_5) {
  VAR_18->smps123 = 1;
  VAR_18->smps12 = 1;
 }

 if (VAR_22 & VAR_6)
  VAR_18->smps457 = 1;

 VAR_17.regmap = VAR_13->regmap[VAR_7];
 VAR_17.dev = &VAR_12->dev;
 VAR_17.driver_data = VAR_18;
 VAR_19 = VAR_12->name;

 VAR_21 = VAR_16->smps_register(VAR_18, VAR_16, VAR_14, VAR_19,
      VAR_17);
 if (VAR_21)
  return VAR_21;

 VAR_21 = VAR_16->ldo_register(VAR_18, VAR_16, VAR_14, VAR_19,
     VAR_17);

 return VAR_21;
}
