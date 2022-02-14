
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdns3 {scalar_t__ dr_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct cdns3*) ;

int FUNC_1(struct cdns3 *VAR_2)
{
 if (VAR_2->dr_mode == VAR_1)
  return 1;
 else if (VAR_2->dr_mode == VAR_0)
  if (FUNC_0(VAR_2))
   return 1;

 return 0;
}
