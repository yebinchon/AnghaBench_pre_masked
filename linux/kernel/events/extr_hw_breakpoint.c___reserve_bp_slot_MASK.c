
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct perf_event {int dummy; } ;
struct bp_busy_slots {scalar_t__ pinned; int flexible; int member_0; } ;
typedef enum bp_type_idx { ____Placeholder_bp_type_idx } bp_type_idx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bp_busy_slots*,struct perf_event*,int) ;
 int FUNC_1 (struct bp_busy_slots*,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct perf_event*) ;
 scalar_t__* VAR_6 ;
 int FUNC_4 (struct perf_event*,int,int,int) ;

__attribute__((used)) static int FUNC_5(struct perf_event *VAR_7, u64 VAR_8)
{
 struct bp_busy_slots VAR_9 = {0};
 enum bp_type_idx VAR_10;
 int VAR_11;


 if (!VAR_5)
  return -VAR_1;


 if (VAR_8 == VAR_3 ||
     VAR_8 == VAR_4)
  return -VAR_0;

 VAR_10 = FUNC_2(VAR_8);
 VAR_11 = FUNC_3(VAR_7);

 FUNC_0(&VAR_9, VAR_7, VAR_10);




 FUNC_1(&VAR_9, VAR_11);


 if (VAR_9.pinned + (!!VAR_9.flexible) > VAR_6[VAR_10])
  return -VAR_2;

 FUNC_4(VAR_7, 1, VAR_10, VAR_11);

 return 0;
}
