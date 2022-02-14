
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; } ;
struct max8925_regulator_info {int vol_reg; int i2c; } ;
struct TYPE_2__ {int n_voltages; } ;


 int FUNC_0 (int ,int ) ;
 struct max8925_regulator_info* FUNC_1 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_2(struct regulator_dev *VAR_0)
{
 struct max8925_regulator_info *VAR_1 = FUNC_1(VAR_0);
 unsigned char VAR_2, VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1->i2c, VAR_1->vol_reg);
 if (VAR_4 < 0)
  return VAR_4;
 VAR_3 = VAR_0->desc->n_voltages - 1;
 VAR_2 = VAR_4 & VAR_3;

 return VAR_2;
}
