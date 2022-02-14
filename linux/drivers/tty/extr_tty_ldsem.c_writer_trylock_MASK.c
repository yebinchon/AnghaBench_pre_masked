
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ld_semaphore {int count; } ;


 long VAR_0 ;
 long VAR_1 ;
 long FUNC_0 (long,int *) ;
 scalar_t__ FUNC_1 (int *,long*,long) ;

__attribute__((used)) static inline int FUNC_2(struct ld_semaphore *VAR_2)
{




 long VAR_3 = FUNC_0(VAR_0, &VAR_2->count);
 do {
  if ((VAR_3 & VAR_1) == VAR_0)
   return 1;
  if (FUNC_1(&VAR_2->count, &VAR_3, VAR_3 - VAR_0))
   return 0;
 } while (1);
}
