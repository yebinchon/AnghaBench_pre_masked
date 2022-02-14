
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tps80031_regulator {int config_flags; int dev; TYPE_2__* rinfo; } ;
struct regulator_dev {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int enable_time; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (int ) ;
 struct tps80031_regulator* FUNC_3 (struct regulator_dev*) ;
 struct device* FUNC_4 (struct regulator_dev*) ;
 int FUNC_5 (struct device*,int ,int ,int ) ;
 int FUNC_6 (struct device*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct regulator_dev *VAR_9)
{
 struct tps80031_regulator *VAR_10 = FUNC_3(VAR_9);
 struct device *VAR_11 = FUNC_4(VAR_9);
 int VAR_12 = 0;

 if (VAR_10->config_flags & VAR_5) {
  VAR_12 = FUNC_6(VAR_11, VAR_4,
   VAR_7, VAR_8);
  if (VAR_12 < 0) {
   FUNC_1(VAR_10->dev, "reg 0x%02x write failed, e = %d\n",
    VAR_7, VAR_12);
   return VAR_12;
  }
 }

 VAR_12 = FUNC_5(VAR_11, VAR_4,
   VAR_2, VAR_1);
 if (VAR_12 < 0) {
  FUNC_1(VAR_10->dev, "reg 0x%02x clearbit failed, e = %d\n",
    VAR_2, VAR_12);
  return VAR_12;
 }

 VAR_12 = FUNC_5(VAR_11, VAR_4,
    VAR_3, VAR_0);
 if (VAR_12 < 0) {
  FUNC_1(VAR_10->dev, "reg 0x%02x clearbit failed, e = %d\n",
    VAR_3, VAR_12);
  return VAR_12;
 }

 FUNC_2(FUNC_0(VAR_10->rinfo->desc.enable_time, 1000));
 if (VAR_10->config_flags & VAR_5) {
  VAR_12 = FUNC_6(VAR_11, VAR_4,
   VAR_6, VAR_8);
  if (VAR_12 < 0) {
   FUNC_1(VAR_10->dev, "reg 0x%02x write failed, e = %d\n",
     VAR_6, VAR_12);
   return VAR_12;
  }
 }
 return VAR_12;
}
