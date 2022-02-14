
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_12__ {int of_node; } ;
struct platform_device {TYPE_3__ dev; } ;
struct pinctrl_pin_desc {int name; int number; } ;
struct mtk_pinctrl {int nbase; int pctrl; struct mtk_pin_soc const* soc; int * base; TYPE_3__* dev; } ;
struct mtk_pin_soc {int nbase_names; int npins; TYPE_1__* pins; int * base_names; } ;
struct TYPE_11__ {int npins; int custom_conf_items; int custom_params; int num_custom_params; struct pinctrl_pin_desc const* pins; } ;
struct TYPE_10__ {int name; int number; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,char*,...) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 int FUNC_5 (TYPE_3__*,struct resource*) ;
 void* FUNC_6 (TYPE_3__*,int,int,int ) ;
 struct mtk_pinctrl* FUNC_7 (TYPE_3__*,int,int ) ;
 int FUNC_8 (TYPE_3__*,TYPE_2__*,struct mtk_pinctrl*,int *) ;
 int FUNC_9 (struct mtk_pinctrl*,struct platform_device*) ;
 int FUNC_10 (struct mtk_pinctrl*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_2__ VAR_7 ;
 int FUNC_11 (struct platform_device*) ;
 int FUNC_12 (int ) ;
 struct resource* FUNC_13 (struct platform_device*,int ,int ) ;
 int FUNC_14 (struct platform_device*,struct mtk_pinctrl*) ;

int FUNC_15(struct platform_device *VAR_8,
       const struct mtk_pin_soc *VAR_9)
{
 struct pinctrl_pin_desc *VAR_10;
 struct mtk_pinctrl *VAR_11;
 struct resource *VAR_12;
 int VAR_13, VAR_14;

 VAR_11 = FUNC_7(&VAR_8->dev, sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_1;

 FUNC_14(VAR_8, VAR_11);
 VAR_11->soc = VAR_9;
 VAR_11->dev = &VAR_8->dev;

 if (!VAR_11->soc->nbase_names) {
  FUNC_3(&VAR_8->dev,
   "SoC should be assigned at least one register base\n");
  return -VAR_0;
 }

 VAR_11->base = FUNC_6(&VAR_8->dev, VAR_11->soc->nbase_names,
          sizeof(*VAR_11->base), VAR_3);
 if (!VAR_11->base)
  return -VAR_1;

 for (VAR_14 = 0; VAR_14 < VAR_11->soc->nbase_names; VAR_14++) {
  VAR_12 = FUNC_13(VAR_8, VAR_4,
         VAR_11->soc->base_names[VAR_14]);
  if (!VAR_12) {
   FUNC_3(&VAR_8->dev, "missing IO resource\n");
   return -VAR_2;
  }

  VAR_11->base[VAR_14] = FUNC_5(&VAR_8->dev, VAR_12);
  if (FUNC_1(VAR_11->base[VAR_14]))
   return FUNC_2(VAR_11->base[VAR_14]);
 }

 VAR_11->nbase = VAR_11->soc->nbase_names;

 VAR_13 = FUNC_11(VAR_8);
 if (VAR_13) {
  FUNC_3(&VAR_8->dev, "build state failed: %d\n", VAR_13);
  return -VAR_0;
 }


 VAR_10 = FUNC_6(&VAR_8->dev, VAR_11->soc->npins, sizeof(*VAR_10),
      VAR_3);
 if (!VAR_10)
  return -VAR_1;

 for (VAR_14 = 0; VAR_14 < VAR_11->soc->npins; VAR_14++) {
  VAR_10[VAR_14].number = VAR_11->soc->pins[VAR_14].number;
  VAR_10[VAR_14].name = VAR_11->soc->pins[VAR_14].name;
 }


 VAR_7.pins = (const struct pinctrl_pin_desc *)VAR_10;
 VAR_7.npins = VAR_11->soc->npins;
 VAR_7.num_custom_params = FUNC_0(VAR_6);
 VAR_7.custom_params = VAR_6;




 VAR_13 = FUNC_8(&VAR_8->dev, &VAR_7, VAR_11,
          &VAR_11->pctrl);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_12(VAR_11->pctrl);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_9(VAR_11, VAR_8);
 if (VAR_13)
  FUNC_4(&VAR_8->dev,
    "Failed to add EINT, but pinctrl still can work\n");


 VAR_13 = FUNC_10(VAR_11, VAR_8->dev.of_node);
 if (VAR_13) {
  FUNC_3(&VAR_8->dev, "Failed to add gpio_chip\n");
  return VAR_13;
 }

 FUNC_14(VAR_8, VAR_11);

 return 0;
}
