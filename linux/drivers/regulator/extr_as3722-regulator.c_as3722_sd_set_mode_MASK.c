
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct regulator_dev {int dummy; } ;
struct as3722_regulators {int dev; struct as3722* as3722; } ;
struct as3722 {int dummy; } ;
struct TYPE_2__ {size_t mode_mask; int control_reg; } ;


 int VAR_0 ;
 int VAR_1 ;


 TYPE_1__* VAR_2 ;
 int FUNC_0 (struct as3722*,int ,size_t,size_t) ;
 int FUNC_1 (int ,char*,int ,int) ;
 struct as3722_regulators* FUNC_2 (struct regulator_dev*) ;
 size_t FUNC_3 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_3,
  unsigned int VAR_4)
{
 struct as3722_regulators *VAR_5 = FUNC_2(VAR_3);
 struct as3722 *VAR_6 = VAR_5->as3722;
 u8 VAR_7 = FUNC_3(VAR_3);
 u8 VAR_8 = 0;
 int VAR_9;

 if (!VAR_2[VAR_7].control_reg)
  return -VAR_1;

 switch (VAR_4) {
 case 129:
  VAR_8 = VAR_2[VAR_7].mode_mask;
 case 128:
  break;
 default:
  return -VAR_0;
 }

 VAR_9 = FUNC_0(VAR_6, VAR_2[VAR_7].control_reg,
   VAR_2[VAR_7].mode_mask, VAR_8);
 if (VAR_9 < 0) {
  FUNC_1(VAR_5->dev, "Reg 0x%02x update failed: %d\n",
   VAR_2[VAR_7].control_reg, VAR_9);
  return VAR_9;
 }
 return VAR_9;
}
