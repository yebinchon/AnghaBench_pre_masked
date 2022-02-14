
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct kernel_cpustat {unsigned long long* cpustat; } ;


 size_t VAR_0 ;
 unsigned long long VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned long long FUNC_1 (int,int *) ;

__attribute__((used)) static u64 FUNC_2(struct kernel_cpustat *VAR_2, int VAR_3)
{
 u64 VAR_4, VAR_5 = -1ULL;

 if (FUNC_0(VAR_3))
  VAR_5 = FUNC_1(VAR_3, ((void*)0));

 if (VAR_5 == -1ULL)

  VAR_4 = VAR_2->cpustat[VAR_0];
 else
  VAR_4 = VAR_5 * VAR_1;

 return VAR_4;
}
