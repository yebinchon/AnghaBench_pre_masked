
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct timespec64 {int tv_nsec; scalar_t__ tv_sec; } ;
typedef int s64 ;


 struct timespec64 FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(s64 VAR_0, u32 *VAR_1, u32 *VAR_2)
{
 struct timespec64 VAR_3 = FUNC_0(VAR_0);

 *VAR_1 = (u32)VAR_3.tv_sec;
 *VAR_2 = VAR_3.tv_nsec * 4;
}
