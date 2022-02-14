
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct exynos_tmu_data {int soc; int irq; void* regulator; void* clk_sec; void* clk; void* sclk; void* tzd; int irq_work; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int VAR_5 ;


 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int *,char*,...) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *) ;
 void* FUNC_10 (int *,char*) ;
 struct exynos_tmu_data* FUNC_11 (int *,int,int ) ;
 void* FUNC_12 (int *,char*) ;
 int FUNC_13 (int *,int,int ,int,int ,struct exynos_tmu_data*) ;
 int FUNC_14 (struct platform_device*) ;
 int VAR_6 ;
 int FUNC_15 (struct platform_device*,int) ;
 int FUNC_16 (struct platform_device*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct platform_device*,struct exynos_tmu_data*) ;
 int FUNC_19 (void*) ;
 int FUNC_20 (void*) ;
 void* FUNC_21 (int *,int ,struct exynos_tmu_data*,int *) ;
 int FUNC_22 (int *,void*) ;

__attribute__((used)) static int FUNC_23(struct platform_device *VAR_9)
{
 struct exynos_tmu_data *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_11(&VAR_9->dev, sizeof(struct exynos_tmu_data),
     VAR_2);
 if (!VAR_10)
  return -VAR_0;

 FUNC_18(VAR_9, VAR_10);
 FUNC_17(&VAR_10->lock);






 VAR_10->regulator = FUNC_12(&VAR_9->dev, "vtmu");
 if (!FUNC_1(VAR_10->regulator)) {
  VAR_11 = FUNC_20(VAR_10->regulator);
  if (VAR_11) {
   FUNC_7(&VAR_9->dev, "failed to enable vtmu\n");
   return VAR_11;
  }
 } else {
  if (FUNC_2(VAR_10->regulator) == -VAR_1)
   return -VAR_1;
  FUNC_8(&VAR_9->dev, "Regulator node (vtmu) not found\n");
 }

 VAR_11 = FUNC_14(VAR_9);
 if (VAR_11)
  goto err_sensor;

 FUNC_0(&VAR_10->irq_work, VAR_8);

 VAR_10->clk = FUNC_10(&VAR_9->dev, "tmu_apbif");
 if (FUNC_1(VAR_10->clk)) {
  FUNC_7(&VAR_9->dev, "Failed to get clock\n");
  VAR_11 = FUNC_2(VAR_10->clk);
  goto err_sensor;
 }

 VAR_10->clk_sec = FUNC_10(&VAR_9->dev, "tmu_triminfo_apbif");
 if (FUNC_1(VAR_10->clk_sec)) {
  if (VAR_10->soc == VAR_5) {
   FUNC_7(&VAR_9->dev, "Failed to get triminfo clock\n");
   VAR_11 = FUNC_2(VAR_10->clk_sec);
   goto err_sensor;
  }
 } else {
  VAR_11 = FUNC_4(VAR_10->clk_sec);
  if (VAR_11) {
   FUNC_7(&VAR_9->dev, "Failed to get clock\n");
   goto err_sensor;
  }
 }

 VAR_11 = FUNC_4(VAR_10->clk);
 if (VAR_11) {
  FUNC_7(&VAR_9->dev, "Failed to get clock\n");
  goto err_clk_sec;
 }

 switch (VAR_10->soc) {
 case 129:
 case 128:
  VAR_10->sclk = FUNC_10(&VAR_9->dev, "tmu_sclk");
  if (FUNC_1(VAR_10->sclk)) {
   FUNC_7(&VAR_9->dev, "Failed to get sclk\n");
   goto err_clk;
  } else {
   VAR_11 = FUNC_5(VAR_10->sclk);
   if (VAR_11) {
    FUNC_7(&VAR_9->dev, "Failed to enable sclk\n");
    goto err_clk;
   }
  }
  break;
 default:
  break;
 }





 VAR_10->tzd = FUNC_21(&VAR_9->dev, 0, VAR_10,
          &VAR_6);
 if (FUNC_1(VAR_10->tzd)) {
  VAR_11 = FUNC_2(VAR_10->tzd);
  FUNC_7(&VAR_9->dev, "Failed to register sensor: %d\n", VAR_11);
  goto err_sclk;
 }

 VAR_11 = FUNC_16(VAR_9);
 if (VAR_11) {
  FUNC_7(&VAR_9->dev, "Failed to initialize TMU\n");
  goto err_thermal;
 }

 VAR_11 = FUNC_13(&VAR_9->dev, VAR_10->irq, VAR_7,
  VAR_4 | VAR_3, FUNC_9(&VAR_9->dev), VAR_10);
 if (VAR_11) {
  FUNC_7(&VAR_9->dev, "Failed to request irq: %d\n", VAR_10->irq);
  goto err_thermal;
 }

 FUNC_15(VAR_9, 1);
 return 0;

err_thermal:
 FUNC_22(&VAR_9->dev, VAR_10->tzd);
err_sclk:
 FUNC_3(VAR_10->sclk);
err_clk:
 FUNC_6(VAR_10->clk);
err_clk_sec:
 if (!FUNC_1(VAR_10->clk_sec))
  FUNC_6(VAR_10->clk_sec);
err_sensor:
 if (!FUNC_1(VAR_10->regulator))
  FUNC_19(VAR_10->regulator);

 return VAR_11;
}
