
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct axp288_fg_info {TYPE_1__* pdev; int regmap; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct axp288_fg_info *VAR_0, int VAR_1, u8 VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0->regmap, VAR_1, (unsigned int)VAR_2);

 if (VAR_3 < 0)
  FUNC_0(&VAR_0->pdev->dev, "axp288 reg write err:%d\n", VAR_3);

 return VAR_3;
}
