
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct idpair {scalar_t__ old; scalar_t__ cur; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static bool FUNC_1(u32 VAR_1, u32 VAR_2, struct idpair *VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (!VAR_3[VAR_4].old) {

   VAR_3[VAR_4].old = VAR_1;
   VAR_3[VAR_4].cur = VAR_2;
   return 1;
  }
  if (VAR_3[VAR_4].old == VAR_1)
   return VAR_3[VAR_4].cur == VAR_2;
 }

 FUNC_0(1);
 return 0;
}
