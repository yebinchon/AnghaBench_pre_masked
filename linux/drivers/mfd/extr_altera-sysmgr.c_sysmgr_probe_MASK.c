
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {scalar_t__ start; scalar_t__ end; } ;
struct regmap_config {scalar_t__ max_register; int reg_write; int reg_read; scalar_t__ reg_stride; } ;
struct regmap {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;
struct altr_sysmgr {struct regmap* regmap; int * base; } ;
typedef int resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 struct regmap_config VAR_4 ;
 int * FUNC_2 (struct device*,scalar_t__,scalar_t__) ;
 struct altr_sysmgr* FUNC_3 (struct device*,int,int ) ;
 struct regmap* FUNC_4 (struct device*,int *,int *,struct regmap_config*) ;
 struct regmap* FUNC_5 (struct device*,int *,struct regmap_config*) ;
 scalar_t__ FUNC_6 (struct device_node*,char*) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (struct platform_device*,struct altr_sysmgr*) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (struct resource*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_7)
{
 struct altr_sysmgr *VAR_8;
 struct regmap *VAR_9;
 struct resource *VAR_10;
 struct regmap_config VAR_11 = VAR_4;
 struct device *VAR_12 = &VAR_7->dev;
 struct device_node *VAR_13 = VAR_12->of_node;

 VAR_8 = FUNC_3(VAR_12, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_10 = FUNC_7(VAR_7, VAR_3, 0);
 if (!VAR_10)
  return -VAR_0;

 VAR_11.max_register = FUNC_10(VAR_10) -
         VAR_11.reg_stride;
 if (FUNC_6(VAR_13, "altr,sys-mgr-s10")) {

  VAR_8->base = (resource_size_t *)VAR_10->start;
  VAR_11.reg_read = VAR_5;
  VAR_11.reg_write = VAR_6;

  VAR_9 = FUNC_4(VAR_12, ((void*)0), VAR_8->base,
       &VAR_11);
 } else {
  VAR_8->base = FUNC_2(VAR_12, VAR_10->start,
         FUNC_10(VAR_10));
  if (!VAR_8->base)
   return -VAR_1;

  VAR_11.max_register = VAR_10->end - VAR_10->start - 3;
  VAR_9 = FUNC_5(VAR_12, VAR_8->base,
            &VAR_11);
 }

 if (FUNC_0(VAR_9)) {
  FUNC_9("regmap init failed\n");
  return FUNC_1(VAR_9);
 }

 VAR_8->regmap = VAR_9;

 FUNC_8(VAR_7, VAR_8);

 return 0;
}
