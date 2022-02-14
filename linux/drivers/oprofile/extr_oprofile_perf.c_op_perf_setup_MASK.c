
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct perf_event_attr {int size; int pinned; int sample_period; int config; int type; } ;
struct TYPE_2__ {int count; int event; struct perf_event_attr attr; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (struct perf_event_attr*,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(void)
{
 int VAR_3;
 u32 VAR_4 = sizeof(struct perf_event_attr);
 struct perf_event_attr *VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3) {
  VAR_5 = &VAR_1[VAR_3].attr;
  FUNC_0(VAR_5, 0, VAR_4);
  VAR_5->type = VAR_0;
  VAR_5->size = VAR_4;
  VAR_5->config = VAR_1[VAR_3].event;
  VAR_5->sample_period = VAR_1[VAR_3].count;
  VAR_5->pinned = 1;
 }
}
