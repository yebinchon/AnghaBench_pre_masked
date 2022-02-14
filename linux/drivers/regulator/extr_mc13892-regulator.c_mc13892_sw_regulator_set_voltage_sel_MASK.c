
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct regulator_dev {TYPE_1__* desc; } ;
struct mc13xxx_regulator_priv {int mc13xxx; } ;
struct TYPE_4__ {int vsel_mask; scalar_t__ vsel_reg; } ;
struct TYPE_3__ {int* volt_table; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__,int,int) ;
 int FUNC_2 (int ) ;
 struct mc13xxx_regulator_priv* FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_5(struct regulator_dev *VAR_4,
      unsigned VAR_5)
{
 struct mc13xxx_regulator_priv *VAR_6 = FUNC_3(VAR_4);
 int VAR_7, VAR_8, VAR_9 = FUNC_4(VAR_4);
 u32 VAR_10;
 int VAR_11;

 VAR_7 = VAR_4->desc->volt_table[VAR_5];
 VAR_8 = VAR_3[VAR_9].vsel_mask;
 VAR_10 = VAR_5;
 if (VAR_3[VAR_9].vsel_reg != VAR_0) {
  VAR_8 |= VAR_1;

  if (VAR_7 > 1375000) {
   VAR_10 -= VAR_2;
   VAR_10 |= VAR_1;
  } else {
   VAR_10 &= ~VAR_1;
  }
 }

 FUNC_0(VAR_6->mc13xxx);
 VAR_11 = FUNC_1(VAR_6->mc13xxx, VAR_3[VAR_9].vsel_reg,
         VAR_8, VAR_10);
 FUNC_2(VAR_6->mc13xxx);

 return VAR_11;
}
