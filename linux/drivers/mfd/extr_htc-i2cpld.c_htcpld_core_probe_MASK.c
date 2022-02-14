
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct device {int dummy; } ;
struct platform_device {int name; struct device dev; } ;
struct htcpld_data {scalar_t__ int_reset_gpio_lo; scalar_t__ int_reset_gpio_hi; int chained_irq; } ;
struct htcpld_core_platform_data {scalar_t__ int_reset_gpio_lo; scalar_t__ int_reset_gpio_hi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct htcpld_core_platform_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*,...) ;
 int FUNC_3 (struct device*,int ) ;
 struct htcpld_data* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (scalar_t__,char*) ;
 int FUNC_6 (scalar_t__,int) ;
 int VAR_8 ;
 int FUNC_7 (struct platform_device*) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (struct platform_device*,struct htcpld_data*) ;
 int FUNC_10 (int ,int *,int ,int,int ,struct htcpld_data*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_9)
{
 struct htcpld_data *VAR_10;
 struct device *VAR_11 = &VAR_9->dev;
 struct htcpld_core_platform_data *VAR_12;
 struct resource *VAR_13;
 int VAR_14 = 0;

 if (!VAR_11)
  return -VAR_0;

 VAR_12 = FUNC_0(VAR_11);
 if (!VAR_12) {
  FUNC_2(VAR_11, "Platform data not found for htcpld core!\n");
  return -VAR_2;
 }

 VAR_10 = FUNC_4(VAR_11, sizeof(struct htcpld_data), VAR_3);
 if (!VAR_10)
  return -VAR_1;


 VAR_13 = FUNC_8(VAR_9, VAR_4, 0);
 if (VAR_13) {
  int VAR_15;
  VAR_10->chained_irq = VAR_13->start;


  VAR_15 = VAR_6 | VAR_7 |
   VAR_5;
  VAR_14 = FUNC_10(VAR_10->chained_irq,
        ((void*)0), VAR_8,
        VAR_15, VAR_9->name, VAR_10);
  if (VAR_14) {
   FUNC_2(VAR_11, "Unable to setup chained irq handler: %d\n", VAR_14);
   return VAR_14;
  } else
   FUNC_3(VAR_11, 0);
 }


 FUNC_9(VAR_9, VAR_10);


 VAR_14 = FUNC_7(VAR_9);
 if (VAR_14)
  return VAR_14;


 if (VAR_12->int_reset_gpio_hi) {
  VAR_14 = FUNC_5(VAR_12->int_reset_gpio_hi, "htcpld-core");
  if (VAR_14) {




   FUNC_2(VAR_11, "Unable to request int_reset_gpio_hi -- interrupts may not work\n");
   VAR_10->int_reset_gpio_hi = 0;
  } else {
   VAR_10->int_reset_gpio_hi = VAR_12->int_reset_gpio_hi;
   FUNC_6(VAR_10->int_reset_gpio_hi, 1);
  }
 }

 if (VAR_12->int_reset_gpio_lo) {
  VAR_14 = FUNC_5(VAR_12->int_reset_gpio_lo, "htcpld-core");
  if (VAR_14) {




   FUNC_2(VAR_11, "Unable to request int_reset_gpio_lo -- interrupts may not work\n");
   VAR_10->int_reset_gpio_lo = 0;
  } else {
   VAR_10->int_reset_gpio_lo = VAR_12->int_reset_gpio_lo;
   FUNC_6(VAR_10->int_reset_gpio_lo, 0);
  }
 }

 FUNC_1(VAR_11, "Initialized successfully\n");
 return 0;
}
