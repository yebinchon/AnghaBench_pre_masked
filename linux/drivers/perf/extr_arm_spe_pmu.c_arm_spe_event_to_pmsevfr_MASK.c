
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct perf_event_attr {int dummy; } ;
struct perf_event {struct perf_event_attr attr; } ;


 int FUNC_0 (struct perf_event_attr*,int ) ;
 int VAR_0 ;

__attribute__((used)) static u64 FUNC_1(struct perf_event *VAR_1)
{
 struct perf_event_attr *VAR_2 = &VAR_1->attr;
 return FUNC_0(VAR_2, VAR_0);
}
