
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct device_node {struct device_node* parent; } ;
struct aspeed_pinmux_data {TYPE_1__* dev; struct regmap** maps; } ;
struct TYPE_2__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct regmap* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct regmap*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_4 (struct regmap*) ;
 int FUNC_5 (struct device_node*) ;
 struct device_node* FUNC_6 (int ,char*,int) ;
 struct regmap* FUNC_7 (struct device_node*) ;

__attribute__((used)) static struct regmap *FUNC_8(struct aspeed_pinmux_data *VAR_6,
            int VAR_7)
{
 if (VAR_7 == VAR_2) {
  FUNC_2(!VAR_6->maps[VAR_7], "Missing SCU syscon!");
  return VAR_6->maps[VAR_7];
 }

 if (VAR_7 >= VAR_3)
  return FUNC_0(-VAR_4);

 if (FUNC_4(VAR_6->maps[VAR_7]))
  return VAR_6->maps[VAR_7];

 if (VAR_7 == VAR_0) {
  struct device_node *VAR_8;
  struct regmap *VAR_9;

  VAR_8 = FUNC_6(VAR_6->dev->of_node,
     "aspeed,external-nodes", 0);
  if (VAR_8) {
   VAR_9 = FUNC_7(VAR_8);
   FUNC_5(VAR_8);
   if (FUNC_1(VAR_9))
    return VAR_9;
  } else
   return FUNC_0(-VAR_5);

  VAR_6->maps[VAR_0] = VAR_9;
  FUNC_3(VAR_6->dev, "Acquired GFX regmap");
  return VAR_9;
 }

 if (VAR_7 == VAR_1) {
  struct device_node *VAR_10;
  struct regmap *VAR_11;

  VAR_10 = FUNC_6(VAR_6->dev->of_node,
     "aspeed,external-nodes", 1);
  if (VAR_10) {
   VAR_11 = FUNC_7(VAR_10->parent);
   FUNC_5(VAR_10);
   if (FUNC_1(VAR_11))
    return VAR_11;
  } else
   return FUNC_0(-VAR_5);

  VAR_6->maps[VAR_1] = VAR_11;
  FUNC_3(VAR_6->dev, "Acquired LPC regmap");
  return VAR_11;
 }

 return FUNC_0(-VAR_4);
}
