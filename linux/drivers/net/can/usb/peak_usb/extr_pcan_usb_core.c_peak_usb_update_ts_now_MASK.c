
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct peak_time_ref {int ts_dev_2; int ts_dev_1; int ts_total; TYPE_1__* adapter; int tv_host; } ;
struct TYPE_2__ {int ts_used_bits; } ;


 scalar_t__ FUNC_0 (int ) ;

void FUNC_1(struct peak_time_ref *VAR_0, u32 VAR_1)
{
 VAR_0->ts_dev_2 = VAR_1;


 if (FUNC_0(VAR_0->tv_host) > 0) {
  u32 VAR_2 = VAR_0->ts_dev_2 - VAR_0->ts_dev_1;

  if (VAR_0->ts_dev_2 < VAR_0->ts_dev_1)
   VAR_2 &= (1 << VAR_0->adapter->ts_used_bits) - 1;

  VAR_0->ts_total += VAR_2;
 }
}
