
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irb {int scsw; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct irb *VAR_2)
{
 if (FUNC_1(&VAR_2->scsw) != 0)
  return 1;
 if (FUNC_2(&VAR_2->scsw) & ~(VAR_0 | VAR_1))
  return 1;
 if (FUNC_0(&VAR_2->scsw) != 0)
  return 1;
 return 0;
}
