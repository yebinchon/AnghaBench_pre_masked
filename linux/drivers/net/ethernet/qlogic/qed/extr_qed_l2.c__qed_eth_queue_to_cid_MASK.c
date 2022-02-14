
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct qed_queue_start_common_params {int sb_idx; TYPE_1__* p_sb; int stats_id; int queue_id; int vport_id; } ;
struct qed_queue_cid_vf_params {scalar_t__ vfid; int qid_usage_idx; int vf_legacy; int vf_qid; } ;
struct TYPE_4__ {int stats_id; int queue_id; int vport_id; } ;
struct qed_queue_cid {int b_is_rx; scalar_t__ vfid; int sb_idx; int sb_igu_id; TYPE_2__ abs; TYPE_2__ rel; int qid_usage_idx; int cid; int opaque_fid; int vf_legacy; int vf_qid; struct qed_hwfn* p_owner; } ;
struct qed_hwfn {int cdev; } ;
struct TYPE_3__ {int igu_sb_id; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct qed_hwfn*,struct qed_queue_cid*) ;
 int FUNC_3 (struct qed_hwfn*,int ,int *) ;
 int FUNC_4 (struct qed_hwfn*,int ,int *) ;
 int FUNC_5 (struct qed_queue_cid*) ;
 struct qed_queue_cid* FUNC_6 (int) ;

__attribute__((used)) static struct qed_queue_cid *
FUNC_7(struct qed_hwfn *VAR_2,
        u16 VAR_3,
        u32 VAR_4,
        struct qed_queue_start_common_params *VAR_5,
        bool VAR_6,
        struct qed_queue_cid_vf_params *VAR_7)
{
 struct qed_queue_cid *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_6(sizeof(*VAR_8));
 if (!VAR_8)
  return ((void*)0);

 VAR_8->opaque_fid = VAR_3;
 VAR_8->cid = VAR_4;
 VAR_8->p_owner = VAR_2;


 VAR_8->rel.vport_id = VAR_5->vport_id;
 VAR_8->rel.queue_id = VAR_5->queue_id;
 VAR_8->rel.stats_id = VAR_5->stats_id;
 VAR_8->sb_igu_id = VAR_5->p_sb->igu_sb_id;
 VAR_8->b_is_rx = VAR_6;
 VAR_8->sb_idx = VAR_5->sb_idx;


 if (VAR_7) {
  VAR_8->vfid = VAR_7->vfid;
  VAR_8->vf_qid = VAR_7->vf_qid;
  VAR_8->vf_legacy = VAR_7->vf_legacy;
 } else {
  VAR_8->vfid = VAR_1;
 }


 if (FUNC_1(VAR_2->cdev)) {
  VAR_8->abs = VAR_8->rel;
  goto out;
 }





 VAR_9 = FUNC_4(VAR_2, VAR_8->rel.vport_id, &VAR_8->abs.vport_id);
 if (VAR_9)
  goto fail;

 VAR_9 = FUNC_3(VAR_2, VAR_8->rel.queue_id, &VAR_8->abs.queue_id);
 if (VAR_9)
  goto fail;




 if (VAR_8->vfid == VAR_1) {
  VAR_9 = FUNC_4(VAR_2, VAR_8->rel.stats_id,
      &VAR_8->abs.stats_id);
  if (VAR_9)
   goto fail;
 } else {
  VAR_8->abs.stats_id = VAR_8->rel.stats_id;
 }

out:



 if (!VAR_7) {
  if (!FUNC_2(VAR_2, VAR_8))
   goto fail;
 } else {
  VAR_8->qid_usage_idx = VAR_7->qid_usage_idx;
 }

 FUNC_0(VAR_2,
     VAR_0,
     "opaque_fid: %04x CID %08x vport %02x [%02x] qzone %04x.%02x [%04x] stats %02x [%02x] SB %04x PI %02x\n",
     VAR_8->opaque_fid,
     VAR_8->cid,
     VAR_8->rel.vport_id,
     VAR_8->abs.vport_id,
     VAR_8->rel.queue_id,
     VAR_8->qid_usage_idx,
     VAR_8->abs.queue_id,
     VAR_8->rel.stats_id,
     VAR_8->abs.stats_id, VAR_8->sb_igu_id, VAR_8->sb_idx);

 return VAR_8;

fail:
 FUNC_5(VAR_8);
 return ((void*)0);
}
