
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_6__ {int of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct pinctrl_pin_desc {int number; char* name; } ;
struct pinctrl_desc {struct pinctrl_pin_desc* pins; int npins; int * pmxops; int * pctlops; int owner; int name; } ;
struct dc_pinmap {char** pin_names; int pctl; TYPE_1__* dev; struct pinctrl_desc* desc; int regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int VAR_7 ;
 int FUNC_2 (struct dc_pinmap*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,struct resource*) ;
 void* FUNC_5 (TYPE_1__*,int ,int,int ) ;
 void* FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (TYPE_1__*,struct pinctrl_desc*,struct dc_pinmap*) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (char*,int,char*,char,int) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_10)
{
 struct dc_pinmap *VAR_11;
 struct resource *VAR_12;
 struct pinctrl_pin_desc *VAR_13;
 struct pinctrl_desc *VAR_14;
 char *VAR_15;
 int VAR_16 = FUNC_10("GP_xx") + 1;
 int VAR_17, VAR_18;

 VAR_11 = FUNC_6(&VAR_10->dev, sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_12 = FUNC_8(VAR_10, VAR_3, 0);
 VAR_11->regs = FUNC_4(&VAR_10->dev, VAR_12);
 if (FUNC_0(VAR_11->regs))
  return FUNC_1(VAR_11->regs);

 VAR_13 = FUNC_5(&VAR_10->dev, VAR_4, sizeof(*VAR_13),
       VAR_2);
 if (!VAR_13)
  return -VAR_1;
 VAR_15 = FUNC_5(&VAR_10->dev, VAR_4, VAR_16,
     VAR_2);
 if (!VAR_15)
  return -VAR_1;

 for (VAR_17 = 0; VAR_17 < VAR_6; VAR_17++) {
  for (VAR_18 = 0; VAR_18 < VAR_5; VAR_18++) {
   int VAR_19 = VAR_17*VAR_5 + VAR_18;
   char *VAR_20 = &VAR_15[VAR_19 * VAR_16];

   FUNC_9(VAR_20, VAR_16, "GP_%c%c", 'A'+VAR_17, '0'+VAR_18);

   VAR_13[VAR_19].number = VAR_19;
   VAR_13[VAR_19].name = VAR_20;
   VAR_11->pin_names[VAR_19] = VAR_20;
  }
 }

 VAR_14 = FUNC_6(&VAR_10->dev, sizeof(*VAR_14), VAR_2);
 if (!VAR_14)
  return -VAR_1;

 VAR_14->name = VAR_0,
 VAR_14->owner = VAR_7,
 VAR_14->pctlops = &VAR_8,
 VAR_14->pmxops = &VAR_9,
 VAR_14->npins = VAR_4;
 VAR_14->pins = VAR_13;
 VAR_11->desc = VAR_14;

 VAR_11->dev = &VAR_10->dev;

 VAR_11->pctl = FUNC_7(&VAR_10->dev, VAR_14, VAR_11);
 if (FUNC_0(VAR_11->pctl)) {
  FUNC_3(&VAR_10->dev, "pinctrl driver registration failed\n");
  return FUNC_1(VAR_11->pctl);
 }

 return FUNC_2(VAR_11, VAR_10->dev.of_node);
}
