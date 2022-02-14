
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct st_pinctrl {int nbanks; TYPE_1__* banks; int pctl; TYPE_2__* dev; } ;
struct TYPE_7__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; } ;
struct pinctrl_desc {int name; int * confops; int * pmxops; int * pctlops; int owner; } ;
struct TYPE_6__ {int range; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*) ;
 void* FUNC_4 (TYPE_2__*,int,int ) ;
 int FUNC_5 (TYPE_2__*,struct pinctrl_desc*,struct st_pinctrl*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct platform_device*,struct st_pinctrl*) ;
 int VAR_4 ;
 int FUNC_8 (struct platform_device*,struct pinctrl_desc*,struct st_pinctrl*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_7)
{
 struct st_pinctrl *VAR_8;
 struct pinctrl_desc *VAR_9;
 int VAR_10, VAR_11;

 if (!VAR_7->dev.of_node) {
  FUNC_2(&VAR_7->dev, "device node not found.\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_4(&VAR_7->dev, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_8 = FUNC_4(&VAR_7->dev, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_8->dev = &VAR_7->dev;
 FUNC_7(VAR_7, VAR_8);
 VAR_10 = FUNC_8(VAR_7, VAR_9, VAR_8);
 if (VAR_10)
  return VAR_10;

 VAR_9->owner = VAR_3;
 VAR_9->pctlops = &VAR_5;
 VAR_9->pmxops = &VAR_6;
 VAR_9->confops = &VAR_4;
 VAR_9->name = FUNC_3(&VAR_7->dev);

 VAR_8->pctl = FUNC_5(&VAR_7->dev, VAR_9, VAR_8);
 if (FUNC_0(VAR_8->pctl)) {
  FUNC_2(&VAR_7->dev, "Failed pinctrl registration\n");
  return FUNC_1(VAR_8->pctl);
 }

 for (VAR_11 = 0; VAR_11 < VAR_8->nbanks; VAR_11++)
  FUNC_6(VAR_8->pctl, &VAR_8->banks[VAR_11].range);

 return 0;
}
