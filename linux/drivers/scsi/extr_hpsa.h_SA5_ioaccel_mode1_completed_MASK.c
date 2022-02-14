
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef scalar_t__ u64 ;
struct reply_queue_buffer {scalar_t__* head; size_t current_entry; size_t size; } ;
struct ctlr_info {size_t nreply_queues; int commands_outstanding; scalar_t__ vaddr; struct reply_queue_buffer* reply_queue; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (size_t,scalar_t__) ;

__attribute__((used)) static unsigned long FUNC_4(struct ctlr_info *VAR_2, u8 VAR_3)
{
 u64 VAR_4;
 struct reply_queue_buffer *VAR_5 = &VAR_2->reply_queue[VAR_3];

 FUNC_0(VAR_3 >= VAR_2->nreply_queues);

 VAR_4 = VAR_5->head[VAR_5->current_entry];
 if (VAR_4 != VAR_1) {
  VAR_5->head[VAR_5->current_entry] = VAR_1;
  if (++VAR_5->current_entry == VAR_5->size)
   VAR_5->current_entry = 0;






  FUNC_2();
  FUNC_3((VAR_3 << 24) | VAR_5->current_entry, VAR_2->vaddr +
    VAR_0);
  FUNC_1(&VAR_2->commands_outstanding);
 }
 return (unsigned long) VAR_4;
}
