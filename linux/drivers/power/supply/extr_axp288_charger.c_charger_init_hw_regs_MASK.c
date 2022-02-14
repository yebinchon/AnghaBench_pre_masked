
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct axp288_chrg_info {int cc; int max_cc; int cv; int max_cv; TYPE_1__* pdev; int regmap; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;




 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int *,char*,int ,int) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct axp288_chrg_info *VAR_20)
{
 int VAR_21, VAR_22, VAR_23;
 unsigned int VAR_24;


 VAR_21 = FUNC_3(VAR_20->regmap, VAR_4, VAR_13);
 if (VAR_21 < 0) {
  FUNC_0(&VAR_20->pdev->dev, "register(%x) write error(%d)\n",
       VAR_4, VAR_21);
  return VAR_21;
 }

 VAR_21 = FUNC_3(VAR_20->regmap, VAR_3, VAR_12);
 if (VAR_21 < 0) {
  FUNC_0(&VAR_20->pdev->dev, "register(%x) write error(%d)\n",
       VAR_3, VAR_21);
  return VAR_21;
 }


 VAR_21 = FUNC_2(VAR_20->regmap,
    VAR_2,
    VAR_14, VAR_14);
 if (VAR_21 < 0) {
  FUNC_0(&VAR_20->pdev->dev, "register(%x) write error(%d)\n",
      VAR_2, VAR_21);
  return VAR_21;
 }


 VAR_21 = FUNC_2(VAR_20->regmap,
    VAR_1,
    VAR_11, 0);
 if (VAR_21 < 0) {
  FUNC_0(&VAR_20->pdev->dev, "register(%x) write error(%d)\n",
      VAR_1, VAR_21);
  return VAR_21;
 }


 VAR_21 = FUNC_2(VAR_20->regmap,
    VAR_0,
    VAR_19, 0);
 if (VAR_21 < 0) {
  FUNC_0(&VAR_20->pdev->dev, "register(%x) write error(%d)\n",
      VAR_0, VAR_21);
  return VAR_21;
 }


 VAR_21 = FUNC_1(VAR_20->regmap, VAR_1, &VAR_24);
 if (VAR_21 < 0) {
  FUNC_0(&VAR_20->pdev->dev, "register(%x) read error(%d)\n",
   VAR_1, VAR_21);
  return VAR_21;
 }


 VAR_23 = (VAR_24 & VAR_10) >> VAR_9;
 switch (VAR_23) {
 case 131:
  VAR_20->cv = VAR_15;
  break;
 case 130:
  VAR_20->cv = VAR_16;
  break;
 case 129:
  VAR_20->cv = VAR_17;
  break;
 case 128:
  VAR_20->cv = VAR_18;
  break;
 }


 VAR_22 = (VAR_24 & VAR_7) >> VAR_5;
 VAR_22 = (VAR_22 * VAR_6) + VAR_8;
 VAR_20->cc = VAR_22;





 VAR_20->max_cv = VAR_20->cv;
 VAR_20->max_cc = VAR_20->cc;

 return 0;
}
