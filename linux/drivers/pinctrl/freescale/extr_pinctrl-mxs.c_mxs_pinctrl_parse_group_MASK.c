
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct property {int dummy; } ;
struct platform_device {int dev; } ;
struct mxs_pinctrl_data {TYPE_1__* soc; } ;
struct mxs_group {char* name; int npins; int * pins; int * muxsel; } ;
struct device_node {char* name; } ;
struct TYPE_2__ {struct mxs_group* groups; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 void* FUNC_2 (int *,int,int,int ) ;
 char* FUNC_3 (int *,int,int ) ;
 struct property* FUNC_4 (struct device_node*,char const*,int*) ;
 scalar_t__ FUNC_5 (struct device_node*,char*,int*) ;
 int FUNC_6 (struct device_node*,char const*,int *,int) ;
 struct mxs_pinctrl_data* FUNC_7 (struct platform_device*) ;
 int FUNC_8 (char*,int,char*,char*,...) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_4,
       struct device_node *VAR_5, int VAR_6,
       const char **VAR_7)
{
 struct mxs_pinctrl_data *VAR_8 = FUNC_7(VAR_4);
 struct mxs_group *VAR_9 = &VAR_8->soc->groups[VAR_6];
 struct property *VAR_10;
 const char *VAR_11 = "fsl,pinmux-ids";
 char *VAR_12;
 int VAR_13 = FUNC_9(VAR_5->name) + VAR_3;
 u32 VAR_14, VAR_15;

 VAR_12 = FUNC_3(&VAR_4->dev, VAR_13, VAR_2);
 if (!VAR_12)
  return -VAR_1;
 if (FUNC_5(VAR_5, "reg", &VAR_14))
  FUNC_8(VAR_12, VAR_13, "%s", VAR_5->name);
 else
  FUNC_8(VAR_12, VAR_13, "%s.%d", VAR_5->name, VAR_14);
 VAR_9->name = VAR_12;

 VAR_10 = FUNC_4(VAR_5, VAR_11, &VAR_13);
 if (!VAR_10)
  return -VAR_0;
 VAR_9->npins = VAR_13 / sizeof(u32);

 VAR_9->pins = FUNC_2(&VAR_4->dev, VAR_9->npins, sizeof(*VAR_9->pins),
          VAR_2);
 if (!VAR_9->pins)
  return -VAR_1;

 VAR_9->muxsel = FUNC_2(&VAR_4->dev, VAR_9->npins, sizeof(*VAR_9->muxsel),
     VAR_2);
 if (!VAR_9->muxsel)
  return -VAR_1;

 FUNC_6(VAR_5, VAR_11, VAR_9->pins, VAR_9->npins);
 for (VAR_15 = 0; VAR_15 < VAR_9->npins; VAR_15++) {
  VAR_9->muxsel[VAR_15] = FUNC_0(VAR_9->pins[VAR_15]);
  VAR_9->pins[VAR_15] = FUNC_1(VAR_9->pins[VAR_15]);
 }

 if (VAR_7)
  *VAR_7 = VAR_9->name;

 return 0;
}
