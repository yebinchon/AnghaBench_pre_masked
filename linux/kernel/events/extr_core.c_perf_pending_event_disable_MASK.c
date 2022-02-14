
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event {int pending; int pending_disable; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct perf_event*) ;
 int FUNC_4 () ;

__attribute__((used)) static void FUNC_5(struct perf_event *VAR_0)
{
 int VAR_1 = FUNC_0(VAR_0->pending_disable);

 if (VAR_1 < 0)
  return;

 if (VAR_1 == FUNC_4()) {
  FUNC_1(VAR_0->pending_disable, -1);
  FUNC_3(VAR_0);
  return;
 }
 FUNC_2(&VAR_0->pending, VAR_1);
}
