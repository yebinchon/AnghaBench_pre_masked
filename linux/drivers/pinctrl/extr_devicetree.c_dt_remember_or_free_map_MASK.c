
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_map {char const* name; void* ctrl_dev_name; void* dev_name; } ;
struct pinctrl_dt_map {unsigned int num_maps; int node; struct pinctrl_map* map; struct pinctrl_dev* pctldev; } ;
struct pinctrl_dev {int dev; } ;
struct pinctrl {int dt_maps; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct pinctrl_dev*,struct pinctrl_map*,unsigned int) ;
 struct pinctrl_dt_map* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct pinctrl_map*,unsigned int,int) ;

__attribute__((used)) static int FUNC_5(struct pinctrl *VAR_2, const char *VAR_3,
       struct pinctrl_dev *VAR_4,
       struct pinctrl_map *VAR_5, unsigned VAR_6)
{
 int VAR_7;
 struct pinctrl_dt_map *VAR_8;


 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  VAR_5[VAR_7].dev_name = FUNC_0(VAR_2->dev);
  VAR_5[VAR_7].name = VAR_3;
  if (VAR_4)
   VAR_5[VAR_7].ctrl_dev_name = FUNC_0(VAR_4->dev);
 }


 VAR_8 = FUNC_2(sizeof(*VAR_8), VAR_1);
 if (!VAR_8) {
  FUNC_1(VAR_4, VAR_5, VAR_6);
  return -VAR_0;
 }

 VAR_8->pctldev = VAR_4;
 VAR_8->map = VAR_5;
 VAR_8->num_maps = VAR_6;
 FUNC_3(&VAR_8->node, &VAR_2->dt_maps);

 return FUNC_4(VAR_5, VAR_6, 0);
}
