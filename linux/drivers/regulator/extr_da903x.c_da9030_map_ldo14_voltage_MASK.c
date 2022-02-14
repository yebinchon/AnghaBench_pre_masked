
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {int dummy; } ;
struct TYPE_2__ {int min_uV; int uV_step; } ;
struct da903x_regulator_info {int max_uV; TYPE_1__ desc; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct da903x_regulator_info*,int,int) ;
 int FUNC_2 (char*,int,int) ;
 struct da903x_regulator_info* FUNC_3 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_1,
        int VAR_2, int VAR_3)
{
 struct da903x_regulator_info *VAR_4 = FUNC_3(VAR_1);
 int VAR_5, VAR_6;

 if (FUNC_1(VAR_4, VAR_2, VAR_3)) {
  FUNC_2("invalid voltage range (%d, %d) uV\n", VAR_2, VAR_3);
  return -VAR_0;
 }

 VAR_5 = (VAR_4->max_uV + VAR_4->desc.min_uV) / 2;
 if (VAR_2 < VAR_5) {
  VAR_6 = FUNC_0(VAR_5 - VAR_2, VAR_4->desc.uV_step);
  VAR_6 |= 0x4;
 } else {
  VAR_6 = FUNC_0(VAR_2 - VAR_5, VAR_4->desc.uV_step);
 }

 return VAR_6;
}
