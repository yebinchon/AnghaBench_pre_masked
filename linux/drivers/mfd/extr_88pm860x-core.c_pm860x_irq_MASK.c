
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm860x_irq_data {int reg; int enable; } ;
struct pm860x_chip {scalar_t__ id; scalar_t__ irq_base; struct i2c_client* companion; struct i2c_client* client; } ;
struct i2c_client {int dummy; } ;
typedef int irqreturn_t ;


 int FUNC_0 (struct pm860x_irq_data*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 struct pm860x_irq_data* VAR_2 ;
 int FUNC_2 (struct i2c_client*,int) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_3, void *VAR_4)
{
 struct pm860x_chip *VAR_5 = VAR_4;
 struct pm860x_irq_data *VAR_6;
 struct i2c_client *VAR_7;
 int VAR_8 = -1, VAR_9 = 0;
 int VAR_10;

 VAR_7 = (VAR_5->id == VAR_0) ? VAR_5->client : VAR_5->companion;
 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_2); VAR_10++) {
  VAR_6 = &VAR_2[VAR_10];
  if (VAR_8 != VAR_6->reg) {
   VAR_8 = VAR_6->reg;
   VAR_9 = FUNC_2(VAR_7, VAR_6->reg);
  }
  if (VAR_9 & VAR_6->enable)
   FUNC_1(VAR_5->irq_base + VAR_10);
 }
 return VAR_1;
}
