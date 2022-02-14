
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_key {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct cpu_key*) ;

__attribute__((used)) static char *FUNC_1(struct cpu_key *VAR_4)
{
 if (FUNC_0(VAR_4) == VAR_3)
  return "SD";
 if (FUNC_0(VAR_4) == VAR_1)
  return "DIR";
 if (FUNC_0(VAR_4) == VAR_0)
  return "DIRECT";
 if (FUNC_0(VAR_4) == VAR_2)
  return "IND";
 return "UNKNOWN";
}
