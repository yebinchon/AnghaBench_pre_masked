
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct perf_event {scalar_t__ shadow_ctx_time; } ;


 int FUNC_0 (struct perf_event*,scalar_t__,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct perf_event *VAR_0,
    u64 *VAR_1,
    u64 *VAR_2,
    u64 *VAR_3)
{
 u64 VAR_4;

 *VAR_1 = FUNC_1();
 VAR_4 = VAR_0->shadow_ctx_time + *VAR_1;
 FUNC_0(VAR_0, VAR_4, VAR_2, VAR_3);
}
