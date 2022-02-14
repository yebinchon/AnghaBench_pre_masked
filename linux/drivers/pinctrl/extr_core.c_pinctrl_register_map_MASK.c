
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_maps {unsigned int num_maps; int node; struct pinctrl_map const* maps; } ;
struct pinctrl_map {int type; int name; int ctrl_dev_name; int dev_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (struct pinctrl_maps*) ;
 struct pinctrl_map const* FUNC_1 (struct pinctrl_map const*,int,int ) ;
 struct pinctrl_maps* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct pinctrl_map const*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (struct pinctrl_map const*,int) ;
 int FUNC_8 (char*,unsigned int) ;
 int FUNC_9 (char*,int,...) ;

int FUNC_10(const struct pinctrl_map *VAR_5, unsigned VAR_6,
    bool VAR_7)
{
 int VAR_8, VAR_9;
 struct pinctrl_maps *VAR_10;

 FUNC_8("add %u pinctrl maps\n", VAR_6);


 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  if (!VAR_5[VAR_8].dev_name) {
   FUNC_9("failed to register map %s (%d): no device given\n",
          VAR_5[VAR_8].name, VAR_8);
   return -VAR_0;
  }

  if (!VAR_5[VAR_8].name) {
   FUNC_9("failed to register map %d: no map name given\n",
          VAR_8);
   return -VAR_0;
  }

  if (VAR_5[VAR_8].type != 129 &&
    !VAR_5[VAR_8].ctrl_dev_name) {
   FUNC_9("failed to register map %s (%d): no pin control device given\n",
          VAR_5[VAR_8].name, VAR_8);
   return -VAR_0;
  }

  switch (VAR_5[VAR_8].type) {
  case 129:
   break;
  case 128:
   VAR_9 = FUNC_7(&VAR_5[VAR_8], VAR_8);
   if (VAR_9 < 0)
    return VAR_9;
   break;
  case 130:
  case 131:
   VAR_9 = FUNC_6(&VAR_5[VAR_8], VAR_8);
   if (VAR_9 < 0)
    return VAR_9;
   break;
  default:
   FUNC_9("failed to register map %s (%d): invalid type given\n",
          VAR_5[VAR_8].name, VAR_8);
   return -VAR_0;
  }
 }

 VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->num_maps = VAR_6;
 if (VAR_7) {
  VAR_10->maps = FUNC_1(VAR_5, sizeof(*VAR_5) * VAR_6,
       VAR_2);
  if (!VAR_10->maps) {
   FUNC_0(VAR_10);
   return -VAR_1;
  }
 } else {
  VAR_10->maps = VAR_5;
 }

 FUNC_4(&VAR_4);
 FUNC_3(&VAR_10->node, &VAR_3);
 FUNC_5(&VAR_4);

 return 0;
}
