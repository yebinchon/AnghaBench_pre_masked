
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {int host_data; } ;
typedef int irq_hw_number_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,int *,int ) ;
 int FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(struct irq_domain *VAR_2, unsigned int VAR_3,
        irq_hw_number_t VAR_4)
{
 FUNC_0(VAR_3, &VAR_0, VAR_1);
 FUNC_1(VAR_3, VAR_2->host_data);

 return 0;
}
