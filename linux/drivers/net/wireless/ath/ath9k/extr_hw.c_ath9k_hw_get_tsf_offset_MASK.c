
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct timespec64 {unsigned long long tv_sec; int tv_nsec; } ;
typedef unsigned long long s64 ;


 int FUNC_0 (struct timespec64*) ;

u32 FUNC_1(struct timespec64 *VAR_0, struct timespec64 *VAR_1)
{
 struct timespec64 VAR_2;
 s64 VAR_3;

 if (!VAR_1) {
  FUNC_0(&VAR_2);
  VAR_1 = &VAR_2;
 }

 VAR_3 = VAR_1->tv_sec * 1000000ULL + VAR_1->tv_nsec / 1000;
 VAR_3 -= VAR_0->tv_sec * 1000000ULL + VAR_0->tv_nsec / 1000;

 return (u32) VAR_3;
}
