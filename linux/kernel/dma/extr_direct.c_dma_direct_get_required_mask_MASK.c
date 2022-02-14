
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long long) ;
 int VAR_1 ;
 unsigned long long FUNC_1 (struct device*,int) ;

u64 FUNC_2(struct device *VAR_2)
{
 u64 VAR_3 = FUNC_1(VAR_2, (VAR_1 - 1) << VAR_0);

 return (1ULL << (FUNC_0(VAR_3) - 1)) * 2 - 1;
}
