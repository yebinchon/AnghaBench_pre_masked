
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_quota_recovery {int dummy; } ;
struct ocfs2_la_recovery_item {int lri_slot; int lri_orphan_reco_type; int lri_list; struct ocfs2_quota_recovery* lri_qrec; struct ocfs2_dinode* lri_tl_dinode; struct ocfs2_dinode* lri_la_dinode; } ;
struct ocfs2_journal {int j_lock; int j_recovery_work; TYPE_1__* j_osb; int j_la_cleanups; } ;
struct ocfs2_dinode {int dummy; } ;
typedef enum ocfs2_orphan_reco_type { ____Placeholder_ocfs2_orphan_reco_type } ocfs2_orphan_reco_type ;
struct TYPE_2__ {int ocfs2_wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ocfs2_dinode*) ;
 struct ocfs2_la_recovery_item* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ocfs2_quota_recovery*) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct ocfs2_journal *VAR_2,
         int VAR_3,
         struct ocfs2_dinode *VAR_4,
         struct ocfs2_dinode *VAR_5,
         struct ocfs2_quota_recovery *VAR_6,
         enum ocfs2_orphan_reco_type VAR_7)
{
 struct ocfs2_la_recovery_item *VAR_8;

 VAR_8 = FUNC_2(sizeof(struct ocfs2_la_recovery_item), VAR_1);
 if (!VAR_8) {



  FUNC_1(VAR_4);
  FUNC_1(VAR_5);

  if (VAR_6)
   FUNC_5(VAR_6);

  FUNC_4(-VAR_0);
  return;
 }

 FUNC_0(&VAR_8->lri_list);
 VAR_8->lri_la_dinode = VAR_4;
 VAR_8->lri_slot = VAR_3;
 VAR_8->lri_tl_dinode = VAR_5;
 VAR_8->lri_qrec = VAR_6;
 VAR_8->lri_orphan_reco_type = VAR_7;

 FUNC_7(&VAR_2->j_lock);
 FUNC_3(&VAR_8->lri_list, &VAR_2->j_la_cleanups);
 FUNC_6(VAR_2->j_osb->ocfs2_wq, &VAR_2->j_recovery_work);
 FUNC_8(&VAR_2->j_lock);
}
