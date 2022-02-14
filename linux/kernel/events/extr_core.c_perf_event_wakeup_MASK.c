
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {scalar_t__ pending_kill; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (struct perf_event*) ;
 int FUNC_2 (struct perf_event*) ;

void FUNC_3(struct perf_event *VAR_1)
{
 FUNC_2(VAR_1);

 if (VAR_1->pending_kill) {
  FUNC_0(FUNC_1(VAR_1), VAR_0, VAR_1->pending_kill);
  VAR_1->pending_kill = 0;
 }
}
