
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct nvmem_device {int dummy; } ;
struct nvmem_config {int stride; int word_size; struct device* dev; struct mtk_efuse_priv* priv; int size; int reg_write; int reg_read; } ;
struct mtk_efuse_priv {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nvmem_device*) ;
 int FUNC_3 (struct device*,struct resource*) ;
 struct mtk_efuse_priv* FUNC_4 (struct device*,int,int ) ;
 struct nvmem_device* FUNC_5 (struct device*,struct nvmem_config*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 int FUNC_7 (struct resource*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct resource *VAR_7;
 struct nvmem_device *VAR_8;
 struct nvmem_config VAR_9 = {};
 struct mtk_efuse_priv *VAR_10;

 VAR_10 = FUNC_4(VAR_6, sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_7 = FUNC_6(VAR_5, VAR_2, 0);
 VAR_10->base = FUNC_3(VAR_6, VAR_7);
 if (FUNC_0(VAR_10->base))
  return FUNC_1(VAR_10->base);

 VAR_9.stride = 4;
 VAR_9.word_size = 4;
 VAR_9.reg_read = VAR_3;
 VAR_9.reg_write = VAR_4;
 VAR_9.size = FUNC_7(VAR_7);
 VAR_9.priv = VAR_10;
 VAR_9.dev = VAR_6;
 VAR_8 = FUNC_5(VAR_6, &VAR_9);

 return FUNC_2(VAR_8);
}
