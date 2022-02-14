
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct platform_device {int dev; int name; } ;
struct mtk_rtc {int irq; int clk; int rtc; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (int *,struct resource*) ;
 struct mtk_rtc* FUNC_9 (int *,int,int ) ;
 int FUNC_10 (int *,int,int ,int ,int ,struct mtk_rtc*) ;
 int FUNC_11 (int *,int ,int *,int ) ;
 int VAR_4 ;
 int FUNC_12 (struct mtk_rtc*) ;
 int VAR_5 ;
 int FUNC_13 (struct platform_device*,int ) ;
 struct resource* FUNC_14 (struct platform_device*,int ,int ) ;
 int FUNC_15 (struct platform_device*,struct mtk_rtc*) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_6)
{
 struct mtk_rtc *VAR_7;
 struct resource *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_9(&VAR_6->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_15(VAR_6, VAR_7);

 VAR_8 = FUNC_14(VAR_6, VAR_2, 0);
 VAR_7->base = FUNC_8(&VAR_6->dev, VAR_8);
 if (FUNC_0(VAR_7->base))
  return FUNC_1(VAR_7->base);

 VAR_7->clk = FUNC_7(&VAR_6->dev, "rtc");
 if (FUNC_0(VAR_7->clk)) {
  FUNC_4(&VAR_6->dev, "No clock\n");
  return FUNC_1(VAR_7->clk);
 }

 VAR_9 = FUNC_3(VAR_7->clk);
 if (VAR_9)
  return VAR_9;

 VAR_7->irq = FUNC_13(VAR_6, 0);
 if (VAR_7->irq < 0) {
  VAR_9 = VAR_7->irq;
  goto err;
 }

 VAR_9 = FUNC_10(&VAR_6->dev, VAR_7->irq, VAR_4,
          0, FUNC_5(&VAR_6->dev), VAR_7);
 if (VAR_9) {
  FUNC_4(&VAR_6->dev, "Can't request IRQ\n");
  goto err;
 }

 FUNC_12(VAR_7);

 FUNC_6(&VAR_6->dev, 1);

 VAR_7->rtc = FUNC_11(&VAR_6->dev, VAR_6->name,
        &VAR_5, VAR_3);
 if (FUNC_0(VAR_7->rtc)) {
  VAR_9 = FUNC_1(VAR_7->rtc);
  FUNC_4(&VAR_6->dev, "Unable to register device\n");
  goto err;
 }

 return 0;
err:
 FUNC_2(VAR_7->clk);

 return VAR_9;
}
