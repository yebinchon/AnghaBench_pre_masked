
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct peak_time_ref {scalar_t__ ts_dev_2; int tv_host_0; TYPE_1__* adapter; scalar_t__ ts_total; int tv_host; } ;
typedef int ktime_t ;
struct TYPE_2__ {int ts_used_bits; int us_per_ts_scale; int us_per_ts_shift; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;

void FUNC_3(struct peak_time_ref *VAR_0, u32 VAR_1, ktime_t *VAR_2)
{

 if (FUNC_2(VAR_0->tv_host)) {
  u64 VAR_3;

  VAR_3 = VAR_1 - VAR_0->ts_dev_2;
  if (VAR_1 < VAR_0->ts_dev_2)
   VAR_3 &= (1 << VAR_0->adapter->ts_used_bits) - 1;

  VAR_3 += VAR_0->ts_total;

  VAR_3 *= VAR_0->adapter->us_per_ts_scale;
  VAR_3 >>= VAR_0->adapter->us_per_ts_shift;

  *VAR_2 = FUNC_0(VAR_0->tv_host_0, VAR_3);
 } else {
  *VAR_2 = FUNC_1();
 }
}
