
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct mc13xxx_regulator_priv {int mc13xxx; } ;
struct TYPE_2__ {int reg; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (int ) ;
 struct mc13xxx_regulator_priv* FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (struct regulator_dev*) ;

__attribute__((used)) static unsigned int FUNC_5(struct regulator_dev *VAR_4)
{
 struct mc13xxx_regulator_priv *VAR_5 = FUNC_3(VAR_4);
 int VAR_6, VAR_7 = FUNC_4(VAR_4);
 unsigned int VAR_8;

 FUNC_0(VAR_5->mc13xxx);
 VAR_6 = FUNC_1(VAR_5->mc13xxx, VAR_3[VAR_7].reg, &VAR_8);
 FUNC_2(VAR_5->mc13xxx);

 if (VAR_6)
  return VAR_6;

 if (VAR_8 & VAR_0)
  return VAR_1;

 return VAR_2;
}
