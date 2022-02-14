
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nsp_gpio {int dummy; } ;
struct irq_data {unsigned int hwirq; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct nsp_gpio* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nsp_gpio*,int ,int ,unsigned int,int) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_5, bool VAR_6)
{
 struct nsp_gpio *VAR_7 = FUNC_0(VAR_5);
 unsigned VAR_8 = VAR_5->hwirq;
 u32 VAR_9;

 VAR_9 = FUNC_1(VAR_5->irq);
 if (VAR_9 & (VAR_0 | VAR_1))
  FUNC_2(VAR_7, VAR_4, VAR_2, VAR_8, VAR_6);
 else
  FUNC_2(VAR_7, VAR_4, VAR_3, VAR_8, VAR_6);
}
