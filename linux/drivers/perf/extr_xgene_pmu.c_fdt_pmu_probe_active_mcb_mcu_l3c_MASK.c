
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xgene_pmu {int l3c_active_mask; int mcb_active_mask; int mc_active_mask; } ;
struct regmap {int dummy; } ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_3 (struct regmap*,int ,unsigned int*) ;
 struct regmap* FUNC_4 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_5(struct xgene_pmu *VAR_5,
         struct platform_device *VAR_6)
{
 struct regmap *VAR_7, *VAR_8, *VAR_9;
 struct device_node *VAR_10 = VAR_6->dev.of_node;
 unsigned int VAR_11;

 VAR_7 = FUNC_4(VAR_10, "regmap-csw");
 if (FUNC_0(VAR_7)) {
  FUNC_2(&VAR_6->dev, "unable to get syscon regmap csw\n");
  return FUNC_1(VAR_7);
 }

 VAR_8 = FUNC_4(VAR_10, "regmap-mcba");
 if (FUNC_0(VAR_8)) {
  FUNC_2(&VAR_6->dev, "unable to get syscon regmap mcba\n");
  return FUNC_1(VAR_8);
 }

 VAR_9 = FUNC_4(VAR_10, "regmap-mcbb");
 if (FUNC_0(VAR_9)) {
  FUNC_2(&VAR_6->dev, "unable to get syscon regmap mcbb\n");
  return FUNC_1(VAR_9);
 }

 VAR_5->l3c_active_mask = 0x1;
 if (FUNC_3(VAR_7, VAR_0, &VAR_11))
  return -VAR_2;

 if (VAR_11 & VAR_1) {

  VAR_5->mcb_active_mask = 0x3;

  if (FUNC_3(VAR_9, VAR_3, &VAR_11))
   return 0;
  VAR_5->mc_active_mask =
   (VAR_11 & VAR_4) ? 0xF : 0x5;
 } else {

  VAR_5->mcb_active_mask = 0x1;

  if (FUNC_3(VAR_8, VAR_3, &VAR_11))
   return 0;
  VAR_5->mc_active_mask =
   (VAR_11 & VAR_4) ? 0x3 : 0x1;
 }

 return 0;
}
