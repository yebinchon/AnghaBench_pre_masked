
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct resource {int dummy; } ;
struct TYPE_21__ {int of_node; } ;
struct platform_device {TYPE_6__ dev; } ;
struct pinctrl_xway_soc {int pin_count; int num_exin; int exin; int num_funcs; int funcs; int num_grps; int grps; int mfp; } ;
struct pinctrl_pin_desc {int dummy; } ;
struct of_device_id {scalar_t__ data; } ;
struct TYPE_22__ {char* name; scalar_t__ number; } ;
struct TYPE_20__ {int ngpio; int base; int of_node; int owner; TYPE_6__* parent; } ;
struct TYPE_19__ {int npins; int base; } ;
struct TYPE_18__ {int num_pads; int num_mfp; int pctrl; int num_exin; int exin; int num_funcs; int funcs; int num_grps; int grps; int mfp; TYPE_8__* pads; int * membase; } ;
struct TYPE_17__ {int npins; int name; TYPE_8__* pins; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 struct pinctrl_xway_soc VAR_5 ;
 int FUNC_2 (TYPE_6__*,char*) ;
 int FUNC_3 (TYPE_6__*,char*) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*,TYPE_4__*,int *) ;
 int FUNC_6 (TYPE_6__*,struct resource*) ;
 char* FUNC_7 (TYPE_6__*,int ,char*,int) ;
 TYPE_8__* FUNC_8 (TYPE_6__*,int,int,int ) ;
 int FUNC_9 (struct platform_device*,TYPE_2__*) ;
 struct of_device_id* FUNC_10 (int ,TYPE_6__*) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int ,TYPE_3__*) ;
 struct resource* FUNC_13 (struct platform_device*,int ,int ) ;
 TYPE_4__ VAR_6 ;
 TYPE_3__ VAR_7 ;
 TYPE_2__ VAR_8 ;
 int VAR_9 ;
 TYPE_1__ VAR_10 ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_11)
{
 const struct of_device_id *VAR_12;
 const struct pinctrl_xway_soc *VAR_13;
 struct resource *VAR_14;
 int VAR_15, VAR_16;


 VAR_14 = FUNC_13(VAR_11, VAR_3, 0);
 VAR_8.membase[0] = FUNC_6(&VAR_11->dev, VAR_14);
 if (FUNC_0(VAR_8.membase[0]))
  return FUNC_1(VAR_8.membase[0]);

 VAR_12 = FUNC_10(VAR_9, &VAR_11->dev);
 if (VAR_12)
  VAR_13 = (const struct pinctrl_xway_soc *) VAR_12->data;
 else
  VAR_13 = &VAR_5;


 VAR_6.ngpio = VAR_13->pin_count;


 VAR_8.pads = FUNC_8(&VAR_11->dev,
   VAR_6.ngpio, sizeof(struct pinctrl_pin_desc),
   VAR_1);
 if (!VAR_8.pads)
  return -VAR_0;

 for (VAR_16 = 0; VAR_16 < VAR_6.ngpio; VAR_16++) {
  char *VAR_17 = FUNC_7(&VAR_11->dev, VAR_1, "io%d", VAR_16);

  if (!VAR_17)
   return -VAR_0;

  VAR_8.pads[VAR_16].number = VAR_2 + VAR_16;
  VAR_8.pads[VAR_16].name = VAR_17;
 }
 VAR_10.pins = VAR_8.pads;


 VAR_10.name = FUNC_4(&VAR_11->dev);
 VAR_10.npins = VAR_6.ngpio;

 VAR_8.num_pads = VAR_6.ngpio;
 VAR_8.num_mfp = VAR_6.ngpio;
 VAR_8.mfp = VAR_13->mfp;
 VAR_8.grps = VAR_13->grps;
 VAR_8.num_grps = VAR_13->num_grps;
 VAR_8.funcs = VAR_13->funcs;
 VAR_8.num_funcs = VAR_13->num_funcs;
 VAR_8.exin = VAR_13->exin;
 VAR_8.num_exin = VAR_13->num_exin;


 VAR_15 = FUNC_9(VAR_11, &VAR_8);
 if (VAR_15) {
  FUNC_2(&VAR_11->dev, "Failed to register pinctrl driver\n");
  return VAR_15;
 }


 VAR_6.parent = &VAR_11->dev;
 VAR_6.owner = VAR_4;
 VAR_6.of_node = VAR_11->dev.of_node;
 VAR_15 = FUNC_5(&VAR_11->dev, &VAR_6, ((void*)0));
 if (VAR_15) {
  FUNC_2(&VAR_11->dev, "Failed to register gpio chip\n");
  return VAR_15;
 }
 if (!FUNC_11(VAR_11->dev.of_node, "gpio-ranges")) {

  VAR_7.npins = VAR_6.ngpio;
  VAR_7.base = VAR_6.base;
  FUNC_12(VAR_8.pctrl, &VAR_7);
 }

 FUNC_3(&VAR_11->dev, "Init done\n");
 return 0;
}
