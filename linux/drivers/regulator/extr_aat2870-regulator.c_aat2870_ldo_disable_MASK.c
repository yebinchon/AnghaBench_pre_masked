
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_dev {int dummy; } ;
struct aat2870_regulator {int enable_mask; int enable_addr; struct aat2870_data* aat2870; } ;
struct aat2870_data {int (* update ) (struct aat2870_data*,int ,int ,int ) ;} ;


 struct aat2870_regulator* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct aat2870_data*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_0)
{
 struct aat2870_regulator *VAR_1 = FUNC_0(VAR_0);
 struct aat2870_data *VAR_2 = VAR_1->aat2870;

 return VAR_2->update(VAR_2, VAR_1->enable_addr, VAR_1->enable_mask, 0);
}
