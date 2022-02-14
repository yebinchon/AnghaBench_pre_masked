
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s5m8767_info {TYPE_1__* iodev; } ;
struct regulator_dev {int dummy; } ;
struct TYPE_2__ {int regmap_pmic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (int ,int,int ,int) ;
 int FUNC_2 (struct s5m8767_info*,int,int*,int*) ;

__attribute__((used)) static int FUNC_3(struct s5m8767_info *VAR_5,
  struct regulator_dev *VAR_6)
{
 int VAR_7 = FUNC_0(VAR_6);
 int VAR_8, VAR_9, VAR_10;

 if (VAR_7 != VAR_1)
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_5, VAR_7, &VAR_9, &VAR_10);
 if (VAR_8)
  return VAR_8;

 return FUNC_1(VAR_5->iodev->regmap_pmic,
   VAR_9, VAR_2,
   VAR_4 << VAR_3);
}
