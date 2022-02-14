
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {scalar_t__ exclude_kernel; } ;
struct perf_event {int dummy; } ;
struct arch_hw_breakpoint {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct arch_hw_breakpoint*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct perf_event*,struct perf_event_attr const*,struct arch_hw_breakpoint*) ;

__attribute__((used)) static int FUNC_3(struct perf_event *VAR_3,
          const struct perf_event_attr *VAR_4,
          struct arch_hw_breakpoint *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_2(VAR_3, VAR_4, VAR_5);
 if (VAR_6)
  return VAR_6;

 if (FUNC_0(VAR_5)) {
  if (VAR_4->exclude_kernel)
   return -VAR_1;




  if (!FUNC_1(VAR_0))
   return -VAR_2;
 }

 return 0;
}
