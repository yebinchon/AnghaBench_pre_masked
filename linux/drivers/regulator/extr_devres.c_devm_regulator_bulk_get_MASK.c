
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_bulk_devres {int num_consumers; struct regulator_bulk_data* consumers; } ;
struct regulator_bulk_data {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,struct regulator_bulk_devres*) ;
 struct regulator_bulk_devres* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (struct regulator_bulk_devres*) ;
 int FUNC_3 (struct device*,int,struct regulator_bulk_data*) ;

int FUNC_4(struct device *VAR_3, int VAR_4,
       struct regulator_bulk_data *VAR_5)
{
 struct regulator_bulk_devres *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(VAR_2,
         sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_5);
 if (!VAR_7) {
  VAR_6->consumers = VAR_5;
  VAR_6->num_consumers = VAR_4;
  FUNC_0(VAR_3, VAR_6);
 } else {
  FUNC_2(VAR_6);
 }

 return VAR_7;
}
