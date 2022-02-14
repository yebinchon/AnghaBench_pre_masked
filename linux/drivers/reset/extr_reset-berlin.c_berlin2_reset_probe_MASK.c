
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {int of_reset_n_cells; int of_xlate; int of_node; int * ops; int owner; } ;
struct berlin_reset_priv {TYPE_1__ rcdev; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct berlin_reset_priv* FUNC_2 (TYPE_2__*,int,int ) ;
 struct device_node* FUNC_3 (int ) ;
 int FUNC_4 (struct device_node*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct device_node*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_5)
{
 struct device_node *VAR_6 = FUNC_3(VAR_5->dev.of_node);
 struct berlin_reset_priv *VAR_7;

 VAR_7 = FUNC_2(&VAR_5->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->regmap = FUNC_6(VAR_6);
 FUNC_4(VAR_6);
 if (FUNC_0(VAR_7->regmap))
  return FUNC_1(VAR_7->regmap);

 VAR_7->rcdev.owner = VAR_2;
 VAR_7->rcdev.ops = &VAR_3;
 VAR_7->rcdev.of_node = VAR_5->dev.of_node;
 VAR_7->rcdev.of_reset_n_cells = 2;
 VAR_7->rcdev.of_xlate = VAR_4;

 return FUNC_5(&VAR_7->rcdev);
}
