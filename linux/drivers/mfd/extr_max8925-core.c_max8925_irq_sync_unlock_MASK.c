
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max8925_irq_data {int mask_reg; unsigned char enable; } ;
struct max8925_chip {int irq_lock; int adc; int rtc; int i2c; int dev; } ;
struct irq_data {int dummy; } ;


 int FUNC_0 (struct max8925_irq_data*) ;






 int FUNC_1 (int ,char*) ;
 struct max8925_chip* FUNC_2 (struct irq_data*) ;
 struct max8925_irq_data* VAR_0 ;
 int FUNC_3 (int ,int const,unsigned char) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_1)
{
 struct max8925_chip *VAR_2 = FUNC_2(VAR_1);
 struct max8925_irq_data *VAR_3;
 static unsigned char VAR_4[2] = {0xff, 0xff};
 static unsigned char VAR_5[2] = {0xff, 0xff};
 static unsigned char VAR_6 = 0xff, VAR_7 = 0xff;
 unsigned char VAR_8[2], VAR_9[2];
 unsigned char VAR_10, VAR_11;
 int VAR_12;


 VAR_8[0] = VAR_4[0];
 VAR_8[1] = VAR_4[1];
 VAR_9[0] = VAR_5[0];
 VAR_9[1] = VAR_5[1];
 VAR_10 = VAR_6;
 VAR_11 = VAR_7;
 for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_0); VAR_12++) {
  VAR_3 = &VAR_0[VAR_12];

  switch (VAR_3->mask_reg) {
  case 133:
   VAR_8[0] &= ~VAR_3->enable;
   break;
  case 132:
   VAR_8[1] &= ~VAR_3->enable;
   break;
  case 131:
   VAR_9[0] &= ~VAR_3->enable;
   break;
  case 130:
   VAR_9[1] &= ~VAR_3->enable;
   break;
  case 129:
   VAR_10 &= ~VAR_3->enable;
   break;
  case 128:
   VAR_11 &= ~VAR_3->enable;
   break;
  default:
   FUNC_1(VAR_2->dev, "wrong IRQ\n");
   break;
  }
 }

 if (VAR_4[0] != VAR_8[0]) {
  VAR_4[0] = VAR_8[0];
  FUNC_3(VAR_2->i2c, 133,
   VAR_8[0]);
 }
 if (VAR_4[1] != VAR_8[1]) {
  VAR_4[1] = VAR_8[1];
  FUNC_3(VAR_2->i2c, 132,
   VAR_8[1]);
 }
 if (VAR_5[0] != VAR_9[0]) {
  VAR_5[0] = VAR_9[0];
  FUNC_3(VAR_2->i2c, 131,
    VAR_9[0]);
 }
 if (VAR_5[1] != VAR_9[1]) {
  VAR_5[1] = VAR_9[1];
  FUNC_3(VAR_2->i2c, 130,
    VAR_9[1]);
 }
 if (VAR_6 != VAR_10) {
  VAR_6 = VAR_10;
  FUNC_3(VAR_2->rtc, 129, VAR_10);
 }
 if (VAR_7 != VAR_11) {
  VAR_7 = VAR_11;
  FUNC_3(VAR_2->adc, 128, VAR_11);
 }

 FUNC_4(&VAR_2->irq_lock);
}
