
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpu_key {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (struct cpu_key*) ;
 scalar_t__ FUNC_3 (struct cpu_key*) ;
 char* VAR_1 ;
 int FUNC_4 (char*,char*,unsigned long long,...) ;

__attribute__((used)) static char *FUNC_5(struct cpu_key *VAR_2)
{
 if (FUNC_3(VAR_2) == VAR_0)
  FUNC_4(VAR_1, "%llu(%llu)",
   (unsigned long long)
   FUNC_1(FUNC_2(VAR_2)),
   (unsigned long long)
   FUNC_0(FUNC_2(VAR_2)));
 else
  FUNC_4(VAR_1, "0x%Lx",
   (unsigned long long)FUNC_2(VAR_2));
 return VAR_1;
}
