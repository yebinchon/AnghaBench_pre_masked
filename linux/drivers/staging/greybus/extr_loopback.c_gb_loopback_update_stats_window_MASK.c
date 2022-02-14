
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct gb_loopback_stats {scalar_t__ min; scalar_t__ max; int count; int sum; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct gb_loopback_stats *VAR_0,
         u64 VAR_1, u32 VAR_2)
{
 VAR_0->sum += VAR_1;
 VAR_0->count += VAR_2;

 FUNC_0(VAR_1, VAR_2);
 if (VAR_0->min > VAR_1)
  VAR_0->min = VAR_1;
 if (VAR_0->max < VAR_1)
  VAR_0->max = VAR_1;
}
