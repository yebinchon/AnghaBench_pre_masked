
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmem_config {int stride; int word_size; int reg_write; int reg_read; int owner; int size; struct device* dev; int name; struct snvs_lpgpr_priv* priv; } ;
struct snvs_lpgpr_priv {struct nvmem_config cfg; struct snvs_lpgpr_cfg const* dcfg; int regmap; } ;
struct snvs_lpgpr_cfg {int size; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct nvmem_device {int dummy; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nvmem_device*) ;
 int VAR_5 ;
 int FUNC_3 (struct device*) ;
 struct snvs_lpgpr_priv* FUNC_4 (struct device*,int,int ) ;
 struct nvmem_device* FUNC_5 (struct device*,struct nvmem_config*) ;
 struct snvs_lpgpr_cfg* FUNC_6 (struct device*) ;
 struct device_node* FUNC_7 (struct device_node*) ;
 int FUNC_8 (struct device_node*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (struct device_node*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_8)
{
 struct device *VAR_9 = &VAR_8->dev;
 struct device_node *VAR_10 = VAR_9->of_node;
 struct device_node *VAR_11;
 struct snvs_lpgpr_priv *VAR_12;
 struct nvmem_config *VAR_13;
 struct nvmem_device *VAR_14;
 const struct snvs_lpgpr_cfg *VAR_15;

 if (!VAR_10)
  return -VAR_2;

 VAR_12 = FUNC_4(VAR_9, sizeof(*VAR_12), VAR_4);
 if (!VAR_12)
  return -VAR_3;

 VAR_15 = FUNC_6(VAR_9);
 if (!VAR_15)
  return -VAR_0;

 VAR_11 = FUNC_7(VAR_10);
 if (!VAR_11)
  return -VAR_1;

 VAR_12->regmap = FUNC_9(VAR_11);
 FUNC_8(VAR_11);
 if (FUNC_0(VAR_12->regmap))
  return FUNC_1(VAR_12->regmap);

 VAR_12->dcfg = VAR_15;

 VAR_13 = &VAR_12->cfg;
 VAR_13->priv = VAR_12;
 VAR_13->name = FUNC_3(VAR_9);
 VAR_13->dev = VAR_9;
 VAR_13->stride = 4;
 VAR_13->word_size = 4;
 VAR_13->size = VAR_15->size,
 VAR_13->owner = VAR_5;
 VAR_13->reg_read = VAR_6;
 VAR_13->reg_write = VAR_7;

 VAR_14 = FUNC_5(VAR_9, VAR_13);

 return FUNC_2(VAR_14);
}
