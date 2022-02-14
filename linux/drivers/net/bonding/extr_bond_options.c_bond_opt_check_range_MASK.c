
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct bond_option {int dummy; } ;
struct bond_opt_value {scalar_t__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct bond_opt_value* FUNC_0 (struct bond_option const*,int ) ;

__attribute__((used)) static bool FUNC_1(const struct bond_option *VAR_2, u64 VAR_3)
{
 const struct bond_opt_value *VAR_4, *VAR_5;

 VAR_4 = FUNC_0(VAR_2, VAR_1);
 VAR_5 = FUNC_0(VAR_2, VAR_0);
 if (!VAR_5 || (VAR_4 && VAR_3 < VAR_4->value) || VAR_3 > VAR_5->value)
  return 0;

 return 1;
}
