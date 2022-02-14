
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct perf_event_attr {int exclude_kernel; int exclude_user; } ;
struct perf_event {struct perf_event_attr attr; } ;


 int FUNC_0 (struct perf_event_attr*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static u64 FUNC_4(struct perf_event *VAR_11)
{
 struct perf_event_attr *VAR_12 = &VAR_11->attr;
 u64 VAR_13 = 0;

 VAR_13 |= FUNC_0(VAR_12, VAR_10) << VAR_7;
 VAR_13 |= FUNC_0(VAR_12, VAR_8) << VAR_5;
 VAR_13 |= FUNC_0(VAR_12, VAR_9) << VAR_6;

 if (!VAR_12->exclude_user)
  VAR_13 |= FUNC_1(VAR_3);

 if (!VAR_12->exclude_kernel)
  VAR_13 |= FUNC_1(VAR_4);

 if (FUNC_2(VAR_1) && FUNC_3(VAR_0))
  VAR_13 |= FUNC_1(VAR_2);

 return VAR_13;
}
