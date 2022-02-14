
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct perf_event {scalar_t__ state; } ;
struct TYPE_2__ {int attr; int enabled; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct perf_event*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct perf_event*) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 struct perf_event** FUNC_2 (int ,int) ;
 struct perf_event* FUNC_3 (int *,int,int *,int ,int *) ;
 int FUNC_4 (struct perf_event*) ;
 int VAR_4 ;
 int FUNC_5 (char*,int,int) ;

__attribute__((used)) static int FUNC_6(int VAR_5, int VAR_6)
{
 struct perf_event *VAR_7;

 if (!VAR_2[VAR_6].enabled || FUNC_2(VAR_4, VAR_5)[VAR_6])
  return 0;

 VAR_7 = FUNC_3(&VAR_2[VAR_6].attr,
        VAR_5, ((void*)0),
        VAR_3, ((void*)0));

 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 if (VAR_7->state != VAR_1) {
  FUNC_4(VAR_7);
  FUNC_5("oprofile: failed to enable event %d "
    "on CPU %d\n", VAR_6, VAR_5);
  return -VAR_0;
 }

 FUNC_2(VAR_4, VAR_5)[VAR_6] = VAR_7;

 return 0;
}
