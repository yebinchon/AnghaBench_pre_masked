
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_efuse_priv {int base; } ;
struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct nvmem_device {int dummy; } ;
struct nvmem_config {int stride; int word_size; int read_only; struct device* dev; struct uniphier_efuse_priv* priv; int size; int reg_read; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nvmem_device*) ;
 int FUNC_3 (struct device*,struct resource*) ;
 struct uniphier_efuse_priv* FUNC_4 (struct device*,int,int ) ;
 struct nvmem_device* FUNC_5 (struct device*,struct nvmem_config*) ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 int FUNC_7 (struct resource*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct resource *VAR_6;
 struct nvmem_device *VAR_7;
 struct nvmem_config VAR_8 = {};
 struct uniphier_efuse_priv *VAR_9;

 VAR_9 = FUNC_4(VAR_5, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_6 = FUNC_6(VAR_4, VAR_2, 0);
 VAR_9->base = FUNC_3(VAR_5, VAR_6);
 if (FUNC_0(VAR_9->base))
  return FUNC_1(VAR_9->base);

 VAR_8.stride = 1;
 VAR_8.word_size = 1;
 VAR_8.read_only = 1;
 VAR_8.reg_read = VAR_3;
 VAR_8.size = FUNC_7(VAR_6);
 VAR_8.priv = VAR_9;
 VAR_8.dev = VAR_5;
 VAR_7 = FUNC_5(VAR_5, &VAR_8);

 return FUNC_2(VAR_7);
}
