
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;
struct htcpld_chip {unsigned int flow_type; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 struct htcpld_chip* FUNC_0 (struct irq_data*) ;

__attribute__((used)) static int FUNC_1(struct irq_data *VAR_4, unsigned int VAR_5)
{
 struct htcpld_chip *VAR_6 = FUNC_0(VAR_4);

 if (VAR_5 & ~VAR_3)
  return -VAR_0;


 if (VAR_5 & (VAR_2|VAR_1))
  return -VAR_0;

 VAR_6->flow_type = VAR_5;
 return 0;
}
