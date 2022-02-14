
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r3964_message {int msg_id; int arg; int error_code; struct r3964_message* next; struct r3964_block_header* block; } ;
struct r3964_client_info {int msg_count; int sig_flags; int pid; struct r3964_message* last_msg; int lock; struct r3964_message* first_msg; } ;
struct r3964_block_header {int locks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,struct r3964_message*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int) ;
 struct r3964_message* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct r3964_client_info *VAR_7, int VAR_8, int VAR_9,
  int VAR_10, struct r3964_block_header *VAR_11)
{
 struct r3964_message *VAR_12;
 unsigned long VAR_13;

 if (VAR_7->msg_count < VAR_2 - 1) {
queue_the_message:

  VAR_12 = FUNC_3(sizeof(struct r3964_message),
    VAR_10 ? VAR_0 : VAR_1);
  FUNC_0("add_msg - kmalloc %p", VAR_12);
  if (VAR_12 == ((void*)0)) {
   return;
  }

  FUNC_4(&VAR_7->lock, VAR_13);

  VAR_12->msg_id = VAR_8;
  VAR_12->arg = VAR_9;
  VAR_12->error_code = VAR_10;
  VAR_12->block = VAR_11;
  VAR_12->next = ((void*)0);

  if (VAR_7->last_msg == ((void*)0)) {
   VAR_7->first_msg = VAR_7->last_msg = VAR_12;
  } else {
   VAR_7->last_msg->next = VAR_12;
   VAR_7->last_msg = VAR_12;
  }

  VAR_7->msg_count++;

  if (VAR_11 != ((void*)0)) {
   VAR_11->locks++;
  }
  FUNC_5(&VAR_7->lock, VAR_13);
 } else {
  if ((VAR_7->last_msg->msg_id == VAR_3)
      && (VAR_7->last_msg->error_code == VAR_4)) {
   VAR_7->last_msg->arg++;
   FUNC_1("add_msg - inc prev OVERFLOW-msg");
  } else {
   VAR_8 = VAR_3;
   VAR_9 = 0;
   VAR_10 = VAR_4;
   VAR_11 = ((void*)0);
   FUNC_1("add_msg - queue OVERFLOW-msg");
   goto queue_the_message;
  }
 }

 if (VAR_7->sig_flags & VAR_5) {
  FUNC_2(VAR_7->pid, VAR_6, 1);
 }
}
