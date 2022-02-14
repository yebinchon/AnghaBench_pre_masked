
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mmc_host {struct dentry* debugfs_root; } ;
struct dentry {int dummy; } ;
struct atmel_mci_slot {int completed_events; int pending_events; int state; struct atmel_mci_slot* host; struct mmc_host* mmc; } ;
struct atmel_mci {int completed_events; int pending_events; int state; struct atmel_mci* host; struct mmc_host* mmc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,struct dentry*,struct atmel_mci_slot*,int *) ;
 int FUNC_1 (char*,int ,struct dentry*,int *) ;
 int FUNC_2 (char*,int ,struct dentry*,int *) ;

__attribute__((used)) static void FUNC_3(struct atmel_mci_slot *VAR_3)
{
 struct mmc_host *VAR_4 = VAR_3->mmc;
 struct atmel_mci *VAR_5 = VAR_3->host;
 struct dentry *VAR_6;

 VAR_6 = VAR_4->debugfs_root;
 if (!VAR_6)
  return;

 FUNC_0("regs", VAR_0, VAR_6, VAR_5, &VAR_1);
 FUNC_0("req", VAR_0, VAR_6, VAR_3, &VAR_2);
 FUNC_1("state", VAR_0, VAR_6, (u32 *)&VAR_5->state);
 FUNC_2("pending_events", VAR_0, VAR_6,
      (u32 *)&VAR_5->pending_events);
 FUNC_2("completed_events", VAR_0, VAR_6,
      (u32 *)&VAR_5->completed_events);
}
