
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb2_sync_hdr {int Command; int SessionId; int TreeId; int MessageId; int CreditCharge; } ;
struct mid_q_entry {unsigned int credits; int mid; int mid_state; TYPE_1__* callback_data; int callback; struct TCP_Server_Info* server; int when_alloc; int command; int pid; int refcount; } ;
struct TCP_Server_Info {int dummy; } ;
struct TYPE_2__ {int pid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct mid_q_entry* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct mid_q_entry*,int ,int) ;
 int VAR_7 ;
 int FUNC_7 (int ,int ,unsigned int,int ) ;

__attribute__((used)) static struct mid_q_entry *
FUNC_8(const struct smb2_sync_hdr *VAR_8,
       struct TCP_Server_Info *VAR_9)
{
 struct mid_q_entry *VAR_10;
 unsigned int VAR_11 = FUNC_3(VAR_8->CreditCharge);

 if (VAR_9 == ((void*)0)) {
  FUNC_1(VAR_2, "Null TCP session in smb2_mid_entry_alloc\n");
  return ((void*)0);
 }

 VAR_10 = FUNC_5(VAR_3, VAR_0);
 FUNC_6(VAR_10, 0, sizeof(struct mid_q_entry));
 FUNC_2(&VAR_10->refcount);
 VAR_10->mid = FUNC_4(VAR_8->MessageId);
 VAR_10->credits = VAR_11 > 0 ? VAR_11 : 1;
 VAR_10->pid = VAR_5->pid;
 VAR_10->command = VAR_8->Command;
 VAR_10->when_alloc = VAR_6;
 VAR_10->server = VAR_9;





 VAR_10->callback = VAR_4;
 VAR_10->callback_data = VAR_5;

 FUNC_0(&VAR_7);
 VAR_10->mid_state = VAR_1;
 FUNC_7(VAR_8->TreeId, VAR_8->SessionId,
  FUNC_3(VAR_8->Command), VAR_10->mid);
 return VAR_10;
}
