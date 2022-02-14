
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pinctrl_state {int settings; } ;
struct pinctrl_setting {int type; int node; int dev_name; struct pinctrl_dev* pctldev; } ;
struct pinctrl_map {int type; int dev_name; int ctrl_dev_name; int name; } ;
struct pinctrl_dev {int dummy; } ;
struct pinctrl {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct pinctrl_state*) ;


 int VAR_5 ;

 int FUNC_1 (struct pinctrl_state*) ;
 struct pinctrl_state* FUNC_2 (struct pinctrl*,int ) ;
 int FUNC_3 (int ,char*,int ) ;
 struct pinctrl_state* FUNC_4 (struct pinctrl*,int ) ;
 struct pinctrl_dev* FUNC_5 (int ) ;
 int FUNC_6 (struct pinctrl_setting*) ;
 struct pinctrl_setting* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (struct pinctrl_map const*,struct pinctrl_setting*) ;
 int FUNC_10 (struct pinctrl_map const*,struct pinctrl_setting*) ;
 int FUNC_11 (int ,int ) ;

__attribute__((used)) static int FUNC_12(struct pinctrl *VAR_6, struct pinctrl_dev *VAR_7,
         const struct pinctrl_map *VAR_8)
{
 struct pinctrl_state *VAR_9;
 struct pinctrl_setting *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_4(VAR_6, VAR_8->name);
 if (!VAR_9)
  VAR_9 = FUNC_2(VAR_6, VAR_8->name);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 if (VAR_8->type == VAR_5)
  return 0;

 VAR_10 = FUNC_7(sizeof(*VAR_10), VAR_4);
 if (!VAR_10)
  return -VAR_2;

 VAR_10->type = VAR_8->type;

 if (VAR_7)
  VAR_10->pctldev = VAR_7;
 else
  VAR_10->pctldev =
   FUNC_5(VAR_8->ctrl_dev_name);
 if (!VAR_10->pctldev) {
  FUNC_6(VAR_10);

  if (!FUNC_11(VAR_8->ctrl_dev_name, VAR_8->dev_name))
   return -VAR_1;




  FUNC_3(VAR_6->dev, "unknown pinctrl device %s in map entry, deferring probe",
   VAR_8->ctrl_dev_name);
  return -VAR_3;
 }

 VAR_10->dev_name = VAR_8->dev_name;

 switch (VAR_8->type) {
 case 128:
  VAR_11 = FUNC_10(VAR_8, VAR_10);
  break;
 case 129:
 case 130:
  VAR_11 = FUNC_9(VAR_8, VAR_10);
  break;
 default:
  VAR_11 = -VAR_0;
  break;
 }
 if (VAR_11 < 0) {
  FUNC_6(VAR_10);
  return VAR_11;
 }

 FUNC_8(&VAR_10->node, &VAR_9->settings);

 return 0;
}
