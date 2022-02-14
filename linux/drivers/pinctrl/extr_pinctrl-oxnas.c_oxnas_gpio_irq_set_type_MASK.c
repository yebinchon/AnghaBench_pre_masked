
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct irq_data*,int ) ;

__attribute__((used)) static int FUNC_1(struct irq_data *VAR_4, unsigned int VAR_5)
{
 if ((VAR_5 & (VAR_2|VAR_1)) == 0)
  return -VAR_0;

 FUNC_0(VAR_4, VAR_3);

 return 0;
}
