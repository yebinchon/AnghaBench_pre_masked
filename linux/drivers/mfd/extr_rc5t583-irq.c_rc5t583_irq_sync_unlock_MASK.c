
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc5t583 {int irq_lock; int dev; int intc_inten_reg; int * irq_en_reg; int * gpedge_reg; } ;
struct irq_data {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int ,int) ;
 int * VAR_1 ;
 struct rc5t583* FUNC_2 (struct irq_data*) ;
 int * VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct irq_data *VAR_3)
{
 struct rc5t583 *VAR_4 = FUNC_2(VAR_3);
 int VAR_5;
 int VAR_6;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4->gpedge_reg); VAR_5++) {
  VAR_6 = FUNC_4(VAR_4->dev, VAR_1[VAR_5],
    VAR_4->gpedge_reg[VAR_5]);
  if (VAR_6 < 0)
   FUNC_1(VAR_4->dev,
    "Error in writing reg 0x%02x error: %d\n",
    VAR_1[VAR_5], VAR_6);
 }

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4->irq_en_reg); VAR_5++) {
  VAR_6 = FUNC_4(VAR_4->dev, VAR_2[VAR_5],
     VAR_4->irq_en_reg[VAR_5]);
  if (VAR_6 < 0)
   FUNC_1(VAR_4->dev,
    "Error in writing reg 0x%02x error: %d\n",
    VAR_2[VAR_5], VAR_6);
 }

 VAR_6 = FUNC_4(VAR_4->dev, VAR_0,
    VAR_4->intc_inten_reg);
 if (VAR_6 < 0)
  FUNC_1(VAR_4->dev,
   "Error in writing reg 0x%02x error: %d\n",
   VAR_0, VAR_6);

 FUNC_3(&VAR_4->irq_lock);
}
