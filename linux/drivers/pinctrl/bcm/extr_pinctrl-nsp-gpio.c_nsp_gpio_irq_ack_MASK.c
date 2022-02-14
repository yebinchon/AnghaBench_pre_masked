
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nsp_gpio {int dummy; } ;
struct irq_data {unsigned int hwirq; int irq; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct nsp_gpio* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct nsp_gpio*,int ,int ,unsigned int,int) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_4)
{
 struct nsp_gpio *VAR_5 = FUNC_1(VAR_4);
 unsigned VAR_6 = VAR_4->hwirq;
 u32 VAR_7 = FUNC_0(VAR_6);
 u32 VAR_8;

 VAR_8 = FUNC_2(VAR_4->irq);
 if (VAR_8 & (VAR_0 | VAR_1))
  FUNC_3(VAR_5, VAR_3, VAR_2, VAR_6, VAR_7);
}
