
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct brcmnand_soc {int ctlrdy_set_enabled; int ctlrdy_ack; } ;
struct bcm63138_nand_soc {int base; struct brcmnand_soc soc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct platform_device*,struct brcmnand_soc*) ;
 int FUNC_3 (struct device*,struct resource*) ;
 struct bcm63138_nand_soc* FUNC_4 (struct device*,int,int ) ;
 struct resource* FUNC_5 (struct platform_device*,int ,char*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct bcm63138_nand_soc *VAR_7;
 struct brcmnand_soc *VAR_8;
 struct resource *VAR_9;

 VAR_7 = FUNC_4(VAR_6, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;
 VAR_8 = &VAR_7->soc;

 VAR_9 = FUNC_5(VAR_5, VAR_2, "nand-int-base");
 VAR_7->base = FUNC_3(VAR_6, VAR_9);
 if (FUNC_0(VAR_7->base))
  return FUNC_1(VAR_7->base);

 VAR_8->ctlrdy_ack = VAR_3;
 VAR_8->ctlrdy_set_enabled = VAR_4;

 return FUNC_2(VAR_5, VAR_8);
}
