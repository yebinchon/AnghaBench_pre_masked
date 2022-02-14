
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ring_buffer {int wakeup; int nest; } ;
struct perf_output_handle {int wakeup; struct ring_buffer* rb; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct perf_output_handle *VAR_0)
{
 struct ring_buffer *VAR_1 = VAR_0->rb;

 FUNC_1();





 (*(volatile unsigned int *)&VAR_1->nest)++;
 VAR_0->wakeup = FUNC_0(&VAR_1->wakeup);
}
