
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct se_portal_group {int dummy; } ;
struct se_node_acl {int lun_entry_mutex; int lun_entry_hlist; int initiatorname; } ;
struct se_lun_acl {int lun_deve_lock; int lun_deve_list; } ;
struct se_lun {int lun_deve_lock; int lun_deve_list; } ;
struct se_dev_entry {int lun_access_ro; int lun_link; int link; int * se_lun_acl; int * se_lun; int pr_comp; int pr_kref; int attach_count; int creation_time; int mapped_lun; int ua_list; int ua_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct se_dev_entry*) ;
 int FUNC_6 (struct se_dev_entry*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 struct se_dev_entry* FUNC_9 (int,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char*,...) ;
 int FUNC_16 (char*,int ,int ) ;
 int FUNC_17 (int *,struct se_lun_acl*) ;
 struct se_lun_acl* FUNC_18 (int *,int ) ;
 int VAR_3 ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (struct se_node_acl*,struct se_dev_entry*,int) ;
 struct se_dev_entry* FUNC_23 (struct se_node_acl*,int ) ;
 int VAR_4 ;
 int FUNC_24 (int *) ;

int FUNC_25(
 struct se_lun *VAR_5,
 struct se_lun_acl *VAR_6,
 u64 VAR_7,
 bool VAR_8,
 struct se_node_acl *VAR_9,
 struct se_portal_group *VAR_10)
{
 struct se_dev_entry *VAR_11, *VAR_12;

 VAR_12 = FUNC_9(sizeof(*VAR_12), VAR_2);
 if (!VAR_12) {
  FUNC_15("Unable to allocate se_dev_entry memory\n");
  return -VAR_1;
 }

 FUNC_20(&VAR_12->ua_lock);
 FUNC_0(&VAR_12->ua_list);
 FUNC_0(&VAR_12->lun_link);

 VAR_12->mapped_lun = VAR_7;
 FUNC_7(&VAR_12->pr_kref);
 FUNC_4(&VAR_12->pr_comp);

 VAR_12->lun_access_ro = VAR_8;
 VAR_12->creation_time = FUNC_1();
 VAR_12->attach_count++;

 FUNC_13(&VAR_9->lun_entry_mutex);
 VAR_11 = FUNC_23(VAR_9, VAR_7);
 if (VAR_11 && VAR_11->se_lun) {
  struct se_lun *VAR_13 = FUNC_18(VAR_11->se_lun,
     FUNC_12(&VAR_9->lun_entry_mutex));

  if (VAR_13 != VAR_5) {
   FUNC_15("Existing orig->se_lun doesn't match new lun"
          " for dynamic -> explicit NodeACL conversion:"
    " %s\n", VAR_9->initiatorname);
   FUNC_14(&VAR_9->lun_entry_mutex);
   FUNC_5(VAR_12);
   return -VAR_0;
  }
  if (VAR_11->se_lun_acl != ((void*)0)) {
   FUNC_16("Detected existing explicit"
    " se_lun_acl->se_lun_group reference for %s"
    " mapped_lun: %llu, failing\n",
     VAR_9->initiatorname, VAR_7);
   FUNC_14(&VAR_9->lun_entry_mutex);
   FUNC_5(VAR_12);
   return -VAR_0;
  }

  FUNC_17(VAR_12->se_lun, VAR_5);
  FUNC_17(VAR_12->se_lun_acl, VAR_6);
  FUNC_3(&VAR_11->link);
  FUNC_2(&VAR_12->link, &VAR_9->lun_entry_hlist);
  FUNC_14(&VAR_9->lun_entry_mutex);

  FUNC_19(&VAR_5->lun_deve_lock);
  FUNC_11(&VAR_11->lun_link);
  FUNC_10(&VAR_12->lun_link, &VAR_5->lun_deve_list);
  FUNC_21(&VAR_5->lun_deve_lock);

  FUNC_8(&VAR_11->pr_kref, VAR_4);
  FUNC_24(&VAR_11->pr_comp);

  FUNC_22(VAR_9, VAR_12, 1);
  FUNC_6(VAR_11, VAR_3);
  return 0;
 }

 FUNC_17(VAR_12->se_lun, VAR_5);
 FUNC_17(VAR_12->se_lun_acl, VAR_6);
 FUNC_2(&VAR_12->link, &VAR_9->lun_entry_hlist);
 FUNC_14(&VAR_9->lun_entry_mutex);

 FUNC_19(&VAR_5->lun_deve_lock);
 FUNC_10(&VAR_12->lun_link, &VAR_5->lun_deve_list);
 FUNC_21(&VAR_5->lun_deve_lock);

 FUNC_22(VAR_9, VAR_12, 1);
 return 0;
}
