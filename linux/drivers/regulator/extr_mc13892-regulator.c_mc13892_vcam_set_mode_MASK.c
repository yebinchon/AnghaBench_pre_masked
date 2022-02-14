
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
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,unsigned int,unsigned int) ;
 int FUNC_2 (int ) ;
 struct mc13xxx_regulator_priv* FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_5(struct regulator_dev *VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5 = 0;
 struct mc13xxx_regulator_priv *VAR_6 = FUNC_3(VAR_3);
 int VAR_7, VAR_8 = FUNC_4(VAR_3);

 if (VAR_4 == VAR_1)
  VAR_5 = VAR_0;

 FUNC_0(VAR_6->mc13xxx);
 VAR_7 = FUNC_1(VAR_6->mc13xxx, VAR_2[VAR_8].reg,
  VAR_0, VAR_5);
 FUNC_2(VAR_6->mc13xxx);

 return VAR_7;
}
