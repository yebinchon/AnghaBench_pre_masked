
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct regmap {int dummy; } ;
struct platform_device {int dev; } ;
struct mvebu_pinctrl_soc_info {int ncontrols; struct mvebu_mpp_ctrl_data* control_data; } ;
struct TYPE_2__ {int offset; struct regmap* map; } ;
struct mvebu_mpp_ctrl_data {TYPE_1__ regmap; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 struct mvebu_pinctrl_soc_info* FUNC_2 (int *) ;
 struct mvebu_mpp_ctrl_data* FUNC_3 (int *,int,int,int ) ;
 int FUNC_4 (struct platform_device*) ;
 struct regmap* FUNC_5 (int ) ;

int FUNC_6(struct platform_device *VAR_2,
          struct device *VAR_3, u32 VAR_4)
{
 struct mvebu_pinctrl_soc_info *VAR_5 = FUNC_2(&VAR_2->dev);
 struct mvebu_mpp_ctrl_data *VAR_6;
 struct regmap *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_5(VAR_3->of_node);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_6 = FUNC_3(&VAR_2->dev, VAR_5->ncontrols, sizeof(*VAR_6),
    VAR_1);
 if (!VAR_6)
  return -VAR_0;

 for (VAR_8 = 0; VAR_8 < VAR_5->ncontrols; VAR_8++) {
  VAR_6[VAR_8].regmap.map = VAR_7;
  VAR_6[VAR_8].regmap.offset = VAR_4;
 }

 VAR_5->control_data = VAR_6;

 return FUNC_4(VAR_2);
}
