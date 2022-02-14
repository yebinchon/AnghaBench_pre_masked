
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm860x_irq_data {int mask_reg; unsigned char offs; unsigned char enable; } ;
struct pm860x_chip {scalar_t__ id; int irq_lock; int dev; struct i2c_client* companion; struct i2c_client* client; } ;
struct irq_data {int dummy; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct pm860x_irq_data*) ;
 scalar_t__ VAR_0 ;



 int FUNC_1 (int ,char*) ;
 struct pm860x_chip* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (int *) ;
 struct pm860x_irq_data* VAR_1 ;
 int FUNC_4 (struct i2c_client*,int const,unsigned char) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_2)
{
 struct pm860x_chip *VAR_3 = FUNC_2(VAR_2);
 struct pm860x_irq_data *VAR_4;
 struct i2c_client *VAR_5;
 static unsigned char VAR_6[3] = {0x0, 0x0, 0x0};
 unsigned char VAR_7[3];
 int VAR_8;

 VAR_5 = (VAR_3->id == VAR_0) ? VAR_3->client : VAR_3->companion;

 for (VAR_8 = 0; VAR_8 < 3; VAR_8++)
  VAR_7[VAR_8] = VAR_6[VAR_8];
 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_1); VAR_8++) {
  VAR_4 = &VAR_1[VAR_8];
  switch (VAR_4->mask_reg) {
  case 130:
   VAR_7[0] &= ~VAR_4->offs;
   VAR_7[0] |= VAR_4->enable;
   break;
  case 129:
   VAR_7[1] &= ~VAR_4->offs;
   VAR_7[1] |= VAR_4->enable;
   break;
  case 128:
   VAR_7[2] &= ~VAR_4->offs;
   VAR_7[2] |= VAR_4->enable;
   break;
  default:
   FUNC_1(VAR_3->dev, "wrong IRQ\n");
   break;
  }
 }

 for (VAR_8 = 0; VAR_8 < 3; VAR_8++) {
  if (VAR_7[VAR_8] != VAR_6[VAR_8]) {
   VAR_6[VAR_8] = VAR_7[VAR_8];
   FUNC_4(VAR_5, 130 + VAR_8, VAR_7[VAR_8]);
  }
 }

 FUNC_3(&VAR_3->irq_lock);
}
