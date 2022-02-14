
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct max8997_dev {int irqlock; int * irq_masks_cur; int * irq_masks_cache; } ;
struct irq_data {int dummy; } ;
struct i2c_client {int dummy; } ;


 scalar_t__ FUNC_0 (struct i2c_client*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct i2c_client* FUNC_1 (struct max8997_dev*,int) ;
 struct max8997_dev* FUNC_2 (struct irq_data*) ;
 scalar_t__* VAR_2 ;
 int FUNC_3 (struct i2c_client*,scalar_t__,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_3)
{
 struct max8997_dev *VAR_4 = FUNC_2(VAR_3);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  u8 VAR_6 = VAR_2[VAR_5];
  struct i2c_client *VAR_7 = FUNC_1(VAR_4, VAR_5);

  if (VAR_6 == VAR_1 ||
    FUNC_0(VAR_7))
   continue;
  VAR_4->irq_masks_cache[VAR_5] = VAR_4->irq_masks_cur[VAR_5];

  FUNC_3(VAR_7, VAR_2[VAR_5],
    VAR_4->irq_masks_cur[VAR_5]);
 }

 FUNC_4(&VAR_4->irqlock);
}
