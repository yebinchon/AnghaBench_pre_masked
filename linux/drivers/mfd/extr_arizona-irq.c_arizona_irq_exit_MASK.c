
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arizona {int irq; int virq; int aod_irq_chip; int irq_chip; scalar_t__ ctrlif_error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct arizona*,int ,struct arizona*) ;
 int FUNC_1 (int ,struct arizona*) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ,int ) ;
 int FUNC_5 (unsigned int,int ) ;

int FUNC_6(struct arizona *VAR_4)
{
 unsigned int VAR_5;

 if (VAR_4->ctrlif_error)
  FUNC_0(VAR_4, VAR_2, VAR_4);
 FUNC_0(VAR_4, VAR_1, VAR_4);

 VAR_5 = FUNC_4(VAR_4->virq, VAR_3);
 FUNC_5(VAR_5, VAR_4->irq_chip);
 FUNC_2(VAR_5);

 VAR_5 = FUNC_4(VAR_4->virq, VAR_0);
 FUNC_5(VAR_5, VAR_4->aod_irq_chip);
 FUNC_2(VAR_5);

 FUNC_3(VAR_4->virq);

 FUNC_1(VAR_4->irq, VAR_4);

 return 0;
}
