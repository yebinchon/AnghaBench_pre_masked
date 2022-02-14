
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ksz_device {int interface; struct ksz_dev_ops const* dev_ops; int ds; TYPE_2__* dev; int synclko_125; int vlan_mutex; int alu_mutex; int regmap_mutex; int dev_mutex; scalar_t__ reset_gpio; TYPE_1__* pdata; int chip_id; } ;
struct ksz_dev_ops {int (* init ) (struct ksz_device*) ;int (* exit ) (struct ksz_device*) ;scalar_t__ (* detect ) (struct ksz_device*) ;} ;
struct TYPE_4__ {scalar_t__ of_node; } ;
struct TYPE_3__ {int chip_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_2__*,char*,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__,char*) ;
 scalar_t__ FUNC_9 (struct ksz_device*) ;
 int FUNC_10 (struct ksz_device*) ;
 int FUNC_11 (struct ksz_device*) ;

int FUNC_12(struct ksz_device *VAR_2,
   const struct ksz_dev_ops *VAR_3)
{
 int VAR_4;

 if (VAR_2->pdata)
  VAR_2->chip_id = VAR_2->pdata->chip_id;

 VAR_2->reset_gpio = FUNC_2(VAR_2->dev, "reset",
        VAR_1);
 if (FUNC_0(VAR_2->reset_gpio))
  return FUNC_1(VAR_2->reset_gpio);

 if (VAR_2->reset_gpio) {
  FUNC_4(VAR_2->reset_gpio, 1);
  FUNC_5(10);
  FUNC_4(VAR_2->reset_gpio, 0);
 }

 FUNC_6(&VAR_2->dev_mutex);
 FUNC_6(&VAR_2->regmap_mutex);
 FUNC_6(&VAR_2->alu_mutex);
 FUNC_6(&VAR_2->vlan_mutex);

 VAR_2->dev_ops = VAR_3;

 if (VAR_2->dev_ops->detect(VAR_2))
  return -VAR_0;

 VAR_4 = VAR_2->dev_ops->init(VAR_2);
 if (VAR_4)
  return VAR_4;




 if (VAR_2->dev->of_node) {
  VAR_4 = FUNC_7(VAR_2->dev->of_node);
  if (VAR_4 >= 0)
   VAR_2->interface = VAR_4;
  VAR_2->synclko_125 = FUNC_8(VAR_2->dev->of_node,
        "microchip,synclko-125");
 }

 VAR_4 = FUNC_3(VAR_2->ds);
 if (VAR_4) {
  VAR_2->dev_ops->exit(VAR_2);
  return VAR_4;
 }

 return 0;
}
