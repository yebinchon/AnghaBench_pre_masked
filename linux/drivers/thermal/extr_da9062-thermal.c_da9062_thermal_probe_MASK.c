
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ of_node; int parent; } ;
struct platform_device {TYPE_4__ dev; } ;
struct of_device_id {TYPE_1__* data; } ;
struct da9062_thermal {int irq; TYPE_2__* zone; TYPE_1__* config; int lock; int work; TYPE_4__* dev; int mode; struct da9062* hw; } ;
struct da9062 {int dummy; } ;
struct TYPE_11__ {int passive_delay; } ;
struct TYPE_10__ {int name; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (TYPE_4__*,char*,int ) ;
 int FUNC_4 (TYPE_4__*,char*) ;
 struct da9062* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_4__*,char*,unsigned int) ;
 struct da9062_thermal* FUNC_7 (TYPE_4__*,int,int ) ;
 int FUNC_8 (int *) ;
 struct of_device_id* FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (scalar_t__,char*,unsigned int*) ;
 int FUNC_11 (struct platform_device*,char*) ;
 int FUNC_12 (struct platform_device*,struct da9062_thermal*) ;
 int FUNC_13 (int,int *,int ,int,char*,struct da9062_thermal*) ;
 TYPE_2__* FUNC_14 (int ,int,int ,struct da9062_thermal*,int *,int *,unsigned int,int ) ;
 int FUNC_15 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_13)
{
 struct da9062 *VAR_14 = FUNC_5(VAR_13->dev.parent);
 struct da9062_thermal *VAR_15;
 unsigned int VAR_16 = VAR_0;
 const struct of_device_id *VAR_17;
 int VAR_18 = 0;

 VAR_17 = FUNC_9(VAR_9,
         VAR_13->dev.of_node);
 if (!VAR_17)
  return -VAR_4;

 if (VAR_13->dev.of_node) {
  if (!FUNC_10(VAR_13->dev.of_node,
       "polling-delay-passive",
       &VAR_16)) {
   if (VAR_16 < VAR_2 ||
       VAR_16 > VAR_1) {
    FUNC_6(&VAR_13->dev,
      "Out-of-range polling period %d ms\n",
      VAR_16);
    VAR_16 = VAR_0;
   }
  }
 }

 VAR_15 = FUNC_7(&VAR_13->dev, sizeof(struct da9062_thermal),
          VAR_5);
 if (!VAR_15) {
  VAR_18 = -VAR_3;
  goto err;
 }

 VAR_15->config = VAR_17->data;
 VAR_15->hw = VAR_14;
 VAR_15->mode = VAR_8;
 VAR_15->dev = &VAR_13->dev;

 FUNC_0(&VAR_15->work, VAR_12);
 FUNC_8(&VAR_15->lock);

 VAR_15->zone = FUNC_14(VAR_15->config->name,
     1, 0, VAR_15,
     &VAR_11, ((void*)0), VAR_16,
     0);
 if (FUNC_1(VAR_15->zone)) {
  FUNC_4(&VAR_13->dev, "Cannot register thermal zone device\n");
  VAR_18 = FUNC_2(VAR_15->zone);
  goto err;
 }

 FUNC_3(&VAR_13->dev,
  "TJUNC temperature polling period set at %d ms\n",
  VAR_15->zone->passive_delay);

 VAR_18 = FUNC_11(VAR_13, "THERMAL");
 if (VAR_18 < 0) {
  FUNC_4(&VAR_13->dev, "Failed to get platform IRQ.\n");
  goto err_zone;
 }
 VAR_15->irq = VAR_18;

 VAR_18 = FUNC_13(VAR_15->irq, ((void*)0),
       VAR_10,
       VAR_7 | VAR_6,
       "THERMAL", VAR_15);
 if (VAR_18) {
  FUNC_4(&VAR_13->dev,
   "Failed to request thermal device IRQ.\n");
  goto err_zone;
 }

 FUNC_12(VAR_13, VAR_15);
 return 0;

err_zone:
 FUNC_15(VAR_15->zone);
err:
 return VAR_18;
}
