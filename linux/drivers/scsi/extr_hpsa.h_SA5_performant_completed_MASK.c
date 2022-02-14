
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct reply_queue_buffer {unsigned long* head; size_t current_entry; int wraparound; } ;
struct ctlr_info {size_t max_commands; int commands_outstanding; scalar_t__ vaddr; scalar_t__ msix_vectors; TYPE_1__* pdev; struct reply_queue_buffer* reply_queue; } ;
struct TYPE_2__ {scalar_t__ msi_enabled; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static unsigned long FUNC_4(struct ctlr_info *VAR_4, u8 VAR_5)
{
 struct reply_queue_buffer *VAR_6 = &VAR_4->reply_queue[VAR_5];
 unsigned long VAR_7 = VAR_0;


 if (FUNC_2(!(VAR_4->pdev->msi_enabled || VAR_4->msix_vectors))) {



  (void) FUNC_1(VAR_4->vaddr + VAR_3);
  FUNC_3(VAR_2, VAR_4->vaddr + VAR_1);



  (void) FUNC_1(VAR_4->vaddr + VAR_3);
 }

 if ((((u32) VAR_6->head[VAR_6->current_entry]) & 1) == VAR_6->wraparound) {
  VAR_7 = VAR_6->head[VAR_6->current_entry];
  VAR_6->current_entry++;
  FUNC_0(&VAR_4->commands_outstanding);
 } else {
  VAR_7 = VAR_0;
 }

 if (VAR_6->current_entry == VAR_4->max_commands) {
  VAR_6->current_entry = 0;
  VAR_6->wraparound ^= 1;
 }
 return VAR_7;
}
