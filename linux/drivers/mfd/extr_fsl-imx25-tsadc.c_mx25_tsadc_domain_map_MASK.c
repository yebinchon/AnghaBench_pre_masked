
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mx25_tsadc {int dummy; } ;
struct irq_domain {struct mx25_tsadc* host_data; } ;
typedef int irq_hw_number_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int,int ,int ) ;
 int FUNC_1 (unsigned int,int *,int ) ;
 int FUNC_2 (unsigned int,struct mx25_tsadc*) ;

__attribute__((used)) static int FUNC_3(struct irq_domain *VAR_4, unsigned int VAR_5,
     irq_hw_number_t VAR_6)
{
 struct mx25_tsadc *VAR_7 = VAR_4->host_data;

 FUNC_2(VAR_5, VAR_7);
 FUNC_1(VAR_5, &VAR_2,
     VAR_3);
 FUNC_0(VAR_5, VAR_1, VAR_0);

 return 0;
}
