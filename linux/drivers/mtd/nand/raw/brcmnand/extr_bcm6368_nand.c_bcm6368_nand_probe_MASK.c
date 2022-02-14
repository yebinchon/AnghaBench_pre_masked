
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct brcmnand_soc {int ctlrdy_set_enabled; int ctlrdy_ack; } ;
struct bcm6368_nand_soc {scalar_t__ base; struct brcmnand_soc soc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct platform_device*,struct brcmnand_soc*) ;
 int FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (struct device*,struct resource*) ;
 struct bcm6368_nand_soc* FUNC_5 (struct device*,int,int ) ;
 struct resource* FUNC_6 (struct platform_device*,int ,char*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct bcm6368_nand_soc *VAR_9;
 struct brcmnand_soc *VAR_10;
 struct resource *VAR_11;

 VAR_9 = FUNC_5(VAR_8, sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_2;
 VAR_10 = &VAR_9->soc;

 VAR_11 = FUNC_6(VAR_7,
  VAR_4, "nand-int-base");
 VAR_9->base = FUNC_4(VAR_8, VAR_11);
 if (FUNC_0(VAR_9->base))
  return FUNC_1(VAR_9->base);

 VAR_10->ctlrdy_ack = VAR_5;
 VAR_10->ctlrdy_set_enabled = VAR_6;


 FUNC_3(0, VAR_9->base + VAR_0);
 FUNC_3(VAR_1,
   VAR_9->base + VAR_0);

 return FUNC_2(VAR_7, VAR_10);
}
