
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct aat2870_regulator {unsigned int voltage_shift; int voltage_mask; int voltage_addr; struct aat2870_data* aat2870; } ;
struct aat2870_data {int (* update ) (struct aat2870_data*,int ,int ,unsigned int) ;} ;


 struct aat2870_regulator* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct aat2870_data*,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_0,
           unsigned VAR_1)
{
 struct aat2870_regulator *VAR_2 = FUNC_0(VAR_0);
 struct aat2870_data *VAR_3 = VAR_2->aat2870;

 return VAR_3->update(VAR_3, VAR_2->voltage_addr, VAR_2->voltage_mask,
          VAR_1 << VAR_2->voltage_shift);
}
