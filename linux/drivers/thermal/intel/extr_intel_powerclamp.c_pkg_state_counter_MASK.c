
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct pkg_cstate_info {int skip; scalar_t__ msr_index; } ;


 struct pkg_cstate_info* VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__*) ;

__attribute__((used)) static u64 FUNC_1(void)
{
 u64 VAR_1;
 u64 VAR_2 = 0;
 struct pkg_cstate_info *VAR_3 = VAR_0;

 while (VAR_3->msr_index) {
  if (!VAR_3->skip) {
   if (!FUNC_0(VAR_3->msr_index, &VAR_1))
    VAR_2 += VAR_1;
   else
    VAR_3->skip = 1;
  }
  VAR_3++;
 }

 return VAR_2;
}
