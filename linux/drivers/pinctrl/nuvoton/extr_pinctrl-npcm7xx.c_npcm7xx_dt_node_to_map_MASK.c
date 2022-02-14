
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pinctrl_map {int dummy; } ;
struct pinctrl_dev {int dummy; } ;
struct npcm7xx_pinctrl {int dev; } ;
struct device_node {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct pinctrl_dev*,struct device_node*,struct pinctrl_map**,int *,int ) ;
 struct npcm7xx_pinctrl* FUNC_2 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_3(struct pinctrl_dev *VAR_1,
      struct device_node *VAR_2,
      struct pinctrl_map **VAR_3,
      u32 *VAR_4)
{
 struct npcm7xx_pinctrl *VAR_5 = FUNC_2(VAR_1);

 FUNC_0(VAR_5->dev, "dt_node_to_map: %s\n", VAR_2->name);
 return FUNC_1(VAR_1, VAR_2,
           VAR_3, VAR_4,
           VAR_0);
}
