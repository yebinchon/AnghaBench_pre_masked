
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain {struct ab8500* host_data; } ;
struct ab8500 {int dummy; } ;
typedef int irq_hw_number_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int,int *,int ) ;
 int FUNC_1 (unsigned int,struct ab8500*) ;
 int FUNC_2 (unsigned int,int) ;
 int FUNC_3 (unsigned int) ;

__attribute__((used)) static int FUNC_4(struct irq_domain *VAR_3, unsigned int VAR_4,
    irq_hw_number_t VAR_5)
{
 struct ab8500 *VAR_6 = VAR_3->host_data;

 if (!VAR_6)
  return -VAR_0;

 FUNC_1(VAR_4, VAR_6);
 FUNC_0(VAR_4, &VAR_1,
    VAR_2);
 FUNC_2(VAR_4, 1);
 FUNC_3(VAR_4);

 return 0;
}
