
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tps80031_regulator_platform_data {int dummy; } ;
struct tps80031_regulator {int config_flags; int dev; TYPE_2__* rinfo; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int id; int * ops; } ;
struct TYPE_4__ {int trans_reg; TYPE_1__ desc; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 unsigned int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct device*,int ,int ,unsigned int,int) ;
 int VAR_17 ;

__attribute__((used)) static int FUNC_2(struct device *VAR_18,
  struct tps80031_regulator *VAR_19,
  struct tps80031_regulator_platform_data *VAR_20)
{
 int VAR_21 = 0;

 switch (VAR_19->rinfo->desc.id) {
 case 129:
  if (VAR_19->config_flags & (VAR_15 |
   VAR_14)) {
   unsigned VAR_22 = 0;
   if (VAR_19->config_flags & VAR_15)
    VAR_22 = VAR_4;
   else
    VAR_22 = VAR_3;

   VAR_21 = FUNC_1(VAR_18, VAR_7,
    VAR_6, VAR_22,
    VAR_2);
   if (VAR_21 < 0) {
    FUNC_0(VAR_19->dev,
     "LDOUSB config failed, e= %d\n", VAR_21);
    return VAR_21;
   }
  }
  break;

 case 130:
  if (VAR_19->config_flags & VAR_5) {
   VAR_21 = FUNC_1(VAR_18, VAR_7,
    VAR_6, VAR_1,
    VAR_0);
   if (VAR_21 < 0) {
    FUNC_0(VAR_19->dev,
     "LDO3 config failed, e = %d\n", VAR_21);
    return VAR_21;
   }
  }
  break;

 case 128:

  if (!(VAR_19->config_flags & VAR_16))
   VAR_19->rinfo->desc.ops = &VAR_17;
  break;
 default:
  break;
 }


 VAR_21 = FUNC_1(VAR_18, VAR_7, VAR_19->rinfo->trans_reg,
  VAR_9 | VAR_13 |
  VAR_11, VAR_8 |
  VAR_12 | VAR_10);
 if (VAR_21 < 0) {
  FUNC_0(VAR_19->dev, "trans reg update failed, e %d\n", VAR_21);
  return VAR_21;
 }

 return VAR_21;
}
