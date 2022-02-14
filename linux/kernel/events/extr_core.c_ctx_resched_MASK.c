
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event_context {int dummy; } ;
struct TYPE_2__ {int pmu; } ;
struct perf_cpu_context {TYPE_1__ ctx; } ;
typedef enum event_type_t { ____Placeholder_event_type_t } event_type_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct perf_cpu_context*,int) ;
 int VAR_4 ;
 int FUNC_1 (struct perf_cpu_context*,struct perf_event_context*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct perf_cpu_context*,struct perf_event_context*,int) ;

__attribute__((used)) static void FUNC_5(struct perf_cpu_context *VAR_5,
   struct perf_event_context *VAR_6,
   enum event_type_t VAR_7)
{
 enum event_type_t VAR_8;
 bool VAR_9 = !!(VAR_7 & VAR_1);





 if (VAR_7 & VAR_3)
  VAR_7 |= VAR_2;

 VAR_8 = VAR_7 & VAR_0;

 FUNC_2(VAR_5->ctx.pmu);
 if (VAR_6)
  FUNC_4(VAR_5, VAR_6, VAR_7);
 if (VAR_9)
  FUNC_0(VAR_5, VAR_8);
 else if (VAR_8 & VAR_3)
  FUNC_0(VAR_5, VAR_2);

 FUNC_1(VAR_5, VAR_6, VAR_4);
 FUNC_3(VAR_5->ctx.pmu);
}
