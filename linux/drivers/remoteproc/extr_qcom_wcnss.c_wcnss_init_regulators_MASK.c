
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wcnss_vreg_info {scalar_t__ load_uA; scalar_t__ max_voltage; int min_voltage; int name; } ;
struct regulator_bulk_data {int consumer; int supply; } ;
struct qcom_wcnss {int num_vregs; struct regulator_bulk_data* vregs; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct regulator_bulk_data* FUNC_0 (int ,int,int,int ) ;
 int FUNC_1 (int ,int,struct regulator_bulk_data*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct qcom_wcnss *VAR_2,
     const struct wcnss_vreg_info *VAR_3,
     int VAR_4)
{
 struct regulator_bulk_data *VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_5 = FUNC_0(VAR_2->dev,
       VAR_4, sizeof(struct regulator_bulk_data),
       VAR_1);
 if (!VAR_5)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
  VAR_5[VAR_7].supply = VAR_3[VAR_7].name;

 VAR_6 = FUNC_1(VAR_2->dev, VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  if (VAR_3[VAR_7].max_voltage)
   FUNC_3(VAR_5[VAR_7].consumer,
           VAR_3[VAR_7].min_voltage,
           VAR_3[VAR_7].max_voltage);

  if (VAR_3[VAR_7].load_uA)
   FUNC_2(VAR_5[VAR_7].consumer, VAR_3[VAR_7].load_uA);
 }

 VAR_2->vregs = VAR_5;
 VAR_2->num_vregs = VAR_4;

 return 0;
}
