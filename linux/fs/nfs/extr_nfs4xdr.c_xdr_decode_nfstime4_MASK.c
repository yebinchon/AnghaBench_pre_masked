
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct timespec {int tv_nsec; scalar_t__ tv_sec; } ;
typedef scalar_t__ __u64 ;
typedef int __be32 ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int *,scalar_t__*) ;

__attribute__((used)) static __be32 *
FUNC_2(__be32 *VAR_0, struct timespec *VAR_1)
{
 __u64 VAR_2;

 VAR_0 = FUNC_1(VAR_0, &VAR_2);
 VAR_1-> tv_sec = (time_t)VAR_2;
 VAR_1->tv_nsec = FUNC_0(VAR_0++);
 return VAR_0;
}
