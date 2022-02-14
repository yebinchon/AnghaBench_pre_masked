
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r3964_message {int sig_flags; scalar_t__ msg_count; int * next_block_to_read; int * last_msg; int * first_msg; struct r3964_message* next; struct pid* pid; int lock; } ;
struct r3964_info {struct r3964_message* firstClient; } ;
struct r3964_client_info {int sig_flags; scalar_t__ msg_count; int * next_block_to_read; int * last_msg; int * first_msg; struct r3964_client_info* next; struct pid* pid; int lock; } ;
struct pid {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,struct r3964_message*) ;
 int FUNC_1 (char*,int ) ;
 struct r3964_message* FUNC_2 (struct r3964_info*,struct pid*) ;
 struct pid* FUNC_3 (struct pid*) ;
 int FUNC_4 (struct r3964_message*) ;
 struct r3964_message* FUNC_5 (int,int ) ;
 int FUNC_6 (struct pid*) ;
 int FUNC_7 (struct pid*) ;
 struct r3964_message* FUNC_8 (struct r3964_info*,struct r3964_message*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct r3964_info *VAR_4, struct pid *VAR_5, int VAR_6)
{
 struct r3964_client_info *VAR_7;
 struct r3964_client_info **VAR_8;
 struct r3964_message *VAR_9;

 if ((VAR_6 & VAR_3) == 0) {

  for (VAR_8 = &VAR_4->firstClient; *VAR_8;
       VAR_8 = &(*VAR_8)->next) {
   VAR_7 = *VAR_8;

   if (VAR_7->pid == VAR_5) {
    FUNC_1("removing client %d from client list",
      FUNC_6(VAR_5));
    *VAR_8 = VAR_7->next;
    while (VAR_7->msg_count) {
     VAR_9 = FUNC_8(VAR_4, VAR_7);
     if (VAR_9) {
      FUNC_4(VAR_9);
      FUNC_0("enable_signals - msg "
       "kfree %p", VAR_9);
     }
    }
    FUNC_7(VAR_7->pid);
    FUNC_4(VAR_7);
    FUNC_0("enable_signals - kfree %p", VAR_7);
    return 0;
   }
  }
  return -VAR_0;
 } else {
  VAR_7 = FUNC_2(VAR_4, VAR_5);
  if (VAR_7) {

   VAR_7->sig_flags = VAR_6;
  } else {

   VAR_7 = FUNC_5(sizeof(struct r3964_client_info),
     VAR_2);
   FUNC_0("enable_signals - kmalloc %p", VAR_7);
   if (VAR_7 == ((void*)0))
    return -VAR_1;

   FUNC_1("add client %d to client list", FUNC_6(VAR_5));
   FUNC_9(&VAR_7->lock);
   VAR_7->sig_flags = VAR_6;
   VAR_7->pid = FUNC_3(VAR_5);
   VAR_7->next = VAR_4->firstClient;
   VAR_7->first_msg = ((void*)0);
   VAR_7->last_msg = ((void*)0);
   VAR_7->next_block_to_read = ((void*)0);
   VAR_7->msg_count = 0;
   VAR_4->firstClient = VAR_7;
  }
 }

 return 0;
}
