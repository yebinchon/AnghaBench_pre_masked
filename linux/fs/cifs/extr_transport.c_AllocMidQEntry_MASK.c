
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_hdr {int Command; } ;
struct mid_q_entry {int mid_state; TYPE_1__* callback_data; int callback; struct TCP_Server_Info* server; int when_alloc; int command; int pid; int mid; int refcount; } ;
struct TCP_Server_Info {int dummy; } ;
struct TYPE_2__ {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_6 ;
 int FUNC_3 (struct smb_hdr const*) ;
 int VAR_7 ;
 int FUNC_4 (int *) ;
 struct mid_q_entry* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct mid_q_entry*,int ,int) ;
 int VAR_8 ;

struct mid_q_entry *
FUNC_7(const struct smb_hdr *VAR_9, struct TCP_Server_Info *VAR_10)
{
 struct mid_q_entry *VAR_11;

 if (VAR_10 == ((void*)0)) {
  FUNC_1(VAR_3, "Null TCP session in AllocMidQEntry\n");
  return ((void*)0);
 }

 VAR_11 = FUNC_5(VAR_4, VAR_1);
 FUNC_6(VAR_11, 0, sizeof(struct mid_q_entry));
 FUNC_4(&VAR_11->refcount);
 VAR_11->mid = FUNC_3(VAR_9);
 VAR_11->pid = VAR_6->pid;
 VAR_11->command = FUNC_2(VAR_9->Command);
 FUNC_1(VAR_0, "For smb_command %d\n", VAR_9->Command);


 VAR_11->when_alloc = VAR_7;
 VAR_11->server = VAR_10;





 VAR_11->callback = VAR_5;
 VAR_11->callback_data = VAR_6;

 FUNC_0(&VAR_8);
 VAR_11->mid_state = VAR_2;
 return VAR_11;
}
