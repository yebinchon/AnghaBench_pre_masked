
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int group; int function; } ;
struct TYPE_6__ {int num_configs; int * configs; int group_or_pin; } ;
struct TYPE_8__ {TYPE_3__ mux; TYPE_2__ configs; } ;
struct pinctrl_map {TYPE_4__ data; int type; } ;
struct pinctrl_dev {int dev; } ;
struct device_node {int name; } ;
struct at91_pinctrl {int dev; } ;
struct at91_pin_group {int npins; TYPE_1__* pins_conf; int * pins; } ;
struct TYPE_5__ {int conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct at91_pin_group* FUNC_0 (struct at91_pinctrl*,int ) ;
 int FUNC_1 (int ,char*,int ,int ,int) ;
 int FUNC_2 (int ,char*,struct device_node*) ;
 struct pinctrl_map* FUNC_3 (int ,int,int,int ) ;
 int FUNC_4 (int ,struct pinctrl_map*) ;
 struct device_node* FUNC_5 (struct device_node*) ;
 int FUNC_6 (struct device_node*) ;
 int FUNC_7 (struct pinctrl_dev*,int ) ;
 struct at91_pinctrl* FUNC_8 (struct pinctrl_dev*) ;

__attribute__((used)) static int FUNC_9(struct pinctrl_dev *VAR_5,
   struct device_node *VAR_6,
   struct pinctrl_map **VAR_7, unsigned *VAR_8)
{
 struct at91_pinctrl *VAR_9 = FUNC_8(VAR_5);
 const struct at91_pin_group *VAR_10;
 struct pinctrl_map *VAR_11;
 struct device_node *VAR_12;
 int VAR_13 = 1;
 int VAR_14;





 VAR_10 = FUNC_0(VAR_9, VAR_6->name);
 if (!VAR_10) {
  FUNC_2(VAR_9->dev, "unable to find group for node %pOFn\n",
   VAR_6);
  return -VAR_0;
 }

 VAR_13 += VAR_10->npins;
 VAR_11 = FUNC_3(VAR_5->dev, VAR_13, sizeof(*VAR_11),
          VAR_2);
 if (!VAR_11)
  return -VAR_1;

 *VAR_7 = VAR_11;
 *VAR_8 = VAR_13;


 VAR_12 = FUNC_5(VAR_6);
 if (!VAR_12) {
  FUNC_4(VAR_5->dev, VAR_11);
  return -VAR_0;
 }
 VAR_11[0].type = VAR_4;
 VAR_11[0].data.mux.function = VAR_12->name;
 VAR_11[0].data.mux.group = VAR_6->name;
 FUNC_6(VAR_12);


 VAR_11++;
 for (VAR_14 = 0; VAR_14 < VAR_10->npins; VAR_14++) {
  VAR_11[VAR_14].type = VAR_3;
  VAR_11[VAR_14].data.configs.group_or_pin =
    FUNC_7(VAR_5, VAR_10->pins[VAR_14]);
  VAR_11[VAR_14].data.configs.configs = &VAR_10->pins_conf[VAR_14].conf;
  VAR_11[VAR_14].data.configs.num_configs = 1;
 }

 FUNC_1(VAR_5->dev, "maps: function %s group %s num %d\n",
  (*VAR_7)->data.mux.function, (*VAR_7)->data.mux.group, VAR_13);

 return 0;
}
