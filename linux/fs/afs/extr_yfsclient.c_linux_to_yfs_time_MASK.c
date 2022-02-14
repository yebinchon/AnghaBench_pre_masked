
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct timespec64 {int tv_nsec; scalar_t__ tv_sec; } ;
typedef int s64 ;



__attribute__((used)) static s64 FUNC_0(const struct timespec64 *VAR_0)
{

 return (u64)VAR_0->tv_sec * 10000000 + VAR_0->tv_nsec/100;
}
