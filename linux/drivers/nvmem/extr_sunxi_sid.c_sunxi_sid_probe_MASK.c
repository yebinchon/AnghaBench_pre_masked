
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunxi_sid_cfg {int size; scalar_t__ need_register_readout; int value_offset; } ;
struct sunxi_sid {struct nvmem_device* base; int value_offset; } ;
struct resource {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct nvmem_device {int dummy; } ;
struct nvmem_config {char* name; int read_only; int size; int word_size; int stride; int (* reg_read ) (struct sunxi_sid*,int ,char*,int) ;struct sunxi_sid* priv; struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct nvmem_device*) ;
 int FUNC_1 (struct nvmem_device*) ;
 int FUNC_2 (char*,int) ;
 struct nvmem_device* FUNC_3 (struct device*,struct resource*) ;
 void* FUNC_4 (struct device*,int,int ) ;
 struct nvmem_device* FUNC_5 (struct device*,struct nvmem_config*) ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int,int ) ;
 struct sunxi_sid_cfg* FUNC_8 (struct device*) ;
 struct resource* FUNC_9 (struct platform_device*,int ,int ) ;
 int FUNC_10 (struct platform_device*,struct nvmem_device*) ;
 int FUNC_11 (struct sunxi_sid*,int ,char*,int) ;
 int FUNC_12 (struct sunxi_sid*,int ,char*,int) ;
 int FUNC_13 (struct sunxi_sid*,int ,char*,int) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_4)
{
 struct device *VAR_5 = &VAR_4->dev;
 struct resource *VAR_6;
 struct nvmem_config *VAR_7;
 struct nvmem_device *VAR_8;
 struct sunxi_sid *VAR_9;
 int VAR_10;
 char *VAR_11;
 const struct sunxi_sid_cfg *VAR_12;

 VAR_9 = FUNC_4(VAR_5, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_12 = FUNC_8(VAR_5);
 if (!VAR_12)
  return -VAR_0;
 VAR_9->value_offset = VAR_12->value_offset;

 VAR_6 = FUNC_9(VAR_4, VAR_3, 0);
 VAR_9->base = FUNC_3(VAR_5, VAR_6);
 if (FUNC_0(VAR_9->base))
  return FUNC_1(VAR_9->base);

 VAR_10 = VAR_12->size;

 VAR_7 = FUNC_4(VAR_5, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->dev = VAR_5;
 VAR_7->name = "sunxi-sid";
 VAR_7->read_only = 1;
 VAR_7->size = VAR_12->size;
 VAR_7->word_size = 1;
 VAR_7->stride = 4;
 VAR_7->priv = VAR_9;
 if (VAR_12->need_register_readout)
  VAR_7->reg_read = FUNC_12;
 else
  VAR_7->reg_read = FUNC_13;

 VAR_8 = FUNC_5(VAR_5, VAR_7);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 VAR_11 = FUNC_7(VAR_10, VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_7->reg_read(VAR_9, 0, VAR_11, VAR_10);
 FUNC_2(VAR_11, VAR_10);
 FUNC_6(VAR_11);

 FUNC_10(VAR_4, VAR_8);

 return 0;
}
