
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
typedef scalar_t__ s64 ;
typedef int raw_spinlock_t ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(raw_spinlock_t *VAR_0, u64 *VAR_1, u64 *VAR_2,
     u32 *VAR_3)
{
 s64 VAR_4 = FUNC_0() - *VAR_1;
 unsigned long VAR_5;

 if (VAR_4 > 0) {
  FUNC_1(VAR_0, VAR_5);
  *VAR_2 += VAR_4;
  (*VAR_3)++;
  FUNC_2(VAR_0, VAR_5);
 }
}
