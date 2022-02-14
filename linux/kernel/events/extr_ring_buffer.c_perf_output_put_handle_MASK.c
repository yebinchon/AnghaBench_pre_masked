
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ring_buffer {int wakeup; int nest; int head; TYPE_1__* user_page; } ;
struct perf_output_handle {unsigned long wakeup; struct ring_buffer* rb; } ;
struct TYPE_2__ {int data_head; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 () ;
 unsigned long FUNC_3 (int *) ;
 int FUNC_4 (struct perf_output_handle*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct perf_output_handle *VAR_0)
{
 struct ring_buffer *VAR_1 = VAR_0->rb;
 unsigned long VAR_2;
 unsigned int VAR_3;





 VAR_3 = FUNC_0(VAR_1->nest);
 if (VAR_3 > 1) {
  FUNC_1(VAR_1->nest, VAR_3 - 1);
  goto out;
 }

again:
 FUNC_2();
 VAR_2 = FUNC_3(&VAR_1->head);
 FUNC_6();
 FUNC_1(VAR_1->user_page->data_head, VAR_2);






 FUNC_2();
 FUNC_1(VAR_1->nest, 0);





 FUNC_2();
 if (FUNC_7(VAR_2 != FUNC_3(&VAR_1->head))) {
  FUNC_1(VAR_1->nest, 1);
  goto again;
 }

 if (VAR_0->wakeup != FUNC_3(&VAR_1->wakeup))
  FUNC_4(VAR_0);

out:
 FUNC_5();
}
