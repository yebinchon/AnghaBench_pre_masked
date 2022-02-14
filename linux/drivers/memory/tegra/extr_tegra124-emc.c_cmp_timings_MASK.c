
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emc_timing {scalar_t__ rate; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct emc_timing *VAR_2 = VAR_0;
 const struct emc_timing *VAR_3 = VAR_1;

 if (VAR_2->rate < VAR_3->rate)
  return -1;
 else if (VAR_2->rate == VAR_3->rate)
  return 0;
 else
  return 1;
}
