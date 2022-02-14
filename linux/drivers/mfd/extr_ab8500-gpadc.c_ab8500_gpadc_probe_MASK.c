
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct ab8500_gpadc {scalar_t__ irq_sw; scalar_t__ irq_hw; TYPE_1__* dev; int node; int regu; int ab8500_gpadc_complete; int ab8500_gpadc_lock; int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct ab8500_gpadc*) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (TYPE_1__*,char*,...) ;
 int FUNC_5 (int ) ;
 struct ab8500_gpadc* FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (int,struct ab8500_gpadc*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 void* FUNC_12 (struct platform_device*,char*) ;
 int FUNC_13 (struct platform_device*,struct ab8500_gpadc*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*,int ) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (scalar_t__,int *,int ,int,char*,struct ab8500_gpadc*) ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_8)
{
 int VAR_9 = 0;
 struct ab8500_gpadc *VAR_10;

 VAR_10 = FUNC_6(&VAR_8->dev,
        sizeof(struct ab8500_gpadc), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->irq_sw = FUNC_12(VAR_8, "SW_CONV_END");
 if (VAR_10->irq_sw < 0)
  FUNC_4(VAR_10->dev, "failed to get platform sw_conv_end irq\n");

 VAR_10->irq_hw = FUNC_12(VAR_8, "HW_CONV_END");
 if (VAR_10->irq_hw < 0)
  FUNC_4(VAR_10->dev, "failed to get platform hw_conv_end irq\n");

 VAR_10->dev = &VAR_8->dev;
 VAR_10->parent = FUNC_5(VAR_8->dev.parent);
 FUNC_11(&VAR_10->ab8500_gpadc_lock);


 FUNC_9(&VAR_10->ab8500_gpadc_complete);


 if (VAR_10->irq_sw >= 0) {
  VAR_9 = FUNC_19(VAR_10->irq_sw, ((void*)0),
   VAR_6,
   VAR_3 | VAR_5 | VAR_4,
   "ab8500-gpadc-sw",
   VAR_10);
  if (VAR_9 < 0) {
   FUNC_4(VAR_10->dev,
    "Failed to register interrupt irq: %d\n",
    VAR_10->irq_sw);
   goto fail;
  }
 }

 if (VAR_10->irq_hw >= 0) {
  VAR_9 = FUNC_19(VAR_10->irq_hw, ((void*)0),
   VAR_6,
   VAR_3 | VAR_5 | VAR_4,
   "ab8500-gpadc-hw",
   VAR_10);
  if (VAR_9 < 0) {
   FUNC_4(VAR_10->dev,
    "Failed to register interrupt irq: %d\n",
    VAR_10->irq_hw);
   goto fail_irq;
  }
 }


 VAR_10->regu = FUNC_7(&VAR_8->dev, "vddadc");
 if (FUNC_0(VAR_10->regu)) {
  VAR_9 = FUNC_1(VAR_10->regu);
  FUNC_4(VAR_10->dev, "failed to get vtvout LDO\n");
  goto fail_irq;
 }

 FUNC_13(VAR_8, VAR_10);

 VAR_9 = FUNC_18(VAR_10->regu);
 if (VAR_9) {
  FUNC_4(VAR_10->dev, "Failed to enable vtvout LDO: %d\n", VAR_9);
  goto fail_enable;
 }

 FUNC_16(VAR_10->dev, VAR_2);
 FUNC_17(VAR_10->dev);
 FUNC_15(VAR_10->dev);
 FUNC_14(VAR_10->dev);

 FUNC_2(VAR_10);
 FUNC_10(&VAR_10->node, &VAR_7);
 FUNC_3(VAR_10->dev, "probe success\n");

 return 0;

fail_enable:
fail_irq:
 FUNC_8(VAR_10->irq_sw, VAR_10);
 FUNC_8(VAR_10->irq_hw, VAR_10);
fail:
 return VAR_9;
}
