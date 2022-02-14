
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct axp288_fg_info {TYPE_1__* pdev; int regmap; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (int ,int,unsigned char*,int) ;

__attribute__((used)) static int FUNC_3(struct axp288_fg_info *VAR_3, int VAR_4)
{
 unsigned char VAR_5[2];
 int VAR_6;

 VAR_6 = FUNC_2(VAR_3->regmap, VAR_4, VAR_5, 2);
 if (VAR_6 < 0) {
  FUNC_0(&VAR_3->pdev->dev, "Error reading reg 0x%02x err: %d\n",
   VAR_4, VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_1(VAR_5);
 if (!(VAR_6 & VAR_2)) {
  FUNC_0(&VAR_3->pdev->dev, "Error reg 0x%02x contents not valid\n",
   VAR_4);
  return -VAR_0;
 }

 return VAR_6 & VAR_1;
}
