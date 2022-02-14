
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct tps80031_regulator {TYPE_1__* rinfo; int dev; } ;
struct regulator_dev {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ volt_reg; int volt_id; scalar_t__ force_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__,int) ;
 struct tps80031_regulator* FUNC_1 (struct regulator_dev*) ;
 struct device* FUNC_2 (struct regulator_dev*) ;
 int FUNC_3 (struct device*,int ,scalar_t__,int*) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_2)
{
 struct tps80031_regulator *VAR_3 = FUNC_1(VAR_2);
 struct device *VAR_4 = FUNC_2(VAR_2);
 uint8_t VAR_5 = 0;
 int VAR_6;

 if (VAR_3->rinfo->force_reg) {
  VAR_6 = FUNC_3(VAR_4, VAR_3->rinfo->volt_id,
      VAR_3->rinfo->force_reg, &VAR_5);
  if (VAR_6 < 0) {
   FUNC_0(VAR_3->dev, "reg 0x%02x read failed, e = %d\n",
     VAR_3->rinfo->force_reg, VAR_6);
   return VAR_6;
  }

  if (!(VAR_5 & VAR_0))
   return VAR_5 & VAR_1;
 }
 VAR_6 = FUNC_3(VAR_4, VAR_3->rinfo->volt_id,
    VAR_3->rinfo->volt_reg, &VAR_5);
 if (VAR_6 < 0) {
  FUNC_0(VAR_3->dev, "reg 0x%02x read failed, e = %d\n",
   VAR_3->rinfo->volt_reg, VAR_6);
  return VAR_6;
 }
 return VAR_5 & VAR_1;
}
