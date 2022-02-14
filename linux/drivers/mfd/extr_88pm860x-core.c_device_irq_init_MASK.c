
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pm860x_platform_data {int irq_base; scalar_t__ irq_mode; } ;
struct pm860x_chip {scalar_t__ id; int irq_mode; int irq_base; int core_irq; TYPE_1__* dev; int irq_lock; struct i2c_client* companion; struct i2c_client* client; } ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct i2c_client {int irq; TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (TYPE_1__*,char*,int) ;
 int FUNC_2 (int,int ,int,int ) ;
 int FUNC_3 (struct device_node*,int,int,int ,int *,struct pm860x_chip*) ;
 int FUNC_4 (unsigned char*,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct i2c_client*,int ,int,unsigned char*) ;
 int FUNC_7 (struct i2c_client*,int ,int,unsigned char*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_8 (struct i2c_client*,int ,int,int) ;
 int FUNC_9 (int ,int *,int ,unsigned long,char*,struct pm860x_chip*) ;

__attribute__((used)) static int FUNC_10(struct pm860x_chip *VAR_15,
         struct pm860x_platform_data *VAR_16)
{
 struct i2c_client *VAR_17 = (VAR_15->id == VAR_0) ?
  VAR_15->client : VAR_15->companion;
 unsigned char VAR_18[VAR_3];
 unsigned long VAR_19 = VAR_5 | VAR_4;
 int VAR_20, VAR_21, VAR_22 = -VAR_2;
 int VAR_23, VAR_24 = -1;
 struct device_node *VAR_25 = VAR_17->dev.of_node;

 VAR_21 = VAR_9 | VAR_7
  | VAR_8;
 VAR_20 = 0;
 VAR_15->irq_mode = 0;
 if (VAR_16 && VAR_16->irq_mode) {





  VAR_20 |= VAR_7;
  VAR_15->irq_mode = 1;
 }
 VAR_22 = FUNC_8(VAR_17, VAR_6, VAR_21, VAR_20);
 if (VAR_22 < 0)
  goto out;


 FUNC_4(VAR_18, 0, VAR_3);
 VAR_22 = FUNC_7(VAR_17, VAR_10,
    VAR_3, VAR_18);
 if (VAR_22 < 0)
  goto out;

 if (VAR_15->irq_mode) {

  FUNC_4(VAR_18, 0xFF, VAR_3);
  VAR_22 = FUNC_7(VAR_17, VAR_11,
     VAR_3, VAR_18);
 } else {

  VAR_22 = FUNC_6(VAR_17, VAR_11,
     VAR_3, VAR_18);
 }
 if (VAR_22 < 0)
  goto out;

 FUNC_5(&VAR_15->irq_lock);

 if (VAR_16 && VAR_16->irq_base)
  VAR_24 = VAR_16->irq_base;
 VAR_23 = FUNC_0(VAR_14);
 VAR_15->irq_base = FUNC_2(VAR_24, 0, VAR_23, 0);
 if (VAR_15->irq_base < 0) {
  FUNC_1(&VAR_17->dev, "Failed to allocate interrupts, ret:%d\n",
   VAR_15->irq_base);
  VAR_22 = -VAR_1;
  goto out;
 }
 FUNC_3(VAR_25, VAR_23, VAR_15->irq_base, 0,
         &VAR_13, VAR_15);
 VAR_15->core_irq = VAR_17->irq;
 if (!VAR_15->core_irq)
  goto out;

 VAR_22 = FUNC_9(VAR_15->core_irq, ((void*)0), VAR_12,
       VAR_19 | VAR_4, "88pm860x", VAR_15);
 if (VAR_22) {
  FUNC_1(VAR_15->dev, "Failed to request IRQ: %d\n", VAR_22);
  VAR_15->core_irq = 0;
 }

 return 0;
out:
 VAR_15->core_irq = 0;
 return VAR_22;
}
