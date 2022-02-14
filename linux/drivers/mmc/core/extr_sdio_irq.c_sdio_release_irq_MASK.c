
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdio_func {int num; int card; int * irq_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int ,int ,unsigned char,unsigned char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sdio_func*) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct sdio_func *VAR_2)
{
 int VAR_3;
 unsigned char VAR_4;

 if (!VAR_2)
  return -VAR_0;

 FUNC_1("SDIO: Disabling IRQ for %s...\n", FUNC_3(VAR_2));

 if (VAR_2->irq_handler) {
  VAR_2->irq_handler = ((void*)0);
  FUNC_2(VAR_2->card);
  FUNC_4(VAR_2->card);
 }

 VAR_3 = FUNC_0(VAR_2->card, 0, 0, VAR_1, 0, &VAR_4);
 if (VAR_3)
  return VAR_3;

 VAR_4 &= ~(1 << VAR_2->num);


 if (!(VAR_4 & 0xFE))
  VAR_4 = 0;

 VAR_3 = FUNC_0(VAR_2->card, 1, 0, VAR_1, VAR_4, ((void*)0));
 if (VAR_3)
  return VAR_3;

 return 0;
}
