
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {TYPE_1__* of_node; } ;
struct platform_device {struct device dev; } ;
struct lantiq_rcu_reset_priv {void* status_offset; void* reset_offset; int regmap; } ;
typedef int __be32 ;
struct TYPE_2__ {int parent; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int const) ;
 int FUNC_3 (struct device*,char*) ;
 int * FUNC_4 (TYPE_1__*,int,int *,int *) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1,
          struct lantiq_rcu_reset_priv *VAR_2)
{
 struct device *VAR_3 = &VAR_1->dev;
 const __be32 *VAR_4;

 VAR_2->regmap = FUNC_5(VAR_3->of_node->parent);
 if (FUNC_0(VAR_2->regmap)) {
  FUNC_3(&VAR_1->dev, "Failed to lookup RCU regmap\n");
  return FUNC_1(VAR_2->regmap);
 }

 VAR_4 = FUNC_4(VAR_3->of_node, 0, ((void*)0), ((void*)0));
 if (!VAR_4) {
  FUNC_3(&VAR_1->dev, "Failed to get RCU reset offset\n");
  return -VAR_0;
 }
 VAR_2->reset_offset = FUNC_2(*VAR_4);

 VAR_4 = FUNC_4(VAR_3->of_node, 1, ((void*)0), ((void*)0));
 if (!VAR_4) {
  FUNC_3(&VAR_1->dev, "Failed to get RCU status offset\n");
  return -VAR_0;
 }
 VAR_2->status_offset = FUNC_2(*VAR_4);

 return 0;
}
