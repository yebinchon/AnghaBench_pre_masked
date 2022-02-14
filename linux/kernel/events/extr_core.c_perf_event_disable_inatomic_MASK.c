
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {int pending; int pending_disable; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;

void FUNC_3(struct perf_event *VAR_0)
{
 FUNC_0(VAR_0->pending_disable, FUNC_2());

 FUNC_1(&VAR_0->pending);
}
