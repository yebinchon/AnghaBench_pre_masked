
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct sc27xx_efuse {int hwlock; TYPE_1__* dev; int mutex; int base; int regmap; } ;
struct TYPE_4__ {int parent; struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct nvmem_device {int dummy; } ;
struct nvmem_config {int stride; int word_size; int read_only; char* name; int size; TYPE_1__* dev; struct sc27xx_efuse* priv; int reg_read; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct nvmem_device*) ;
 int FUNC_1 (struct nvmem_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (int ,int *) ;
 struct sc27xx_efuse* FUNC_4 (TYPE_1__*,int,int ) ;
 struct nvmem_device* FUNC_5 (TYPE_1__*,struct nvmem_config*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct device_node*,int ) ;
 int FUNC_10 (struct device_node*,char*,int *) ;
 int FUNC_11 (struct platform_device*,struct sc27xx_efuse*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_7)
{
 struct device_node *VAR_8 = VAR_7->dev.of_node;
 struct nvmem_config VAR_9 = { };
 struct nvmem_device *VAR_10;
 struct sc27xx_efuse *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_4(&VAR_7->dev, sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_1;

 VAR_11->regmap = FUNC_3(VAR_7->dev.parent, ((void*)0));
 if (!VAR_11->regmap) {
  FUNC_2(&VAR_7->dev, "failed to get efuse regmap\n");
  return -VAR_0;
 }

 VAR_12 = FUNC_10(VAR_8, "reg", &VAR_11->base);
 if (VAR_12) {
  FUNC_2(&VAR_7->dev, "failed to get efuse base address\n");
  return VAR_12;
 }

 VAR_12 = FUNC_9(VAR_8, 0);
 if (VAR_12 < 0) {
  FUNC_2(&VAR_7->dev, "failed to get hwspinlock id\n");
  return VAR_12;
 }

 VAR_11->hwlock = FUNC_7(VAR_12);
 if (!VAR_11->hwlock) {
  FUNC_2(&VAR_7->dev, "failed to request hwspinlock\n");
  return -VAR_2;
 }

 FUNC_8(&VAR_11->mutex);
 VAR_11->dev = &VAR_7->dev;
 FUNC_11(VAR_7, VAR_11);

 VAR_9.stride = 1;
 VAR_9.word_size = 1;
 VAR_9.read_only = 1;
 VAR_9.name = "sc27xx-efuse";
 VAR_9.size = VAR_4 * VAR_5;
 VAR_9.reg_read = VAR_6;
 VAR_9.priv = VAR_11;
 VAR_9.dev = &VAR_7->dev;
 VAR_10 = FUNC_5(&VAR_7->dev, &VAR_9);
 if (FUNC_0(VAR_10)) {
  FUNC_2(&VAR_7->dev, "failed to register nvmem config\n");
  FUNC_6(VAR_11->hwlock);
  return FUNC_1(VAR_10);
 }

 return 0;
}
