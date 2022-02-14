
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int nr_resets; int of_node; int owner; int * ops; } ;
struct uniphier_reset_priv {TYPE_2__ rcdev; struct uniphier_reset_data const* data; struct regmap* regmap; struct device* dev; } ;
struct uniphier_reset_data {scalar_t__ id; } ;
struct regmap {int dummy; } ;
struct device {int of_node; TYPE_1__* driver; } ;
struct platform_device {struct device dev; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct device*,char*,int) ;
 struct uniphier_reset_priv* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*,TYPE_2__*) ;
 unsigned int FUNC_6 (unsigned int,scalar_t__) ;
 struct uniphier_reset_data* FUNC_7 (struct device*) ;
 struct device_node* FUNC_8 (int ) ;
 int FUNC_9 (struct device_node*) ;
 struct regmap* FUNC_10 (struct device_node*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct uniphier_reset_priv *VAR_7;
 const struct uniphier_reset_data *VAR_8, *VAR_9;
 struct regmap *VAR_10;
 struct device_node *VAR_11;
 unsigned int VAR_12 = 0;

 VAR_9 = FUNC_7(VAR_6);
 if (FUNC_2(!VAR_9))
  return -VAR_0;

 VAR_11 = FUNC_8(VAR_6->of_node);
 VAR_10 = FUNC_10(VAR_11);
 FUNC_9(VAR_11);
 if (FUNC_0(VAR_10)) {
  FUNC_3(VAR_6, "failed to get regmap (error %ld)\n",
   FUNC_1(VAR_10));
  return FUNC_1(VAR_10);
 }

 VAR_7 = FUNC_4(VAR_6, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 for (VAR_8 = VAR_9; VAR_8->id != VAR_3; VAR_8++)
  VAR_12 = FUNC_6(VAR_12, VAR_8->id + 1);

 VAR_7->rcdev.ops = &VAR_4;
 VAR_7->rcdev.owner = VAR_6->driver->owner;
 VAR_7->rcdev.of_node = VAR_6->of_node;
 VAR_7->rcdev.nr_resets = VAR_12;
 VAR_7->dev = VAR_6;
 VAR_7->regmap = VAR_10;
 VAR_7->data = VAR_9;

 return FUNC_5(&VAR_5->dev, &VAR_7->rcdev);
}
