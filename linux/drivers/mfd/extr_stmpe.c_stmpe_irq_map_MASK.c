
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stmpe {TYPE_1__* variant; } ;
struct irq_domain {struct stmpe* host_data; } ;
struct irq_chip {int dummy; } ;
typedef int irq_hw_number_t ;
struct TYPE_2__ {scalar_t__ id_val; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,struct irq_chip*,int ) ;
 int FUNC_1 (unsigned int,struct stmpe*) ;
 int FUNC_2 (unsigned int,int) ;
 int FUNC_3 (unsigned int) ;
 struct irq_chip VAR_2 ;

__attribute__((used)) static int FUNC_4(struct irq_domain *VAR_3, unsigned int VAR_4,
                                irq_hw_number_t VAR_5)
{
 struct stmpe *VAR_6 = VAR_3->host_data;
 struct irq_chip *VAR_7 = ((void*)0);

 if (VAR_6->variant->id_val != VAR_0)
  VAR_7 = &VAR_2;

 FUNC_1(VAR_4, VAR_6);
 FUNC_0(VAR_4, VAR_7, VAR_1);
 FUNC_2(VAR_4, 1);
 FUNC_3(VAR_4);

 return 0;
}
