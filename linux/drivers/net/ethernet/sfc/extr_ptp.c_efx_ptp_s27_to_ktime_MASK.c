
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
typedef scalar_t__ u32 ;
typedef int ktime_t ;


 unsigned long long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static inline ktime_t FUNC_1(u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4 = (u32)(((u64)VAR_3 * VAR_0 +
   (1ULL << (VAR_1 - 1))) >> VAR_1);
 return FUNC_0(VAR_2, VAR_4);
}
