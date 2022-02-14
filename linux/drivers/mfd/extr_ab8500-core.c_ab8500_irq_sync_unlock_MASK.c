
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct irq_data {int dummy; } ;
struct ab8500 {int mask_size; scalar_t__* oldmask; scalar_t__* mask; int* irq_reg_offset; int irq_lock; int transfer_ongoing; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct ab8500* FUNC_1 (struct irq_data*) ;
 scalar_t__ FUNC_2 (struct ab8500*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ab8500*,int ,int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_2)
{
 struct ab8500 *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->mask_size; VAR_4++) {
  u8 VAR_5 = VAR_3->oldmask[VAR_4];
  u8 VAR_6 = VAR_3->mask[VAR_4];
  int VAR_7;

  if (VAR_6 == VAR_5)
   continue;





  if (VAR_3->irq_reg_offset[VAR_4] == 11 &&
   FUNC_2(VAR_3))
   continue;

  if (VAR_3->irq_reg_offset[VAR_4] < 0)
   continue;

  VAR_3->oldmask[VAR_4] = VAR_6;

  VAR_7 = VAR_1 + VAR_3->irq_reg_offset[VAR_4];
  FUNC_4(VAR_3, VAR_0, VAR_7, VAR_6);
 }
 FUNC_0(&VAR_3->transfer_ongoing);
 FUNC_3(&VAR_3->irq_lock);
}
