
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max8925_irq_data {scalar_t__ flags; int reg; int enable; scalar_t__ tsc_irq; } ;
struct max8925_chip {scalar_t__ irq_base; struct i2c_client* i2c; struct i2c_client* adc; struct i2c_client* rtc; } ;
struct i2c_client {int dummy; } ;
typedef int irqreturn_t ;


 int FUNC_0 (struct max8925_irq_data*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 struct max8925_irq_data* VAR_3 ;
 int FUNC_2 (struct i2c_client*,int) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct max8925_chip *VAR_6 = VAR_5;
 struct max8925_irq_data *VAR_7;
 struct i2c_client *VAR_8;
 int VAR_9 = -1, VAR_10 = 0;
 int VAR_11;

 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_3); VAR_11++) {
  VAR_7 = &VAR_3[VAR_11];

  if (VAR_7->tsc_irq)
   continue;
  if (VAR_7->flags == VAR_1)
   VAR_8 = VAR_6->rtc;
  else if (VAR_7->flags == VAR_0)
   VAR_8 = VAR_6->adc;
  else
   VAR_8 = VAR_6->i2c;
  if (VAR_9 != VAR_7->reg) {
   VAR_9 = VAR_7->reg;
   VAR_10 = FUNC_2(VAR_8, VAR_7->reg);
  }
  if (VAR_10 & VAR_7->enable)
   FUNC_1(VAR_6->irq_base + VAR_11);
 }
 return VAR_2;
}
