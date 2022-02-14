
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
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
 int FUNC_4 (struct device*,int ,scalar_t__,unsigned int,int ) ;

__attribute__((used)) static int FUNC_5(struct regulator_dev *VAR_2,
  unsigned VAR_3)
{
 struct tps80031_regulator *VAR_4 = FUNC_1(VAR_2);
 struct device *VAR_5 = FUNC_2(VAR_2);
 int VAR_6;
 u8 VAR_7;

 if (VAR_4->rinfo->force_reg) {
  VAR_6 = FUNC_3(VAR_5, VAR_4->rinfo->volt_id,
      VAR_4->rinfo->force_reg, &VAR_7);
  if (VAR_6 < 0) {
   FUNC_0(VAR_4->dev, "reg 0x%02x read failed, e = %d\n",
    VAR_4->rinfo->force_reg, VAR_6);
   return VAR_6;
  }
  if (!(VAR_7 & VAR_0)) {
   VAR_6 = FUNC_4(VAR_5, VAR_4->rinfo->volt_id,
    VAR_4->rinfo->force_reg, VAR_3, VAR_1);
   if (VAR_6 < 0)
    FUNC_0(VAR_4->dev,
     "reg 0x%02x update failed, e = %d\n",
     VAR_4->rinfo->force_reg, VAR_6);
   return VAR_6;
  }
 }
 VAR_6 = FUNC_4(VAR_5, VAR_4->rinfo->volt_id,
   VAR_4->rinfo->volt_reg, VAR_3, VAR_1);
 if (VAR_6 < 0)
  FUNC_0(VAR_4->dev, "reg 0x%02x update failed, e = %d\n",
   VAR_4->rinfo->volt_reg, VAR_6);
 return VAR_6;
}
