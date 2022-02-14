
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct axp288_fg_info {TYPE_1__* pdev; int regmap; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,int,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct axp288_fg_info *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 unsigned int VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_4 = FUNC_1(VAR_2->regmap, VAR_3, &VAR_6);
  if (VAR_4 == -VAR_0)
   continue;
  else
   break;
 }

 if (VAR_4 < 0) {
  FUNC_0(&VAR_2->pdev->dev, "axp288 reg read err:%d\n", VAR_4);
  return VAR_4;
 }

 return VAR_6;
}
