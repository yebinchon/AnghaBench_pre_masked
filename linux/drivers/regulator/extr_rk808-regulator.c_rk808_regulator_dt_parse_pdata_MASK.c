
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk808_regulator_data {int * dvs_gpio; } ;
struct regmap {int dummy; } ;
struct device_node {int dummy; } ;
struct device {int of_node; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct device*,char*,int,int) ;
 int FUNC_4 (struct device*,char*,int) ;
 int FUNC_5 (struct device*,char*,int,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 struct device_node* FUNC_7 (int ,char*) ;
 int FUNC_8 (struct device_node*) ;
 int FUNC_9 (struct regmap*,int ,int,int) ;

__attribute__((used)) static int FUNC_10(struct device *VAR_5,
       struct device *VAR_6,
       struct regmap *VAR_7,
       struct rk808_regulator_data *VAR_8)
{
 struct device_node *VAR_9;
 int VAR_10, VAR_11 = 0, VAR_12;

 VAR_9 = FUNC_7(VAR_6->of_node, "regulators");
 if (!VAR_9)
  return -VAR_0;

 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_8->dvs_gpio); VAR_12++) {
  VAR_8->dvs_gpio[VAR_12] =
   FUNC_5(VAR_6, "dvs", VAR_12,
            VAR_1);
  if (FUNC_1(VAR_8->dvs_gpio[VAR_12])) {
   VAR_11 = FUNC_2(VAR_8->dvs_gpio[VAR_12]);
   FUNC_3(VAR_5, "failed to get dvs%d gpio (%d)\n", VAR_12, VAR_11);
   goto dt_parse_end;
  }

  if (!VAR_8->dvs_gpio[VAR_12]) {
   FUNC_4(VAR_5, "there is no dvs%d gpio\n", VAR_12);
   continue;
  }

  VAR_10 = VAR_12 ? VAR_3 : VAR_2;
  VAR_11 = FUNC_9(VAR_7, VAR_4, VAR_10,
    FUNC_6(VAR_8->dvs_gpio[VAR_12]) ?
    0 : VAR_10);
 }

dt_parse_end:
 FUNC_8(VAR_9);
 return VAR_11;
}
