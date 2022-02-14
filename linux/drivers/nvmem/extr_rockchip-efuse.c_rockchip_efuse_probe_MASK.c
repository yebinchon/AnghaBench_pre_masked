
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct rockchip_efuse_chip {struct device* dev; int clk; int base; } ;
struct resource {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct nvmem_device {int dummy; } ;
struct TYPE_3__ {struct device* dev; struct rockchip_efuse_chip* priv; void const* reg_read; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nvmem_device*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,struct resource*) ;
 struct rockchip_efuse_chip* FUNC_6 (struct device*,int,int ) ;
 struct nvmem_device* FUNC_7 (struct device*,TYPE_1__*) ;
 TYPE_1__ VAR_4 ;
 void* FUNC_8 (struct device*) ;
 scalar_t__ FUNC_9 (int ,char*,int *) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct resource*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_5)
{
 struct resource *VAR_6;
 struct nvmem_device *VAR_7;
 struct rockchip_efuse_chip *VAR_8;
 const void *VAR_9;
 struct device *VAR_10 = &VAR_5->dev;

 VAR_9 = FUNC_8(VAR_10);
 if (!VAR_9) {
  FUNC_3(VAR_10, "failed to get match data\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_6(VAR_10, sizeof(struct rockchip_efuse_chip),
        VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_6 = FUNC_10(VAR_5, VAR_3, 0);
 VAR_8->base = FUNC_5(VAR_10, VAR_6);
 if (FUNC_0(VAR_8->base))
  return FUNC_1(VAR_8->base);

 VAR_8->clk = FUNC_4(VAR_10, "pclk_efuse");
 if (FUNC_0(VAR_8->clk))
  return FUNC_1(VAR_8->clk);

 VAR_8->dev = VAR_10;
 if (FUNC_9(VAR_10->of_node, "rockchip,efuse-size",
     &VAR_4.size))
  VAR_4.size = FUNC_11(VAR_6);
 VAR_4.reg_read = VAR_9;
 VAR_4.priv = VAR_8;
 VAR_4.dev = VAR_8->dev;
 VAR_7 = FUNC_7(VAR_10, &VAR_4);

 return FUNC_2(VAR_7);
}
