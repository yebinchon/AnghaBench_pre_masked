
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct resource {int start; int flags; } ;
struct platform_device {int dev; } ;
struct ds1wm_driver_data {int bus_shift; int clock_rate; int reset_recover_delay; scalar_t__ active_high; int is_hw_big_endian; } ;
struct ds1wm_data {int bus_shift; int irq; int is_hw_big_endian; struct platform_device* pdev; int int_en_reg_none; int reset_recover_delay; int cell; int map; } ;
struct TYPE_3__ {void* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int *,char*,scalar_t__,int ,int ,int,int ) ;
 int FUNC_1 (int *,char*,int,...) ;
 struct ds1wm_driver_data* FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int) ;
 struct ds1wm_data* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int,int ,int ,char*,struct ds1wm_data*) ;
 int FUNC_6 (struct ds1wm_data*) ;
 int VAR_18 ;
 TYPE_1__ VAR_19 ;
 int FUNC_7 (struct ds1wm_data*,int ) ;
 int FUNC_8 (struct ds1wm_data*) ;
 int FUNC_9 (struct ds1wm_data*,int ,int ) ;
 int FUNC_10 (int,int ) ;
 int FUNC_11 (struct platform_device*) ;
 struct resource* FUNC_12 (struct platform_device*,int ,int ) ;
 int FUNC_13 (struct platform_device*,struct ds1wm_data*) ;
 int FUNC_14 (struct resource*) ;
 int FUNC_15 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_16(struct platform_device *VAR_20)
{
 struct ds1wm_data *VAR_21;
 struct ds1wm_driver_data *VAR_22;
 struct resource *VAR_23;
 int VAR_24;
 u8 VAR_25;

 if (!VAR_20)
  return -VAR_3;

 VAR_21 = FUNC_4(&VAR_20->dev, sizeof(*VAR_21), VAR_6);
 if (!VAR_21)
  return -VAR_4;

 FUNC_13(VAR_20, VAR_21);

 VAR_23 = FUNC_12(VAR_20, VAR_12, 0);
 if (!VAR_23)
  return -VAR_5;
 VAR_21->map = FUNC_3(&VAR_20->dev, VAR_23->start,
           FUNC_14(VAR_23));
 if (!VAR_21->map)
  return -VAR_4;

 VAR_21->pdev = VAR_20;
 VAR_21->cell = FUNC_11(VAR_20);
 if (!VAR_21->cell)
  return -VAR_3;
 VAR_22 = FUNC_2(&VAR_20->dev);
 if (!VAR_22)
  return -VAR_3;


 if (VAR_22->bus_shift > 2) {
  FUNC_1(&VAR_21->pdev->dev,
   "illegal bus shift %d, not written",
   VAR_21->bus_shift);
  return -VAR_2;
 }

 VAR_21->bus_shift = VAR_22->bus_shift;

 if ((8 << VAR_21->bus_shift) > FUNC_14(VAR_23)) {
  FUNC_1(&VAR_21->pdev->dev,
   "memory resource size %d to small, should be %d\n",
   (int)FUNC_14(VAR_23),
   8 << VAR_21->bus_shift);
  return -VAR_2;
 }

 VAR_21->is_hw_big_endian = VAR_22->is_hw_big_endian;

 VAR_23 = FUNC_12(VAR_20, VAR_7, 0);
 if (!VAR_23)
  return -VAR_5;
 VAR_21->irq = VAR_23->start;
 VAR_21->int_en_reg_none = (VAR_22->active_high ? VAR_0 : 0);
 VAR_21->reset_recover_delay = VAR_22->reset_recover_delay;


 VAR_25 = FUNC_7(VAR_21, VAR_1);
 FUNC_9(VAR_21,
  VAR_1, VAR_21->int_en_reg_none);

 if (VAR_23->flags & VAR_8)
  FUNC_10(VAR_21->irq, VAR_15);
 if (VAR_23->flags & VAR_10)
  FUNC_10(VAR_21->irq, VAR_14);
 if (VAR_23->flags & VAR_9)
  FUNC_10(VAR_21->irq, VAR_16);
 if (VAR_23->flags & VAR_11)
  FUNC_10(VAR_21->irq, VAR_17);

 VAR_24 = FUNC_5(&VAR_20->dev, VAR_21->irq, VAR_18,
   VAR_13, "ds1wm", VAR_21);
 if (VAR_24) {
  FUNC_1(&VAR_21->pdev->dev,
   "devm_request_irq %d failed with errno %d\n",
   VAR_21->irq,
   VAR_24);

  return VAR_24;
 }

 FUNC_8(VAR_21);

 VAR_19.data = (void *)VAR_21;

 VAR_24 = FUNC_15(&VAR_19);
 if (VAR_24)
  goto err;

 FUNC_0(&VAR_21->pdev->dev,
  "ds1wm: probe successful, IAS: %d, rec.delay: %d, clockrate: %d, bus-shift: %d, is Hw Big Endian: %d\n",
  VAR_22->active_high,
  VAR_22->reset_recover_delay,
  VAR_22->clock_rate,
  VAR_21->bus_shift,
  VAR_21->is_hw_big_endian);
 return 0;

err:
 FUNC_6(VAR_21);

 return VAR_24;
}
