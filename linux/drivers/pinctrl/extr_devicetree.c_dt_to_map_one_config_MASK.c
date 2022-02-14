
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pinctrl_ops {int (* dt_node_to_map ) (struct pinctrl_dev*,struct device_node*,struct pinctrl_map**,unsigned int*) ;} ;
struct pinctrl_map {int dummy; } ;
struct pinctrl_dev {int dev; TYPE_1__* desc; } ;
struct pinctrl {TYPE_2__* dev; } ;
struct device_node {int dummy; } ;
struct TYPE_6__ {struct device_node* of_node; } ;
struct TYPE_5__ {struct pinctrl_ops* pctlops; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (struct pinctrl*,char const*,struct pinctrl_dev*,struct pinctrl_map*,unsigned int) ;
 struct pinctrl_dev* FUNC_6 (struct device_node*) ;
 struct device_node* FUNC_7 (struct device_node*) ;
 struct device_node* FUNC_8 (struct device_node*) ;
 scalar_t__ FUNC_9 (struct device_node*) ;
 int FUNC_10 (struct device_node*) ;
 int FUNC_11 (struct device_node*,char*) ;
 int FUNC_12 (struct pinctrl_dev*,struct device_node*,struct pinctrl_map**,unsigned int*) ;

__attribute__((used)) static int FUNC_13(struct pinctrl *VAR_2,
    struct pinctrl_dev *VAR_3,
    const char *VAR_4,
    struct device_node *VAR_5)
{
 struct pinctrl_dev *VAR_6 = ((void*)0);
 struct device_node *VAR_7;
 const struct pinctrl_ops *VAR_8;
 int VAR_9;
 struct pinctrl_map *VAR_10;
 unsigned VAR_11;
 bool VAR_12 = 0;


 VAR_7 = FUNC_8(VAR_5);
 for (;;) {
  if (!VAR_12)
   VAR_12 = FUNC_11(VAR_7,
             "pinctrl-use-default");

  VAR_7 = FUNC_7(VAR_7);
  if (!VAR_7 || FUNC_9(VAR_7)) {
   FUNC_10(VAR_7);

   if (FUNC_0(VAR_0) && !VAR_12)
    return FUNC_4(VAR_2->dev);

   return FUNC_3(VAR_2->dev);
  }

  if (VAR_3 && (VAR_7 == VAR_2->dev->of_node)) {
   VAR_6 = VAR_3;
   break;
  }
  VAR_6 = FUNC_6(VAR_7);
  if (VAR_6)
   break;

  if (VAR_7 == VAR_2->dev->of_node) {
   FUNC_10(VAR_7);
   return -VAR_1;
  }
 }
 FUNC_10(VAR_7);





 VAR_8 = VAR_6->desc->pctlops;
 if (!VAR_8->dt_node_to_map) {
  FUNC_1(VAR_2->dev, "pctldev %s doesn't support DT\n",
   FUNC_2(VAR_6->dev));
  return -VAR_1;
 }
 VAR_9 = VAR_8->dt_node_to_map(VAR_6, VAR_5, &VAR_10, &VAR_11);
 if (VAR_9 < 0)
  return VAR_9;


 return FUNC_5(VAR_2, VAR_4, VAR_6, VAR_10, VAR_11);
}
