
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct phy_ops {int dummy; } ;
struct TYPE_8__ {int of_node; struct device* parent; int class; } ;
struct phy {int id; TYPE_1__ dev; int * pwr; struct phy_ops const* ops; int mutex; } ;
struct device_node {int dummy; } ;
struct device {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct phy* FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (TYPE_1__*,char*,int ,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *,int ,int ,int ) ;
 int FUNC_10 (struct phy*) ;
 struct phy* FUNC_11 (int,int ) ;
 int FUNC_12 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_13 (TYPE_1__*) ;
 scalar_t__ FUNC_14 (struct device*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int * FUNC_17 (TYPE_1__*,char*) ;

struct phy *FUNC_18(struct device *VAR_6, struct device_node *VAR_7,
         const struct phy_ops *VAR_8)
{
 int VAR_9;
 int VAR_10;
 struct phy *VAR_11;

 if (FUNC_3(!VAR_6))
  return FUNC_0(-VAR_0);

 VAR_11 = FUNC_11(sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return FUNC_0(-VAR_1);

 VAR_10 = FUNC_9(&VAR_5, 0, 0, VAR_3);
 if (VAR_10 < 0) {
  FUNC_4(VAR_6, "unable to get id\n");
  VAR_9 = VAR_10;
  goto free_phy;
 }

 FUNC_8(&VAR_11->dev);
 FUNC_12(&VAR_11->mutex);

 VAR_11->dev.class = VAR_4;
 VAR_11->dev.parent = VAR_6;
 VAR_11->dev.of_node = VAR_7 ?: VAR_6->of_node;
 VAR_11->id = VAR_10;
 VAR_11->ops = VAR_8;

 VAR_9 = FUNC_6(&VAR_11->dev, "phy-%s.%d", FUNC_5(VAR_6), VAR_10);
 if (VAR_9)
  goto put_dev;


 VAR_11->pwr = FUNC_17(&VAR_11->dev, "phy");
 if (FUNC_1(VAR_11->pwr)) {
  VAR_9 = FUNC_2(VAR_11->pwr);
  if (VAR_9 == -VAR_2)
   goto put_dev;

  VAR_11->pwr = ((void*)0);
 }

 VAR_9 = FUNC_7(&VAR_11->dev);
 if (VAR_9)
  goto put_dev;

 if (FUNC_14(VAR_6)) {
  FUNC_13(&VAR_11->dev);
  FUNC_15(&VAR_11->dev);
 }

 return VAR_11;

put_dev:
 FUNC_16(&VAR_11->dev);
 return FUNC_0(VAR_9);

free_phy:
 FUNC_10(VAR_11);
 return FUNC_0(VAR_9);
}
