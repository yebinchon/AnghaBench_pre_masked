
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event {int dummy; } ;
typedef enum bp_type_idx { ____Placeholder_bp_type_idx } bp_type_idx ;
struct TYPE_2__ {unsigned int* tsk_pinned; } ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (int,struct perf_event*,int) ;

__attribute__((used)) static void FUNC_2(struct perf_event *VAR_0, int VAR_1,
    enum bp_type_idx VAR_2, int VAR_3)
{
 unsigned int *VAR_4 = FUNC_0(VAR_1, VAR_2)->tsk_pinned;
 int VAR_5, VAR_6;

 VAR_5 = FUNC_1(VAR_1, VAR_0, VAR_2) - 1;
 VAR_6 = VAR_5 + VAR_3;

 if (VAR_5 >= 0)
  VAR_4[VAR_5]--;
 if (VAR_6 >= 0)
  VAR_4[VAR_6]++;
}
