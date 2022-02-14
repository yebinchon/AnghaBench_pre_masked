
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct hw_perf_event {scalar_t__ idx; int prev_count; } ;
struct perf_event {int count; struct hw_perf_event hw; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__,int *) ;
 scalar_t__ FUNC_2 (int *,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct perf_event *VAR_1)
{
 struct hw_perf_event *VAR_2 = &VAR_1->hw;
 u64 VAR_3, VAR_4, VAR_5;
 u32 VAR_6 = VAR_2->idx;

 do {
  VAR_4 = FUNC_3(&VAR_2->prev_count);
  VAR_5 = FUNC_0(VAR_6);
 } while (FUNC_2(&VAR_2->prev_count, VAR_4, VAR_5) != VAR_4);





 VAR_3 = VAR_5 - VAR_4;
 if (VAR_6 != VAR_0)
  VAR_3 &= 0xffffffff;

 FUNC_1(VAR_3, &VAR_1->count);
}
