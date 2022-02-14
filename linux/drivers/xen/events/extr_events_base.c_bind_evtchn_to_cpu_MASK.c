
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_info {unsigned int cpu; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 struct irq_info* FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct irq_info*,unsigned int) ;

__attribute__((used)) static void FUNC_7(unsigned int VAR_0, unsigned int VAR_1)
{
 int VAR_2 = FUNC_3(VAR_0);
 struct irq_info *VAR_3 = FUNC_4(VAR_2);

 FUNC_0(VAR_2 == -1);



 FUNC_6(VAR_3, VAR_1);

 VAR_3->cpu = VAR_1;
}
