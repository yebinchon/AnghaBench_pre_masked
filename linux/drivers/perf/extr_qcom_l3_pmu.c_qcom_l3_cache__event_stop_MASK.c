
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {int state; } ;
struct perf_event {struct hw_perf_event hw; } ;
struct l3cache_event_ops {int (* update ) (struct perf_event*) ;int (* stop ) (struct perf_event*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct l3cache_event_ops* FUNC_0 (struct perf_event*) ;
 int FUNC_1 (struct perf_event*,int) ;
 int FUNC_2 (struct perf_event*) ;

__attribute__((used)) static void FUNC_3(struct perf_event *VAR_3, int VAR_4)
{
 struct hw_perf_event *VAR_5 = &VAR_3->hw;
 const struct l3cache_event_ops *VAR_6 = FUNC_0(VAR_3);

 if (VAR_5->state & VAR_1)
  return;

 VAR_6->stop(VAR_3, VAR_4);
 if (VAR_4 & VAR_0)
  VAR_6->update(VAR_3);
 VAR_5->state |= VAR_1 | VAR_2;
}
