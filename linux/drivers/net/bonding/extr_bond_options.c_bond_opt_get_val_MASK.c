
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct bond_option {struct bond_opt_value const* values; } ;
struct bond_opt_value {scalar_t__ value; scalar_t__ string; } ;


 scalar_t__ FUNC_0 (int) ;
 struct bond_option* FUNC_1 (unsigned int) ;

const struct bond_opt_value *FUNC_2(unsigned int VAR_0, u64 VAR_1)
{
 const struct bond_option *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_1(VAR_0);
 if (FUNC_0(!VAR_2))
  return ((void*)0);
 for (VAR_3 = 0; VAR_2->values && VAR_2->values[VAR_3].string; VAR_3++)
  if (VAR_2->values[VAR_3].value == VAR_1)
   return &VAR_2->values[VAR_3];

 return ((void*)0);
}
