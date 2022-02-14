
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time64_t ;
struct timespec64 {int tv_sec; } ;


 int FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct timespec64 *VAR_0)
{
 time64_t VAR_1 = FUNC_0();







 if ((VAR_1 ^ VAR_0->tv_sec) & ~7)
  VAR_0->tv_sec = VAR_1;
}
