
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si476x_core {scalar_t__ diversity_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct si476x_core*) ;

bool FUNC_1(struct si476x_core *VAR_2)
{
 return FUNC_0(VAR_2) &&
  (VAR_2->diversity_mode == VAR_0 ||
   VAR_2->diversity_mode == VAR_1);
}
