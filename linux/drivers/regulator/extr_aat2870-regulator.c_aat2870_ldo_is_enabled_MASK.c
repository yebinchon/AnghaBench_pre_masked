
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regulator_dev {int dummy; } ;
struct aat2870_regulator {int enable_mask; int enable_addr; struct aat2870_data* aat2870; } ;
struct aat2870_data {int (* read ) (struct aat2870_data*,int ,int*) ;} ;


 struct aat2870_regulator* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct aat2870_data*,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_0)
{
 struct aat2870_regulator *VAR_1 = FUNC_0(VAR_0);
 struct aat2870_data *VAR_2 = VAR_1->aat2870;
 u8 VAR_3;
 int VAR_4;

 VAR_4 = VAR_2->read(VAR_2, VAR_1->enable_addr, &VAR_3);
 if (VAR_4)
  return VAR_4;

 return VAR_3 & VAR_1->enable_mask ? 1 : 0;
}
