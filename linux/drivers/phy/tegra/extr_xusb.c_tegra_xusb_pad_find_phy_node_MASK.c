
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct device_node* of_node; } ;
struct tegra_xusb_pad {TYPE_3__* soc; TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_6__ {TYPE_2__* lanes; } ;
struct TYPE_5__ {char* name; } ;


 struct device_node* FUNC_0 (struct device_node*,char*) ;
 int FUNC_1 (struct device_node*) ;

__attribute__((used)) static struct device_node *
FUNC_2(struct tegra_xusb_pad *VAR_0, unsigned int VAR_1)
{
 struct device_node *VAR_2, *VAR_3;

 VAR_3 = FUNC_0(VAR_0->dev.of_node, "lanes");
 if (!VAR_3)
  return ((void*)0);

 VAR_2 = FUNC_0(VAR_3, VAR_0->soc->lanes[VAR_1].name);
 FUNC_1(VAR_3);

 return VAR_2;
}
