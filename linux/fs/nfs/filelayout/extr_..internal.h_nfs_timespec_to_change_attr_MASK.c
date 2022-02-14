
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;



__attribute__((used)) static inline
u64 FUNC_0(const struct timespec *VAR_0)
{
 return ((u64)VAR_0->tv_sec << 30) + VAR_0->tv_nsec;
}
