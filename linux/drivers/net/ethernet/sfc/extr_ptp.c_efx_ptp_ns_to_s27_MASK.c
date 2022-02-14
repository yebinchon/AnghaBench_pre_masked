
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
typedef scalar_t__ u32 ;
struct timespec64 {scalar_t__ tv_nsec; int tv_sec; } ;
typedef int s64 ;


 unsigned long long VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct timespec64 FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(s64 VAR_3, u32 *VAR_4, u32 *VAR_5)
{
 struct timespec64 VAR_6 = FUNC_0(VAR_3);
 u32 VAR_7 = (u32)VAR_6.tv_sec;
 u32 VAR_8 = (u32)(((u64)VAR_6.tv_nsec * VAR_0 +
    (1ULL << (VAR_1 - 1))) >> VAR_1);




 if (VAR_8 >= VAR_2) {
  VAR_8 -= VAR_2;
  VAR_7++;
 }

 *VAR_4 = VAR_7;
 *VAR_5 = VAR_8;
}
