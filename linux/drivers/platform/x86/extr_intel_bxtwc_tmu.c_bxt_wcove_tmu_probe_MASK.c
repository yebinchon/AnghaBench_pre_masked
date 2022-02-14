
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct wcove_tmu {int irq; int regmap; TYPE_1__* dev; } ;
struct regmap_irq_chip_data {int dummy; } ;
struct TYPE_4__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct intel_soc_pmic {struct regmap_irq_chip_data* irq_chip_data_tmu; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,char*,int,...) ;
 struct intel_soc_pmic* FUNC_1 (int ) ;
 struct wcove_tmu* FUNC_2 (TYPE_1__*,int,int ) ;
 int FUNC_3 (TYPE_1__*,int,int *,int ,int ,char*,struct wcove_tmu*) ;
 int FUNC_4 (struct platform_device*,int ) ;
 int FUNC_5 (struct platform_device*,struct wcove_tmu*) ;
 int FUNC_6 (struct regmap_irq_chip_data*,int) ;
 int FUNC_7 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_6)
{
 struct intel_soc_pmic *VAR_7 = FUNC_1(VAR_6->dev.parent);
 struct regmap_irq_chip_data *VAR_8;
 struct wcove_tmu *VAR_9;
 int VAR_10, VAR_11, VAR_12;

 VAR_9 = FUNC_2(&VAR_6->dev, sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_2;

 VAR_9->dev = &VAR_6->dev;
 VAR_9->regmap = VAR_7->regmap;

 VAR_12 = FUNC_4(VAR_6, 0);
 if (VAR_12 < 0)
  return VAR_12;

 VAR_8 = VAR_7->irq_chip_data_tmu;
 VAR_11 = FUNC_6(VAR_8, VAR_12);
 if (VAR_11 < 0) {
  FUNC_0(&VAR_6->dev,
   "failed to get virtual interrupt=%d\n", VAR_12);
  return VAR_11;
 }

 VAR_10 = FUNC_3(&VAR_6->dev, VAR_11,
     ((void*)0), VAR_5,
     VAR_4, "bxt_wcove_tmu", VAR_9);
 if (VAR_10) {
  FUNC_0(&VAR_6->dev, "request irq failed: %d,virq: %d\n",
       VAR_10, VAR_11);
  return VAR_10;
 }
 VAR_9->irq = VAR_11;


 FUNC_7(VAR_9->regmap, VAR_0,
      VAR_1, 0);

 FUNC_5(VAR_6, VAR_9);
 return 0;
}
