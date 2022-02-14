
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct sunxi_sramc_variant {scalar_t__ has_emac_clock; } ;
struct resource {int dummy; } ;
struct regmap {int dummy; } ;
struct TYPE_6__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int VAR_3 ;
 struct regmap* VAR_4 ;
 struct dentry* FUNC_2 (char*,int ,int *,int *,int *) ;
 struct regmap* FUNC_3 (TYPE_1__*,struct resource*) ;
 struct regmap* FUNC_4 (TYPE_1__*,struct regmap*,int *) ;
 struct sunxi_sramc_variant* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int *,int *,TYPE_1__*) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_8)
{
 struct resource *VAR_9;
 struct dentry *VAR_10;
 struct regmap *VAR_11;
 const struct sunxi_sramc_variant *VAR_12;

 VAR_5 = &VAR_8->dev;

 VAR_12 = FUNC_5(&VAR_8->dev);
 if (!VAR_12)
  return -VAR_0;

 VAR_9 = FUNC_7(VAR_8, VAR_2, 0);
 VAR_4 = FUNC_3(&VAR_8->dev, VAR_9);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 FUNC_6(VAR_8->dev.of_node, ((void*)0), ((void*)0), &VAR_8->dev);

 VAR_10 = FUNC_2("sram", VAR_3, ((void*)0), ((void*)0),
    &VAR_7);
 if (!VAR_10)
  return -VAR_1;

 if (VAR_12->has_emac_clock) {
  VAR_11 = FUNC_4(&VAR_8->dev, VAR_4,
         &VAR_6);

  if (FUNC_0(VAR_11))
   return FUNC_1(VAR_11);
 }

 return 0;
}
