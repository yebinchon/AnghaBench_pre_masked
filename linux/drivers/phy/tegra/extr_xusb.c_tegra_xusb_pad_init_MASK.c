
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct tegra_xusb_padctl {int dev; } ;
struct TYPE_7__ {struct device_node* of_node; int * type; int parent; } ;
struct tegra_xusb_pad {TYPE_2__ dev; TYPE_1__* soc; struct tegra_xusb_padctl* padctl; int list; } ;
struct device_node {int dummy; } ;
struct TYPE_6__ {int name; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,char*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_0 ;

int FUNC_5(struct tegra_xusb_pad *VAR_1,
   struct tegra_xusb_padctl *VAR_2,
   struct device_node *VAR_3)
{
 int VAR_4;

 FUNC_3(&VAR_1->dev);
 FUNC_0(&VAR_1->list);
 VAR_1->dev.parent = VAR_2->dev;
 VAR_1->dev.type = &VAR_0;
 VAR_1->dev.of_node = VAR_3;
 VAR_1->padctl = VAR_2;

 VAR_4 = FUNC_1(&VAR_1->dev, "%s", VAR_1->soc->name);
 if (VAR_4 < 0)
  goto unregister;

 VAR_4 = FUNC_2(&VAR_1->dev);
 if (VAR_4 < 0)
  goto unregister;

 return 0;

unregister:
 FUNC_4(&VAR_1->dev);
 return VAR_4;
}
