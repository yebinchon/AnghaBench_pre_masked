
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pkg_cstate_info {scalar_t__ msr_index; } ;


 struct pkg_cstate_info* VAR_0 ;
 int FUNC_0 (scalar_t__,int *) ;

__attribute__((used)) static bool FUNC_1(void)
{
 u64 VAR_1;
 struct pkg_cstate_info *VAR_2 = VAR_0;


 while (VAR_2->msr_index) {
  if (!FUNC_0(VAR_2->msr_index, &VAR_1))
   return 1;
  VAR_2++;
 }

 return 0;
}
