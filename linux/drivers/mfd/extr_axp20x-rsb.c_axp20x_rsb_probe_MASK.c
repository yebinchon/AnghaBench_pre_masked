
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunxi_rsb_device {int dev; int irq; } ;
struct axp20x_dev {int regmap; int regmap_cfg; int irq; int * dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct axp20x_dev*) ;
 int FUNC_3 (struct axp20x_dev*) ;
 int FUNC_4 (int *,char*,int) ;
 int FUNC_5 (int *,struct axp20x_dev*) ;
 struct axp20x_dev* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (struct sunxi_rsb_device*,int ) ;

__attribute__((used)) static int FUNC_8(struct sunxi_rsb_device *VAR_2)
{
 struct axp20x_dev *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_6(&VAR_2->dev, sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 VAR_3->dev = &VAR_2->dev;
 VAR_3->irq = VAR_2->irq;
 FUNC_5(&VAR_2->dev, VAR_3);

 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_3->regmap = FUNC_7(VAR_2, VAR_3->regmap_cfg);
 if (FUNC_0(VAR_3->regmap)) {
  VAR_4 = FUNC_1(VAR_3->regmap);
  FUNC_4(&VAR_2->dev, "regmap init failed: %d\n", VAR_4);
  return VAR_4;
 }

 return FUNC_2(VAR_3);
}
