
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_txq {TYPE_2__* entries; int write_ptr; int read_ptr; } ;
struct iwl_trans_pcie {size_t cmd_queue; int wait_command_queue; struct iwl_txq** txq; } ;
struct iwl_trans {int status; } ;
struct iwl_host_cmd {int flags; int * resp_pkt; int id; } ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ meta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct iwl_trans*,char*,int ) ;
 int FUNC_1 (struct iwl_trans*,char*) ;
 int FUNC_2 (struct iwl_trans*,char*,int ,...) ;
 struct iwl_trans_pcie* FUNC_3 (struct iwl_trans*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 () ;
 int FUNC_7 (struct iwl_host_cmd*) ;
 int FUNC_8 (struct iwl_trans*,int ) ;
 int FUNC_9 (struct iwl_trans*,struct iwl_host_cmd*) ;
 int FUNC_10 (struct iwl_trans*) ;
 int FUNC_11 (struct iwl_trans*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int *) ;
 scalar_t__ FUNC_14 (int ,int *) ;
 int FUNC_15 (int ,int,int ) ;

__attribute__((used)) static int FUNC_16(struct iwl_trans *VAR_9,
       struct iwl_host_cmd *VAR_10)
{
 struct iwl_trans_pcie *VAR_11 = FUNC_3(VAR_9);
 struct iwl_txq *VAR_12 = VAR_11->txq[VAR_11->cmd_queue];
 int VAR_13;
 int VAR_14;

 FUNC_0(VAR_9, "Attempting to send sync command %s\n",
         FUNC_8(VAR_9, VAR_10->id));

 if (FUNC_4(FUNC_13(VAR_8,
      &VAR_9->status),
   "Command %s: a command is already active!\n",
   FUNC_8(VAR_9, VAR_10->id)))
  return -VAR_2;

 FUNC_0(VAR_9, "Setting HCMD_ACTIVE for command %s\n",
         FUNC_8(VAR_9, VAR_10->id));

 VAR_13 = FUNC_9(VAR_9, VAR_10);
 if (VAR_13 < 0) {
  VAR_14 = VAR_13;
  FUNC_5(VAR_8, &VAR_9->status);
  FUNC_2(VAR_9,
   "Error sending %s: enqueue_hcmd failed: %d\n",
   FUNC_8(VAR_9, VAR_10->id), VAR_14);
  return VAR_14;
 }

 VAR_14 = FUNC_15(VAR_11->wait_command_queue,
     !FUNC_14(VAR_8,
        &VAR_9->status),
     VAR_5);
 if (!VAR_14) {
  FUNC_2(VAR_9, "Error sending %s: time out after %dms.\n",
   FUNC_8(VAR_9, VAR_10->id),
   FUNC_12(VAR_5));

  FUNC_2(VAR_9, "Current CMD queue read_ptr %d write_ptr %d\n",
   VAR_12->read_ptr, VAR_12->write_ptr);

  FUNC_5(VAR_8, &VAR_9->status);
  FUNC_0(VAR_9, "Clearing HCMD_ACTIVE for command %s\n",
          FUNC_8(VAR_9, VAR_10->id));
  VAR_14 = -VAR_4;

  FUNC_11(VAR_9);
  goto cancel;
 }

 if (FUNC_14(VAR_6, &VAR_9->status)) {
  FUNC_10(VAR_9);
  FUNC_2(VAR_9, "FW error in SYNC CMD %s\n",
   FUNC_8(VAR_9, VAR_10->id));
  FUNC_6();
  VAR_14 = -VAR_2;
  goto cancel;
 }

 if (!(VAR_10->flags & VAR_0) &&
     FUNC_14(VAR_7, &VAR_9->status)) {
  FUNC_1(VAR_9, "RFKILL in SYNC CMD... no rsp\n");
  VAR_14 = -VAR_3;
  goto cancel;
 }

 if ((VAR_10->flags & VAR_1) && !VAR_10->resp_pkt) {
  FUNC_2(VAR_9, "Error: Response NULL in '%s'\n",
   FUNC_8(VAR_9, VAR_10->id));
  VAR_14 = -VAR_2;
  goto cancel;
 }

 return 0;

cancel:
 if (VAR_10->flags & VAR_1) {






  VAR_12->entries[VAR_13].meta.flags &= ~VAR_1;
 }

 if (VAR_10->resp_pkt) {
  FUNC_7(VAR_10);
  VAR_10->resp_pkt = ((void*)0);
 }

 return VAR_14;
}
