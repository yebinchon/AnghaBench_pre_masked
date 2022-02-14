
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int notifier_call; } ;
struct rockchip_iodomain_supply {int idx; TYPE_2__ nb; struct regulator* reg; struct rockchip_iodomain* iod; } ;
struct rockchip_iodomain {struct rockchip_iodomain_supply* supplies; TYPE_1__* soc_data; TYPE_4__* dev; struct regulator* grf; } ;
struct regulator {int dummy; } ;
struct TYPE_11__ {struct device* parent; struct device_node* of_node; } ;
struct platform_device {TYPE_4__ dev; } ;
struct of_device_id {TYPE_1__* data; } ;
struct device_node {int dummy; } ;
struct device {scalar_t__ of_node; } ;
struct TYPE_9__ {char** supply_names; int (* init ) (struct rockchip_iodomain*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct regulator*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct regulator*) ;
 int FUNC_2 (TYPE_4__*,char*,int) ;
 int FUNC_3 (TYPE_4__*,char*) ;
 int FUNC_4 (TYPE_4__*,char*,...) ;
 struct rockchip_iodomain* FUNC_5 (TYPE_4__*,int,int ) ;
 struct regulator* FUNC_6 (TYPE_4__*,char const*) ;
 struct of_device_id* FUNC_7 (int ,struct device_node*) ;
 int FUNC_8 (struct platform_device*,struct rockchip_iodomain*) ;
 int FUNC_9 (struct regulator*) ;
 int FUNC_10 (struct regulator*,TYPE_2__*) ;
 int FUNC_11 (struct regulator*,TYPE_2__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_12 (struct rockchip_iodomain_supply*,int) ;
 int FUNC_13 (struct rockchip_iodomain*) ;
 struct regulator* FUNC_14 (scalar_t__) ;
 struct regulator* FUNC_15 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_9)
{
 struct device_node *VAR_10 = VAR_9->dev.of_node;
 const struct of_device_id *VAR_11;
 struct rockchip_iodomain *VAR_12;
 struct device *VAR_13;
 int VAR_14, VAR_15 = 0;

 if (!VAR_10)
  return -VAR_1;

 VAR_12 = FUNC_5(&VAR_9->dev, sizeof(*VAR_12), VAR_4);
 if (!VAR_12)
  return -VAR_2;

 VAR_12->dev = &VAR_9->dev;
 FUNC_8(VAR_9, VAR_12);

 VAR_11 = FUNC_7(VAR_7, VAR_10);
 VAR_12->soc_data = VAR_11->data;

 VAR_13 = VAR_9->dev.parent;
 if (VAR_13 && VAR_13->of_node) {
  VAR_12->grf = FUNC_14(VAR_13->of_node);
 } else {
  FUNC_3(&VAR_9->dev, "falling back to old binding\n");
  VAR_12->grf = FUNC_15(VAR_10, "rockchip,grf");
 }

 if (FUNC_0(VAR_12->grf)) {
  FUNC_4(&VAR_9->dev, "couldn't find grf regmap\n");
  return FUNC_1(VAR_12->grf);
 }

 for (VAR_14 = 0; VAR_14 < VAR_5; VAR_14++) {
  const char *VAR_16 = VAR_12->soc_data->supply_names[VAR_14];
  struct rockchip_iodomain_supply *VAR_17 = &VAR_12->supplies[VAR_14];
  struct regulator *VAR_18;
  int VAR_19;

  if (!VAR_16)
   continue;

  VAR_18 = FUNC_6(VAR_12->dev, VAR_16);
  if (FUNC_0(VAR_18)) {
   VAR_15 = FUNC_1(VAR_18);


   if (VAR_15 == -VAR_1)
    continue;
   else if (VAR_15 != -VAR_3)
    FUNC_4(VAR_12->dev, "couldn't get regulator %s\n",
     VAR_16);
   goto unreg_notify;
  }


  VAR_19 = FUNC_9(VAR_18);


  if (VAR_19 < 0) {
   FUNC_4(VAR_12->dev, "Can't determine voltage: %s\n",
    VAR_16);
   goto unreg_notify;
  }

  if (VAR_19 > VAR_6) {
   FUNC_2(VAR_12->dev,
     "%d uV is too high. May damage SoC!\n",
     VAR_19);
   VAR_15 = -VAR_0;
   goto unreg_notify;
  }


  VAR_17->idx = VAR_14;
  VAR_17->iod = VAR_12;
  VAR_17->reg = VAR_18;
  VAR_17->nb.notifier_call = VAR_8;

  VAR_15 = FUNC_12(VAR_17, VAR_19);
  if (VAR_15) {
   VAR_17->reg = ((void*)0);
   goto unreg_notify;
  }


  VAR_15 = FUNC_10(VAR_18, &VAR_17->nb);
  if (VAR_15) {
   FUNC_4(&VAR_9->dev,
    "regulator notifier request failed\n");
   VAR_17->reg = ((void*)0);
   goto unreg_notify;
  }
 }

 if (VAR_12->soc_data->init)
  VAR_12->soc_data->init(VAR_12);

 return 0;

unreg_notify:
 for (VAR_14 = VAR_5 - 1; VAR_14 >= 0; VAR_14--) {
  struct rockchip_iodomain_supply *VAR_20 = &VAR_12->supplies[VAR_14];

  if (VAR_20->reg)
   FUNC_11(VAR_20->reg,
            &VAR_20->nb);
 }

 return VAR_15;
}
