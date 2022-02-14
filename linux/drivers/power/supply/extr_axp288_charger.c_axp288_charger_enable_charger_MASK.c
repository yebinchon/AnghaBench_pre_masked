
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct axp288_chrg_info {TYPE_1__* pdev; int regmap; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct axp288_chrg_info *VAR_2,
        bool VAR_3)
{
 int VAR_4;

 if (VAR_3)
  VAR_4 = FUNC_1(VAR_2->regmap, VAR_0,
    VAR_1, VAR_1);
 else
  VAR_4 = FUNC_1(VAR_2->regmap, VAR_0,
    VAR_1, 0);
 if (VAR_4 < 0)
  FUNC_0(&VAR_2->pdev->dev, "axp288 enable charger %d\n", VAR_4);

 return VAR_4;
}
