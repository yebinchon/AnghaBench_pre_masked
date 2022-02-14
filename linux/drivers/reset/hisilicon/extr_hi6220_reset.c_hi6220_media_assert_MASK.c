
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reset_controller_dev {int dummy; } ;
struct regmap {int dummy; } ;
struct hi6220_reset_data {struct regmap* regmap; } ;


 int FUNC_0 (unsigned long) ;
 int VAR_0 ;
 int FUNC_1 (struct regmap*,int ,int ) ;
 struct hi6220_reset_data* FUNC_2 (struct reset_controller_dev*) ;

__attribute__((used)) static int FUNC_3(struct reset_controller_dev *VAR_1,
          unsigned long VAR_2)
{
 struct hi6220_reset_data *VAR_3 = FUNC_2(VAR_1);
 struct regmap *VAR_4 = VAR_3->regmap;

 return FUNC_1(VAR_4, VAR_0, FUNC_0(VAR_2));
}
