
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_pwrseq_simple {struct gpio_descs* reset_gpios; } ;
struct gpio_descs {int ndescs; int info; int desc; } ;


 int VAR_0 ;
 int FUNC_0 (struct gpio_descs*) ;
 unsigned long* FUNC_1 (int,int ) ;
 int FUNC_2 (unsigned long*,int) ;
 int FUNC_3 (unsigned long*,int) ;
 int FUNC_4 (int,int ,int ,unsigned long*) ;
 int FUNC_5 (unsigned long*) ;

__attribute__((used)) static void FUNC_6(struct mmc_pwrseq_simple *VAR_1,
           int VAR_2)
{
 struct gpio_descs *VAR_3 = VAR_1->reset_gpios;

 if (!FUNC_0(VAR_3)) {
  unsigned long *VAR_4;
  int VAR_5 = VAR_3->ndescs;

  VAR_4 = FUNC_1(VAR_5, VAR_0);
  if (!VAR_4)
   return;

  if (VAR_2)
   FUNC_2(VAR_4, VAR_5);
  else
   FUNC_3(VAR_4, VAR_5);

  FUNC_4(VAR_5, VAR_3->desc,
            VAR_3->info, VAR_4);

  FUNC_5(VAR_4);
 }
}
