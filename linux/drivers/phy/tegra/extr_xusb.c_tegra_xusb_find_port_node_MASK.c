
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_xusb_padctl {TYPE_1__* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {struct device_node* of_node; } ;


 int VAR_0 ;
 struct device_node* FUNC_0 (int ) ;
 int VAR_1 ;
 char* FUNC_1 (int ,char*,char const*,unsigned int) ;
 int FUNC_2 (char*) ;
 struct device_node* FUNC_3 (struct device_node*,char*) ;
 int FUNC_4 (struct device_node*) ;

__attribute__((used)) static struct device_node *
FUNC_5(struct tegra_xusb_padctl *VAR_2, const char *VAR_3,
     unsigned int VAR_4)
{
 struct device_node *VAR_5, *VAR_6;
 char *VAR_7;

 VAR_5 = FUNC_3(VAR_2->dev->of_node, "ports");
 if (!VAR_5)
  return ((void*)0);

 VAR_7 = FUNC_1(VAR_1, "%s-%u", VAR_3, VAR_4);
 if (!VAR_7) {
  FUNC_4(VAR_5);
  return FUNC_0(-VAR_0);
 }
 VAR_6 = FUNC_3(VAR_5, VAR_7);
 FUNC_2(VAR_7);
 FUNC_4(VAR_5);

 return VAR_6;
}
