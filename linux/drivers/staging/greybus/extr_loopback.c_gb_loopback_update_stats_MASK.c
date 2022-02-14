
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct gb_loopback_stats {scalar_t__ min; scalar_t__ max; int count; int sum; } ;



__attribute__((used)) static void FUNC_0(struct gb_loopback_stats *VAR_0, u32 VAR_1)
{
 if (VAR_0->min > VAR_1)
  VAR_0->min = VAR_1;
 if (VAR_0->max < VAR_1)
  VAR_0->max = VAR_1;
 VAR_0->sum += VAR_1;
 VAR_0->count++;
}
