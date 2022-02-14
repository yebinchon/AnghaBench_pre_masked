
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int group; int function; } ;
struct TYPE_8__ {unsigned long* configs; int num_configs; int group_or_pin; } ;
struct TYPE_10__ {TYPE_4__ mux; TYPE_3__ configs; } ;
struct pinctrl_map {TYPE_5__ data; int type; } ;
struct pinctrl_dev {int dev; } ;
struct imx_pinctrl_soc_info {int flags; } ;
struct imx_pinctrl {int dev; struct imx_pinctrl_soc_info* info; } ;
struct TYPE_6__ {int config; } ;
struct TYPE_7__ {TYPE_1__ mmio; int scu; } ;
struct imx_pin {TYPE_2__ conf; int pin; } ;
struct group_desc {int num_pins; scalar_t__ data; } ;
struct device_node {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int ,int ,int) ;
 int FUNC_1 (int ,char*,struct device_node*) ;
 struct group_desc* FUNC_2 (struct pinctrl_dev*,int ) ;
 int FUNC_3 (struct pinctrl_map*) ;
 struct pinctrl_map* FUNC_4 (int,int,int ) ;
 struct device_node* FUNC_5 (struct device_node*) ;
 int FUNC_6 (struct device_node*) ;
 int FUNC_7 (struct pinctrl_dev*,int ) ;
 struct imx_pinctrl* FUNC_8 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_9(struct pinctrl_dev *VAR_7,
   struct device_node *VAR_8,
   struct pinctrl_map **VAR_9, unsigned *VAR_10)
{
 struct imx_pinctrl *VAR_11 = FUNC_8(VAR_7);
 const struct imx_pinctrl_soc_info *VAR_12 = VAR_11->info;
 const struct group_desc *VAR_13;
 struct pinctrl_map *VAR_14;
 struct device_node *VAR_15;
 struct imx_pin *VAR_16;
 int VAR_17 = 1;
 int VAR_18, VAR_19;





 VAR_13 = FUNC_2(VAR_7, VAR_8->name);
 if (!VAR_13) {
  FUNC_1(VAR_11->dev, "unable to find group for node %pOFn\n", VAR_8);
  return -VAR_0;
 }

 if (VAR_12->flags & VAR_4) {
  VAR_17 += VAR_13->num_pins;
 } else {
  for (VAR_18 = 0; VAR_18 < VAR_13->num_pins; VAR_18++) {
   VAR_16 = &((struct imx_pin *)(VAR_13->data))[VAR_18];
   if (!(VAR_16->conf.mmio.config & VAR_3))
    VAR_17++;
  }
 }

 VAR_14 = FUNC_4(VAR_17, sizeof(struct pinctrl_map),
    VAR_2);
 if (!VAR_14)
  return -VAR_1;

 *VAR_9 = VAR_14;
 *VAR_10 = VAR_17;


 VAR_15 = FUNC_5(VAR_8);
 if (!VAR_15) {
  FUNC_3(VAR_14);
  return -VAR_0;
 }
 VAR_14[0].type = VAR_6;
 VAR_14[0].data.mux.function = VAR_15->name;
 VAR_14[0].data.mux.group = VAR_8->name;
 FUNC_6(VAR_15);


 VAR_14++;
 for (VAR_18 = VAR_19 = 0; VAR_18 < VAR_13->num_pins; VAR_18++) {
  VAR_16 = &((struct imx_pin *)(VAR_13->data))[VAR_18];





  if (!(VAR_12->flags & VAR_4) &&
      (VAR_16->conf.mmio.config & VAR_3))
   continue;

  VAR_14[VAR_19].type = VAR_5;
  VAR_14[VAR_19].data.configs.group_or_pin =
     FUNC_7(VAR_7, VAR_16->pin);

  if (VAR_12->flags & VAR_4) {




   VAR_14[VAR_19].data.configs.configs =
     (unsigned long *)&VAR_16->conf.scu;
   VAR_14[VAR_19].data.configs.num_configs = 2;
  } else {
   VAR_14[VAR_19].data.configs.configs =
     &VAR_16->conf.mmio.config;
   VAR_14[VAR_19].data.configs.num_configs = 1;
  }

  VAR_19++;
 }

 FUNC_0(VAR_7->dev, "maps: function %s group %s num %d\n",
  (*VAR_9)->data.mux.function, (*VAR_9)->data.mux.group, VAR_17);

 return 0;
}
