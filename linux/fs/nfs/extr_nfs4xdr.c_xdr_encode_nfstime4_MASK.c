
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;
typedef int __s64 ;
typedef int __be32 ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,int ) ;

__attribute__((used)) static __be32 *
FUNC_2(__be32 *VAR_0, const struct timespec *VAR_1)
{
 VAR_0 = FUNC_1(VAR_0, (__s64)VAR_1->tv_sec);
 *VAR_0++ = FUNC_0(VAR_1->tv_nsec);
 return VAR_0;
}
