
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct irq_data {int irq; } ;
struct asic3 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct asic3*,int ) ;
 int FUNC_1 (struct asic3*,int ) ;
 int FUNC_2 (struct asic3*,int,int,int) ;
 struct asic3* FUNC_3 (struct irq_data*) ;

__attribute__((used)) static int FUNC_4(struct irq_data *VAR_1, unsigned int VAR_2)
{
 struct asic3 *VAR_3 = FUNC_3(VAR_1);
 u32 VAR_4, VAR_5;
 u16 VAR_6;

 VAR_4 = FUNC_0(VAR_3, VAR_1->irq);
 VAR_5 = FUNC_1(VAR_3, VAR_1->irq);
 VAR_6 = 1<<VAR_5;

 FUNC_2(VAR_3, VAR_4 + VAR_0, VAR_6, !VAR_2);

 return 0;
}
