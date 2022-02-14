
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ring_buffer {unsigned long aux_head; scalar_t__ aux_watermark; scalar_t__ aux_wakeup; TYPE_1__* user_page; } ;
struct perf_output_handle {unsigned long size; unsigned long head; scalar_t__ wakeup; struct ring_buffer* rb; } ;
struct TYPE_2__ {int aux_head; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (struct perf_output_handle*) ;
 scalar_t__ FUNC_2 (struct ring_buffer*) ;

int FUNC_3(struct perf_output_handle *VAR_1, unsigned long VAR_2)
{
 struct ring_buffer *VAR_3 = VAR_1->rb;

 if (VAR_2 > VAR_1->size)
  return -VAR_0;

 VAR_3->aux_head += VAR_2;

 FUNC_0(VAR_3->user_page->aux_head, VAR_3->aux_head);
 if (FUNC_2(VAR_3)) {
  FUNC_1(VAR_1);
  VAR_1->wakeup = VAR_3->aux_wakeup + VAR_3->aux_watermark;
 }

 VAR_1->head = VAR_3->aux_head;
 VAR_1->size -= VAR_2;

 return 0;
}
