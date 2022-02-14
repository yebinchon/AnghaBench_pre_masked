
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;
typedef int __be32 ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static __be32 *
FUNC_1(__be32 *VAR_0, struct timespec *VAR_1)
{
 *VAR_0++ = FUNC_0((u32) VAR_1->tv_sec); *VAR_0++ = FUNC_0(VAR_1->tv_nsec);
 return VAR_0;
}
