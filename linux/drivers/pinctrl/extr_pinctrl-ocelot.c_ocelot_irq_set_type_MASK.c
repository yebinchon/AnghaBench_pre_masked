
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct irq_data*,int *,int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_1(struct irq_data *VAR_8, unsigned int VAR_9)
{
 VAR_9 &= VAR_3;

 if (!(VAR_9 & (VAR_1 | VAR_2)))
  return -VAR_0;

 if (VAR_9 & VAR_2)
  FUNC_0(VAR_8, &VAR_6,
       VAR_5, ((void*)0));
 if (VAR_9 & VAR_1)
  FUNC_0(VAR_8, &VAR_7,
       VAR_4, ((void*)0));

 return 0;
}
