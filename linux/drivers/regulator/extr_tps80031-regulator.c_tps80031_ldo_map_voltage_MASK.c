
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tps80031_regulator {int device_flags; TYPE_2__* rinfo; } ;
struct regulator_dev {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_3__ {scalar_t__ id; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct tps80031_regulator* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct regulator_dev*,int,int) ;
 int FUNC_2 (struct regulator_dev*,int,int) ;
 struct device* FUNC_3 (struct regulator_dev*) ;
 scalar_t__ FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct regulator_dev *VAR_4,
        int VAR_5, int VAR_6)
{
 struct tps80031_regulator *VAR_7 = FUNC_0(VAR_4);
 struct device *VAR_8 = FUNC_3(VAR_4);


 if ((VAR_7->rinfo->desc.id == VAR_1) &&
   (VAR_7->device_flags & VAR_3)) {
  if (((FUNC_4(VAR_8) == VAR_0) ||
   ((FUNC_4(VAR_8) == VAR_2) &&
   (FUNC_5(VAR_8) == 0x0)))) {
   return FUNC_1(VAR_4, VAR_5,
            VAR_6);
  }
 }

 return FUNC_2(VAR_4, VAR_5, VAR_6);
}
