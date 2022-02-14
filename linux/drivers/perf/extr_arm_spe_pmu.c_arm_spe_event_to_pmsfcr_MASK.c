
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct perf_event_attr {int dummy; } ;
struct perf_event {struct perf_event_attr attr; } ;


 int FUNC_0 (struct perf_event_attr*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static u64 FUNC_2(struct perf_event *VAR_11)
{
 struct perf_event_attr *VAR_12 = &VAR_11->attr;
 u64 VAR_13 = 0;

 VAR_13 |= FUNC_0(VAR_12, VAR_8) << VAR_4;
 VAR_13 |= FUNC_0(VAR_12, VAR_10) << VAR_5;
 VAR_13 |= FUNC_0(VAR_12, VAR_6) << VAR_0;

 if (VAR_13)
  VAR_13 |= FUNC_1(VAR_3);

 if (FUNC_0(VAR_12, VAR_7))
  VAR_13 |= FUNC_1(VAR_1);

 if (FUNC_0(VAR_12, VAR_9))
  VAR_13 |= FUNC_1(VAR_2);

 return VAR_13;
}
