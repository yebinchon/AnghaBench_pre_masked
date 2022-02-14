
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tps80031_regulator {int device_flags; int dev; TYPE_2__* rinfo; } ;
struct regulator_dev {int dummy; } ;
struct device {int dummy; } ;
typedef unsigned int sel ;
struct TYPE_3__ {scalar_t__ id; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 struct tps80031_regulator* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (struct regulator_dev*,unsigned int) ;
 struct device* FUNC_3 (struct regulator_dev*) ;
 scalar_t__ FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct regulator_dev *VAR_5,
         unsigned int VAR_6)
{
 struct tps80031_regulator *VAR_7 = FUNC_1(VAR_5);
 struct device *VAR_8 = FUNC_3(VAR_5);


 if ((VAR_7->rinfo->desc.id == VAR_2) &&
   (VAR_7->device_flags & VAR_4)) {
  unsigned VAR_9 = (VAR_6) & 0x1F;
  if (((FUNC_4(VAR_8) == VAR_1) ||
   ((FUNC_4(VAR_8) == VAR_3) &&
   (FUNC_5(VAR_8) == 0x0))) &&
   ((VAR_9 == 0x0) || (VAR_9 >= 0x19 && VAR_9 <= 0x1F))) {
    FUNC_0(VAR_7->dev,
     "Invalid sel %d in track mode LDO2\n",
     VAR_9);
    return -VAR_0;
  }
 }

 return FUNC_2(VAR_5, VAR_6);
}
