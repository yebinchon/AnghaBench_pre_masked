
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct axp288_chrg_info {TYPE_1__* pdev; int regmap; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,int ,int ,int) ;

__attribute__((used)) static inline int FUNC_2(struct axp288_chrg_info *VAR_12,
        int VAR_13)
{
 int VAR_14;
 u8 VAR_15;

 if (VAR_13 >= 4000000)
  VAR_15 = VAR_7 << VAR_10;
 else if (VAR_13 >= 3500000)
  VAR_15 = VAR_6 << VAR_10;
 else if (VAR_13 >= 3000000)
  VAR_15 = VAR_5 << VAR_10;
 else if (VAR_13 >= 2500000)
  VAR_15 = VAR_4 << VAR_10;
 else if (VAR_13 >= 2000000)
  VAR_15 = VAR_3 << VAR_10;
 else if (VAR_13 >= 1500000)
  VAR_15 = VAR_2 << VAR_10;
 else if (VAR_13 >= 900000)
  VAR_15 = VAR_9 << VAR_10;
 else if (VAR_13 >= 500000)
  VAR_15 = VAR_8 << VAR_10;
 else
  VAR_15 = VAR_1 << VAR_10;

 VAR_14 = FUNC_1(VAR_12->regmap, VAR_0,
     VAR_11, VAR_15);
 if (VAR_14 < 0)
  FUNC_0(&VAR_12->pdev->dev, "charger BAK control %d\n", VAR_14);

 return VAR_14;
}
