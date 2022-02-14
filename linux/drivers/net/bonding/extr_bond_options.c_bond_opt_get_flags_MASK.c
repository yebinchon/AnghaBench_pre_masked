
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bond_option {struct bond_opt_value const* values; } ;
struct bond_opt_value {int flags; scalar_t__ string; } ;



__attribute__((used)) static const struct bond_opt_value *FUNC_0(const struct bond_option *VAR_0,
             u32 VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_0->values && VAR_0->values[VAR_2].string; VAR_2++)
  if (VAR_0->values[VAR_2].flags & VAR_1)
   return &VAR_0->values[VAR_2];

 return ((void*)0);
}
