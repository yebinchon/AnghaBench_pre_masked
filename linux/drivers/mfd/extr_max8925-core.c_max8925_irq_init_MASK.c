
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct max8925_platform_data {int tsc_irq; } ;
struct max8925_chip {scalar_t__ irq_base; int core_irq; int tsc_irq; TYPE_1__* dev; int adc; int irq_lock; int rtc; int i2c; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {struct device_node* of_node; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
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
 int FUNC_0 (TYPE_1__*,char*,int) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_2 (int,int ,int ,int ) ;
 int FUNC_3 (struct device_node*,int ,int,int ,int *,struct max8925_chip*) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int VAR_20 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,int *,int ,unsigned long,char*,struct max8925_chip*) ;

__attribute__((used)) static int FUNC_8(struct max8925_chip *VAR_21, int VAR_22,
       struct max8925_platform_data *VAR_23)
{
 unsigned long VAR_24 = VAR_2 | VAR_1;
 int VAR_25;
 struct device_node *VAR_26 = VAR_21->dev->of_node;


 FUNC_4(VAR_21->i2c, VAR_5);
 FUNC_4(VAR_21->i2c, VAR_7);
 FUNC_4(VAR_21->i2c, VAR_10);
 FUNC_4(VAR_21->i2c, VAR_12);
 FUNC_4(VAR_21->rtc, VAR_14);
 FUNC_4(VAR_21->adc, VAR_16);

 FUNC_5(VAR_21->rtc, VAR_3, 0);
 FUNC_5(VAR_21->rtc, VAR_4, 0);
 FUNC_5(VAR_21->i2c, VAR_6, 0xff);
 FUNC_5(VAR_21->i2c, VAR_8, 0xff);
 FUNC_5(VAR_21->i2c, VAR_11, 0xff);
 FUNC_5(VAR_21->i2c, VAR_13, 0xff);
 FUNC_5(VAR_21->rtc, VAR_15, 0xff);

 FUNC_6(&VAR_21->irq_lock);
 VAR_21->irq_base = FUNC_2(-1, 0, VAR_9, 0);
 if (VAR_21->irq_base < 0) {
  FUNC_0(VAR_21->dev, "Failed to allocate interrupts, ret:%d\n",
   VAR_21->irq_base);
  return -VAR_0;
 }

 FUNC_3(VAR_26, VAR_9, VAR_21->irq_base, 0,
         &VAR_19, VAR_21);


 VAR_21->core_irq = VAR_22;
 if (!VAR_21->core_irq)
  return -VAR_0;
 VAR_25 = FUNC_7(VAR_22, ((void*)0), VAR_18, VAR_24 | VAR_1,
       "max8925", VAR_21);
 if (VAR_25) {
  FUNC_0(VAR_21->dev, "Failed to request core IRQ: %d\n", VAR_25);
  VAR_21->core_irq = 0;
  return -VAR_0;
 }




 FUNC_5(VAR_21->adc, VAR_17, 0x0f);

 if (!VAR_23->tsc_irq) {
  FUNC_1(VAR_21->dev, "No interrupt support on TSC IRQ\n");
  return 0;
 }
 VAR_21->tsc_irq = VAR_23->tsc_irq;
 VAR_25 = FUNC_7(VAR_21->tsc_irq, ((void*)0), VAR_20,
       VAR_24 | VAR_1, "max8925-tsc", VAR_21);
 if (VAR_25) {
  FUNC_0(VAR_21->dev, "Failed to request TSC IRQ: %d\n", VAR_25);
  VAR_21->tsc_irq = 0;
 }
 return 0;
}
