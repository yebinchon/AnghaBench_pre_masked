
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {int idx; int state; } ;
struct perf_event {struct hw_perf_event hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct perf_event*) ;

__attribute__((used)) static void FUNC_3(struct perf_event *VAR_3, int VAR_4)
{
 struct hw_perf_event *VAR_5 = &VAR_3->hw;
 int VAR_6 = VAR_5->idx;

 if (VAR_5->state & VAR_1)
  return;

 FUNC_1(VAR_6);
 FUNC_0(VAR_6);

 if (VAR_4 & VAR_0)
  FUNC_2(VAR_3);
 VAR_5->state |= VAR_1 | VAR_2;
}
