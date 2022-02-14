
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct mic_intr_cb {int cb_id; int list; void* data; void* thread_fn; void* handler; } ;
struct TYPE_2__ {int mic_thread_lock; int mic_intr_lock; int * cb_list; int cb_ida; } ;
struct mic_device {TYPE_1__ irq_info; } ;
typedef void* irq_handler_t ;


 int VAR_0 ;
 struct mic_intr_cb* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (struct mic_intr_cb*) ;
 struct mic_intr_cb* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static struct mic_intr_cb *FUNC_9(struct mic_device *VAR_2,
   u8 VAR_3, irq_handler_t VAR_4, irq_handler_t VAR_5,
   void *VAR_6)
{
 struct mic_intr_cb *VAR_7;
 unsigned long VAR_8;
 int VAR_9;
 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_1);

 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_7->handler = VAR_4;
 VAR_7->thread_fn = VAR_5;
 VAR_7->data = VAR_6;
 VAR_7->cb_id = FUNC_1(&VAR_2->irq_info.cb_ida,
  0, 0, VAR_1);
 if (VAR_7->cb_id < 0) {
  VAR_9 = VAR_7->cb_id;
  goto ida_fail;
 }

 FUNC_5(&VAR_2->irq_info.mic_thread_lock);
 FUNC_6(&VAR_2->irq_info.mic_intr_lock, VAR_8);
 FUNC_4(&VAR_7->list, &VAR_2->irq_info.cb_list[VAR_3]);
 FUNC_8(&VAR_2->irq_info.mic_intr_lock, VAR_8);
 FUNC_7(&VAR_2->irq_info.mic_thread_lock);

 return VAR_7;
ida_fail:
 FUNC_2(VAR_7);
 return FUNC_0(VAR_9);
}
