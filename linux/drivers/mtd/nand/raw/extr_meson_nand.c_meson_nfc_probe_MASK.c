
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct meson_nfc {scalar_t__ reg_base; scalar_t__ reg_clk; struct device* dev; int completion; int chips; int controller; int data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*) ;
 scalar_t__ FUNC_6 (struct device*,struct resource*) ;
 struct meson_nfc* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (struct device*,int,int ,int ,int ,struct meson_nfc*) ;
 int FUNC_9 (struct device*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct meson_nfc*) ;
 int FUNC_12 (struct meson_nfc*) ;
 int VAR_6 ;
 int FUNC_13 (struct device*,struct meson_nfc*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct device*) ;
 int FUNC_16 (struct platform_device*,int ) ;
 struct resource* FUNC_17 (struct platform_device*,int ,int ) ;
 int FUNC_18 (struct platform_device*,struct meson_nfc*) ;
 scalar_t__ FUNC_19 (int ,char*) ;
 int FUNC_20 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_21(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct meson_nfc *VAR_9;
 struct resource *VAR_10;
 int VAR_11, VAR_12;

 VAR_9 = FUNC_7(VAR_8, sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_2;

 VAR_9->data = FUNC_15(&VAR_7->dev);
 if (!VAR_9->data)
  return -VAR_1;

 FUNC_14(&VAR_9->controller);
 FUNC_1(&VAR_9->chips);
 FUNC_10(&VAR_9->completion);

 VAR_9->dev = VAR_8;

 VAR_10 = FUNC_17(VAR_7, VAR_4, 0);
 VAR_9->reg_base = FUNC_6(VAR_8, VAR_10);
 if (FUNC_2(VAR_9->reg_base))
  return FUNC_3(VAR_9->reg_base);

 VAR_9->reg_clk =
  FUNC_19(VAR_8->of_node,
      "amlogic,mmc-syscon");
 if (FUNC_2(VAR_9->reg_clk)) {
  FUNC_4(VAR_8, "Failed to lookup clock base\n");
  return FUNC_3(VAR_9->reg_clk);
 }

 VAR_12 = FUNC_16(VAR_7, 0);
 if (VAR_12 < 0) {
  FUNC_4(VAR_8, "no NFC IRQ resource\n");
  return -VAR_0;
 }

 VAR_11 = FUNC_11(VAR_9);
 if (VAR_11) {
  FUNC_4(VAR_8, "failed to initialize NAND clock\n");
  return VAR_11;
 }

 FUNC_20(0, VAR_9->reg_base + VAR_5);
 VAR_11 = FUNC_8(VAR_8, VAR_12, VAR_6, 0, FUNC_5(VAR_8), VAR_9);
 if (VAR_11) {
  FUNC_4(VAR_8, "failed to request NFC IRQ\n");
  VAR_11 = -VAR_0;
  goto err_clk;
 }

 VAR_11 = FUNC_9(VAR_8, FUNC_0(32));
 if (VAR_11) {
  FUNC_4(VAR_8, "failed to set DMA mask\n");
  goto err_clk;
 }

 FUNC_18(VAR_7, VAR_9);

 VAR_11 = FUNC_13(VAR_8, VAR_9);
 if (VAR_11) {
  FUNC_4(VAR_8, "failed to init NAND chips\n");
  goto err_clk;
 }

 return 0;
err_clk:
 FUNC_12(VAR_9);
 return VAR_11;
}
