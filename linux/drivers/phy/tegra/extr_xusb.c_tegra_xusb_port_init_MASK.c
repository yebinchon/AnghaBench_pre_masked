
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int parent; int of_node; int * type; } ;
struct tegra_xusb_port {unsigned int index; TYPE_1__ dev; struct tegra_xusb_padctl* padctl; int list; } ;
struct tegra_xusb_padctl {int dev; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,char*,char const*,unsigned int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct device_node*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_6(struct tegra_xusb_port *VAR_1,
    struct tegra_xusb_padctl *VAR_2,
    struct device_node *VAR_3,
    const char *VAR_4,
    unsigned int VAR_5)
{
 int VAR_6;

 FUNC_0(&VAR_1->list);
 VAR_1->padctl = VAR_2;
 VAR_1->index = VAR_5;

 FUNC_3(&VAR_1->dev);
 VAR_1->dev.type = &VAR_0;
 VAR_1->dev.of_node = FUNC_5(VAR_3);
 VAR_1->dev.parent = VAR_2->dev;

 VAR_6 = FUNC_1(&VAR_1->dev, "%s-%u", VAR_4, VAR_5);
 if (VAR_6 < 0)
  goto unregister;

 VAR_6 = FUNC_2(&VAR_1->dev);
 if (VAR_6 < 0)
  goto unregister;

 return 0;

unregister:
 FUNC_4(&VAR_1->dev);
 return VAR_6;
}
