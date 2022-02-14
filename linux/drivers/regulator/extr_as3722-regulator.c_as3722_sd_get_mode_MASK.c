
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct regulator_dev {int dummy; } ;
struct as3722_regulators {int dev; struct as3722* as3722; } ;
struct as3722 {int dummy; } ;
struct TYPE_2__ {int mode_mask; int control_reg; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct as3722*,int ,int*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (int ,char*,int ,int) ;
 struct as3722_regulators* FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct regulator_dev*) ;

__attribute__((used)) static unsigned int FUNC_4(struct regulator_dev *VAR_4)
{
 struct as3722_regulators *VAR_5 = FUNC_2(VAR_4);
 struct as3722 *VAR_6 = VAR_5->as3722;
 int VAR_7 = FUNC_3(VAR_4);
 u32 VAR_8;
 int VAR_9;

 if (!VAR_3[VAR_7].control_reg)
  return -VAR_0;

 VAR_9 = FUNC_0(VAR_6, VAR_3[VAR_7].control_reg, &VAR_8);
 if (VAR_9 < 0) {
  FUNC_1(VAR_5->dev, "Reg 0x%02x read failed: %d\n",
   VAR_3[VAR_7].control_reg, VAR_9);
  return VAR_9;
 }

 if (VAR_8 & VAR_3[VAR_7].mode_mask)
  return VAR_1;
 else
  return VAR_2;
}
