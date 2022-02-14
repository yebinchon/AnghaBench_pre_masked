
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int virq; } ;
struct irq_info {TYPE_1__ u; } ;


 int VAR_0 ;
 struct irq_info* FUNC_0 (unsigned int) ;
 unsigned int* FUNC_1 (int ,unsigned int) ;
 int VAR_1 ;
 int FUNC_2 (struct irq_info*,unsigned int,int ,unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(unsigned VAR_2,
       unsigned VAR_3,
       unsigned VAR_4,
       unsigned VAR_5)
{
 struct irq_info *VAR_6 = FUNC_0(VAR_3);

 VAR_6->u.virq = VAR_5;

 FUNC_1(VAR_1, VAR_2)[VAR_5] = VAR_3;

 return FUNC_2(VAR_6, VAR_3, VAR_0, VAR_4, 0);
}
