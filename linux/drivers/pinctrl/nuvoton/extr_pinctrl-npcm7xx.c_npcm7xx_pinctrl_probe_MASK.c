
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct npcm7xx_pinctrl {int * dev; int pctldev; int gcr_regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,struct npcm7xx_pinctrl*) ;
 struct npcm7xx_pinctrl* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int *,struct npcm7xx_pinctrl*) ;
 int FUNC_6 (struct npcm7xx_pinctrl*) ;
 int FUNC_7 (struct npcm7xx_pinctrl*) ;
 int VAR_2 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_3)
{
 struct npcm7xx_pinctrl *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_4(&VAR_3->dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 VAR_4->dev = &VAR_3->dev;
 FUNC_3(&VAR_3->dev, VAR_4);

 VAR_4->gcr_regmap =
  FUNC_9("nuvoton,npcm750-gcr");
 if (FUNC_0(VAR_4->gcr_regmap)) {
  FUNC_2(VAR_4->dev, "didn't find nuvoton,npcm750-gcr\n");
  return FUNC_1(VAR_4->gcr_regmap);
 }

 VAR_5 = FUNC_6(VAR_4);
 if (VAR_5 < 0) {
  FUNC_2(VAR_4->dev, "Failed to gpio dt-binding %u\n", VAR_5);
  return VAR_5;
 }

 VAR_4->pctldev = FUNC_5(&VAR_3->dev,
            &VAR_2, VAR_4);
 if (FUNC_0(VAR_4->pctldev)) {
  FUNC_2(&VAR_3->dev, "Failed to register pinctrl device\n");
  return FUNC_1(VAR_4->pctldev);
 }

 VAR_5 = FUNC_7(VAR_4);
 if (VAR_5 < 0) {
  FUNC_2(VAR_4->dev, "Failed to register gpio %u\n", VAR_5);
  return VAR_5;
 }

 FUNC_8("NPCM7xx Pinctrl driver probed\n");
 return 0;
}
