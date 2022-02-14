
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int num; int card; int * irq_handler; } ;
typedef int sdio_irq_handler_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int ,int ,unsigned char,unsigned char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sdio_func*) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct sdio_func *VAR_3, sdio_irq_handler_t *VAR_4)
{
 int VAR_5;
 unsigned char VAR_6;

 if (!VAR_3)
  return -VAR_1;

 FUNC_1("SDIO: Enabling IRQ for %s...\n", FUNC_3(VAR_3));

 if (VAR_3->irq_handler) {
  FUNC_1("SDIO: IRQ for %s already in use.\n", FUNC_3(VAR_3));
  return -VAR_0;
 }

 VAR_5 = FUNC_0(VAR_3->card, 0, 0, VAR_2, 0, &VAR_6);
 if (VAR_5)
  return VAR_5;

 VAR_6 |= 1 << VAR_3->num;

 VAR_6 |= 1;

 VAR_5 = FUNC_0(VAR_3->card, 1, 0, VAR_2, VAR_6, ((void*)0));
 if (VAR_5)
  return VAR_5;

 VAR_3->irq_handler = VAR_4;
 VAR_5 = FUNC_2(VAR_3->card);
 if (VAR_5)
  VAR_3->irq_handler = ((void*)0);
 FUNC_4(VAR_3->card);

 return VAR_5;
}
