
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_mvm_vif {int dbgfs_slink; int dbgfs_dir; } ;
struct iwl_mvm {int debugfs_dir; struct iwl_mvm_vif* bf_allowed_vif; } ;
struct ieee80211_vif {scalar_t__ type; scalar_t__ p2p; struct dentry* debugfs_dir; } ;
struct TYPE_3__ {int name; } ;
struct dentry {TYPE_1__ d_name; } ;
struct TYPE_4__ {scalar_t__ power_scheme; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct iwl_mvm*,char*,struct dentry*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,int ,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,struct dentry*) ;
 int FUNC_4 (int ,int ,char*) ;
 struct iwl_mvm_vif* FUNC_5 (struct ieee80211_vif*) ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (char*,int,char*,struct dentry*,int ) ;
 int VAR_11 ;
 int VAR_12 ;

void FUNC_7(struct iwl_mvm *VAR_13, struct ieee80211_vif *VAR_14)
{
 struct dentry *VAR_15 = VAR_14->debugfs_dir;
 struct iwl_mvm_vif *VAR_16 = FUNC_5(VAR_14);
 char VAR_17[100];





 if (!VAR_15 || VAR_16->dbgfs_dir)
  return;

 VAR_16->dbgfs_dir = FUNC_3("iwlmvm", VAR_15);
 if (FUNC_0(VAR_16->dbgfs_dir)) {
  FUNC_1(VAR_13, "Failed to create debugfs directory under %pd\n",
   VAR_15);
  return;
 }

 if (VAR_3.power_scheme != VAR_0 &&
     ((VAR_14->type == VAR_1 && !VAR_14->p2p) ||
      (VAR_14->type == VAR_1 && VAR_14->p2p)))
  FUNC_2(VAR_8, VAR_16->dbgfs_dir, 0600);

 FUNC_2(VAR_11, VAR_16->dbgfs_dir, 0400);
 FUNC_2(VAR_6, VAR_16->dbgfs_dir, 0400);
 FUNC_2(VAR_4, VAR_16->dbgfs_dir, 0600);
 FUNC_2(VAR_5, VAR_16->dbgfs_dir, 0600);
 FUNC_2(VAR_12, VAR_16->dbgfs_dir, 0600);
 FUNC_2(VAR_10, VAR_16->dbgfs_dir, 0600);
 FUNC_2(VAR_9, VAR_16->dbgfs_dir, 0600);
 FUNC_2(VAR_7, VAR_16->dbgfs_dir, 0400);

 if (VAR_14->type == VAR_1 && !VAR_14->p2p &&
     VAR_16 == VAR_13->bf_allowed_vif)
  FUNC_2(VAR_2, VAR_16->dbgfs_dir, 0600);
 FUNC_6(VAR_17, 100, "../../../%pd3/%pd",
   VAR_15,
   VAR_16->dbgfs_dir);

 VAR_16->dbgfs_slink = FUNC_4(VAR_15->d_name.name,
           VAR_13->debugfs_dir, VAR_17);
}
