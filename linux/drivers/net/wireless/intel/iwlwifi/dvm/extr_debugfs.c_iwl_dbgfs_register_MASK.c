
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_priv {TYPE_2__* hw; scalar_t__ mac80211_registered; struct dentry* debugfs_dir; } ;
struct dentry {struct dentry* d_parent; } ;
struct TYPE_4__ {TYPE_1__* wiphy; } ;
struct TYPE_3__ {struct dentry* debugfsdir; } ;


 int FUNC_0 (int ,struct dentry*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct dentry* FUNC_1 (char*,struct dentry*) ;
 int FUNC_2 (char*,struct dentry*,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (struct iwl_priv*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_4 (char*,int,char*,struct dentry*) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;

void FUNC_5(struct iwl_priv *VAR_35, struct dentry *VAR_36)
{
 struct dentry *VAR_37, *VAR_38, *VAR_39;

 VAR_35->debugfs_dir = VAR_36;

 VAR_37 = FUNC_1("data", VAR_36);
 VAR_38 = FUNC_1("rf", VAR_36);
 VAR_39 = FUNC_1("debug", VAR_36);

 FUNC_0(VAR_11, VAR_37, 0400);
 FUNC_0(VAR_23, VAR_37, 0600);
 FUNC_0(VAR_34, VAR_37, 0400);
 FUNC_0(VAR_24, VAR_37, 0400);
 FUNC_0(VAR_3, VAR_37, 0400);
 FUNC_0(VAR_25, VAR_37, 0400);
 FUNC_0(VAR_18, VAR_37, 0600);
 FUNC_0(VAR_15, VAR_37, 0400);
 FUNC_0(VAR_22, VAR_37, 0600);
 FUNC_0(VAR_5, VAR_37, 0400);
 FUNC_0(VAR_27, VAR_37, 0400);
 FUNC_0(VAR_6, VAR_37, 0600);
 FUNC_0(VAR_26, VAR_37, 0400);

 FUNC_0(VAR_13, VAR_39, 0400);
 FUNC_0(VAR_4, VAR_39, 0200);
 FUNC_0(VAR_10, VAR_39, 0200);
 FUNC_0(VAR_12, VAR_39, 0600);
 FUNC_0(VAR_17, VAR_39, 0600);
 FUNC_0(VAR_31, VAR_39, 0400);
 FUNC_0(VAR_33, VAR_39, 0400);
 FUNC_0(VAR_30, VAR_39, 0400);
 FUNC_0(VAR_28, VAR_39, 0200);
 FUNC_0(VAR_14, VAR_39, 0600);
 FUNC_0(VAR_21, VAR_39, 0400);
 FUNC_0(VAR_2, VAR_39, 0400);
 FUNC_0(VAR_32, VAR_39, 0600);
 FUNC_0(VAR_29, VAR_39, 0400);
 FUNC_0(VAR_16, VAR_39, 0400);
 FUNC_0(VAR_20, VAR_39, 0200);
 FUNC_0(VAR_19, VAR_39, 0200);
 FUNC_0(VAR_7, VAR_39, 0200);
 FUNC_0(VAR_8, VAR_39, 0200);




 if (FUNC_3(VAR_35))
  FUNC_0(VAR_0, VAR_39, 0400);


 FUNC_0(VAR_1, VAR_38, 0600);







 if (VAR_35->mac80211_registered) {
  char VAR_40[100];
  struct dentry *VAR_41, *VAR_42;

  VAR_42 = VAR_36->d_parent;
  VAR_41 = VAR_35->hw->wiphy->debugfsdir;

  FUNC_4(VAR_40, 100, "../../%pd2", VAR_42);

  FUNC_2("iwlwifi", VAR_41, VAR_40);
 }
}
