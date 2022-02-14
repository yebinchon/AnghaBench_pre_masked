
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ring_buffer {unsigned long aux_head; void* aux_priv; int aux_nest; scalar_t__ aux_watermark; scalar_t__ aux_wakeup; TYPE_1__* user_page; int aux_overwrite; int aux_refcount; int aux_mmap_count; } ;
struct perf_output_handle {unsigned long head; struct perf_event* event; struct ring_buffer* rb; int size; scalar_t__ wakeup; scalar_t__ aux_flags; } ;
struct perf_event {int pending_disable; struct perf_event* parent; } ;
struct TYPE_2__ {int aux_tail; } ;


 int FUNC_0 (unsigned long,unsigned long,unsigned long) ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (int *) ;
 unsigned long FUNC_5 (struct ring_buffer*) ;
 int FUNC_6 (struct perf_output_handle*) ;
 int FUNC_7 (struct ring_buffer*) ;
 int FUNC_8 (struct ring_buffer*) ;
 int FUNC_9 (int *) ;
 struct ring_buffer* FUNC_10 (struct perf_event*) ;
 int FUNC_11 (struct ring_buffer*) ;
 int FUNC_12 () ;

void *FUNC_13(struct perf_output_handle *VAR_0,
       struct perf_event *VAR_1)
{
 struct perf_event *VAR_2 = VAR_1;
 unsigned long VAR_3, VAR_4;
 struct ring_buffer *VAR_5;
 unsigned int VAR_6;

 if (VAR_2->parent)
  VAR_2 = VAR_2->parent;






 VAR_5 = FUNC_10(VAR_2);
 if (!VAR_5)
  return ((void*)0);

 if (!FUNC_8(VAR_5))
  goto err;
 if (!FUNC_4(&VAR_5->aux_mmap_count))
  goto err;

 if (!FUNC_9(&VAR_5->aux_refcount))
  goto err;

 VAR_6 = FUNC_1(VAR_5->aux_nest);




 if (FUNC_2(VAR_6))
  goto err_put;

 FUNC_3(VAR_5->aux_nest, VAR_6 + 1);

 VAR_3 = VAR_5->aux_head;

 VAR_0->rb = VAR_5;
 VAR_0->event = VAR_1;
 VAR_0->head = VAR_3;
 VAR_0->size = 0;
 VAR_0->aux_flags = 0;






 if (!VAR_5->aux_overwrite) {
  VAR_4 = FUNC_1(VAR_5->user_page->aux_tail);
  VAR_0->wakeup = VAR_5->aux_wakeup + VAR_5->aux_watermark;
  if (VAR_3 - VAR_4 < FUNC_5(VAR_5))
   VAR_0->size = FUNC_0(VAR_3, VAR_4, FUNC_5(VAR_5));






  if (!VAR_0->size) {
   VAR_1->pending_disable = FUNC_12();
   FUNC_6(VAR_0);
   FUNC_3(VAR_5->aux_nest, 0);
   goto err_put;
  }
 }

 return VAR_0->rb->aux_priv;

err_put:

 FUNC_7(VAR_5);

err:
 FUNC_11(VAR_5);
 VAR_0->event = ((void*)0);

 return ((void*)0);
}
