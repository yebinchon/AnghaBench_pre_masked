
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct reply_queue_buffer {int* head; size_t current_entry; int wraparound; } ;
struct TYPE_2__ {int (* command_completed ) (struct ctlr_info*,size_t) ;} ;
struct ctlr_info {int transMethod; size_t max_commands; int commands_outstanding; TYPE_1__ access; struct reply_queue_buffer* reply_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ctlr_info*,size_t) ;
 int FUNC_2 (struct ctlr_info*,size_t) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static inline u32 FUNC_4(struct ctlr_info *VAR_3, u8 VAR_4)
{
 u32 VAR_5;
 struct reply_queue_buffer *VAR_6 = &VAR_3->reply_queue[VAR_4];

 if (VAR_3->transMethod & VAR_1)
  return VAR_3->access.command_completed(VAR_3, VAR_4);

 if (FUNC_3(!(VAR_3->transMethod & VAR_0)))
  return VAR_3->access.command_completed(VAR_3, VAR_4);

 if ((VAR_6->head[VAR_6->current_entry] & 1) == VAR_6->wraparound) {
  VAR_5 = VAR_6->head[VAR_6->current_entry];
  VAR_6->current_entry++;
  FUNC_0(&VAR_3->commands_outstanding);
 } else {
  VAR_5 = VAR_2;
 }

 if (VAR_6->current_entry == VAR_3->max_commands) {
  VAR_6->current_entry = 0;
  VAR_6->wraparound ^= 1;
 }
 return VAR_5;
}
