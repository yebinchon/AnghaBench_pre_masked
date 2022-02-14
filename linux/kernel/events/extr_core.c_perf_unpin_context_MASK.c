
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_context {int lock; int pin_count; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_2(struct perf_event_context *VAR_0)
{
 unsigned long VAR_1;

 FUNC_0(&VAR_0->lock, VAR_1);
 --VAR_0->pin_count;
 FUNC_1(&VAR_0->lock, VAR_1);
}
