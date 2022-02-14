
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {struct arizona* host_data; } ;
struct arizona {int dummy; } ;
typedef int irq_hw_number_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int,int *,int ) ;
 int FUNC_1 (unsigned int,struct arizona*) ;
 int FUNC_2 (unsigned int,int *,int *) ;
 int FUNC_3 (unsigned int,int) ;
 int FUNC_4 (unsigned int) ;

__attribute__((used)) static int FUNC_5(struct irq_domain *VAR_4, unsigned int VAR_5,
         irq_hw_number_t VAR_6)
{
 struct arizona *VAR_7 = VAR_4->host_data;

 FUNC_1(VAR_5, VAR_7);
 FUNC_2(VAR_5, &VAR_1,
  &VAR_2);
 FUNC_0(VAR_5, &VAR_0, VAR_3);
 FUNC_3(VAR_5, 1);
 FUNC_4(VAR_5);

 return 0;
}
