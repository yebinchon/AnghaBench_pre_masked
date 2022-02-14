
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct tps80031_regulator {int ext_ctrl_flag; TYPE_1__* rinfo; } ;
struct regulator_dev {int dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int state_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int ,int) ;
 struct tps80031_regulator* FUNC_1 (struct regulator_dev*) ;
 struct device* FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct device*,int ,int ,int*) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_4)
{
 struct tps80031_regulator *VAR_5 = FUNC_1(VAR_4);
 struct device *VAR_6 = FUNC_2(VAR_4);
 u8 VAR_7;
 int VAR_8;

 if (VAR_5->ext_ctrl_flag & VAR_0)
  return 1;

 VAR_8 = FUNC_3(VAR_6, VAR_1, VAR_5->rinfo->state_reg,
    &VAR_7);
 if (VAR_8 < 0) {
  FUNC_0(&VAR_4->dev, "Reg 0x%02x read failed, err = %d\n",
   VAR_5->rinfo->state_reg, VAR_8);
  return VAR_8;
 }
 return (VAR_7 & VAR_2) == VAR_3;
}
