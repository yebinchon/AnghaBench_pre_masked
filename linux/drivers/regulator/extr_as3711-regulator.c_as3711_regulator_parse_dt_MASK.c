
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct of_regulator_match {struct device_node* of_node; int init_data; } ;
struct device_node {int dummy; } ;
struct device {TYPE_1__* parent; } ;
struct as3711_regulator_pdata {int * init_data; } ;
struct TYPE_2__ {int of_node; } ;


 int VAR_0 ;
 struct of_regulator_match* VAR_1 ;
 int FUNC_0 (struct device*,char*,...) ;
 struct as3711_regulator_pdata* FUNC_1 (struct device*) ;
 struct device_node* FUNC_2 (int ,char*) ;
 int FUNC_3 (struct device_node*) ;
 int FUNC_4 (TYPE_1__*,struct device_node*,struct of_regulator_match*,int const) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_2,
    struct device_node **VAR_3, const int VAR_4)
{
 struct as3711_regulator_pdata *VAR_5 = FUNC_1(VAR_2);
 struct device_node *VAR_6 =
  FUNC_2(VAR_2->parent->of_node, "regulators");
 struct of_regulator_match *VAR_7;
 int VAR_8, VAR_9;

 if (!VAR_6) {
  FUNC_0(VAR_2, "regulator node not found\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_4(VAR_2->parent, VAR_6,
     VAR_1, VAR_4);
 FUNC_3(VAR_6);
 if (VAR_8 < 0) {
  FUNC_0(VAR_2, "Error parsing regulator init data: %d\n", VAR_8);
  return VAR_8;
 }

 for (VAR_9 = 0, VAR_7 = VAR_1; VAR_9 < VAR_4; VAR_9++, VAR_7++)
  if (VAR_7->of_node) {
   VAR_5->init_data[VAR_9] = VAR_7->init_data;
   VAR_3[VAR_9] = VAR_7->of_node;
  }

 return 0;
}
