
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct peak_time_ref {int ts_dev_2; int ts_dev_1; int tick_count; void* tv_host; scalar_t__ ts_total; void* tv_host_0; } ;
typedef void* ktime_t ;


 unsigned long long VAR_0 ;
 void* FUNC_0 () ;
 void* FUNC_1 (int ,int ) ;
 void* FUNC_2 (void*,void*) ;
 unsigned long long FUNC_3 (void*) ;
 int FUNC_4 (struct peak_time_ref*,int ) ;

void FUNC_5(struct peak_time_ref *VAR_1, u32 VAR_2)
{
 if (FUNC_3(VAR_1->tv_host_0) == 0) {

  VAR_1->tv_host_0 = FUNC_0();
  VAR_1->tv_host = FUNC_1(0, 0);
 } else {





  if (FUNC_3(VAR_1->tv_host)) {
   ktime_t VAR_3 = FUNC_2(VAR_1->tv_host,
        VAR_1->tv_host_0);
   if (FUNC_3(VAR_3) > (4200ull * VAR_0)) {
    VAR_1->tv_host_0 = VAR_1->tv_host;
    VAR_1->ts_total = 0;
   }
  }

  VAR_1->tv_host = FUNC_0();
  VAR_1->tick_count++;
 }

 VAR_1->ts_dev_1 = VAR_1->ts_dev_2;
 FUNC_4(VAR_1, VAR_2);
}
