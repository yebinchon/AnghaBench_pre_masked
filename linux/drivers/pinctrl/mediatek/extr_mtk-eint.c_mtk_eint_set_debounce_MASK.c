
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_eint {scalar_t__ base; TYPE_1__* regs; int domain; } ;
struct irq_data {int dummy; } ;
struct TYPE_2__ {unsigned long dbnc_set; unsigned long dbnc_clr; } ;


 unsigned int FUNC_0 (unsigned int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (int ,unsigned long) ;
 struct irq_data* FUNC_2 (int) ;
 int FUNC_3 (struct mtk_eint*,unsigned long) ;
 int FUNC_4 (struct mtk_eint*,unsigned long) ;
 int FUNC_5 (struct irq_data*) ;
 int FUNC_6 (struct irq_data*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (unsigned int,scalar_t__) ;

int FUNC_9(struct mtk_eint *VAR_4, unsigned long VAR_5,
     unsigned int VAR_6)
{
 int VAR_7, VAR_8;
 unsigned int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15,
       VAR_16;
 static const unsigned int VAR_17[] = {500, 1000, 16000, 32000,
           64000, 128000, 256000};
 struct irq_data *VAR_18;

 VAR_7 = FUNC_1(VAR_4->domain, VAR_5);
 VAR_8 = (VAR_5 % 4) * 8;
 VAR_18 = FUNC_2(VAR_7);

 VAR_9 = (VAR_5 / 4) * 4 + VAR_4->regs->dbnc_set;
 VAR_12 = (VAR_5 / 4) * 4 + VAR_4->regs->dbnc_clr;

 if (!FUNC_3(VAR_4, VAR_5))
  return -VAR_0;

 VAR_16 = FUNC_0(VAR_17);
 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_17); VAR_14++) {
  if (VAR_6 <= VAR_17[VAR_14]) {
   VAR_16 = VAR_14;
   break;
  }
 }

 if (!FUNC_4(VAR_4, VAR_5)) {
  FUNC_5(VAR_18);
  VAR_15 = 1;
 } else {
  VAR_15 = 0;
 }

 VAR_11 = 0xff << VAR_8;
 FUNC_8(VAR_11, VAR_4->base + VAR_12);

 VAR_10 = ((VAR_16 << VAR_2) | VAR_3) <<
  VAR_8;
 VAR_13 = VAR_1 << VAR_8;
 FUNC_8(VAR_13 | VAR_10, VAR_4->base + VAR_9);





 FUNC_7(1);
 if (VAR_15 == 1)
  FUNC_6(VAR_18);

 return 0;
}
