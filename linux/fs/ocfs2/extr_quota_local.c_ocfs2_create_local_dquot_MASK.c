
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct super_block {int dummy; } ;
struct ocfs2_quota_chunk {int qc_headerbh; int qc_num; } ;
struct ocfs2_dquot {int dq_local_phys_blk; struct ocfs2_quota_chunk* dq_chunk; int dq_local_off; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {int type; } ;
struct dquot {TYPE_1__ dq_id; struct super_block* dq_sb; } ;
struct TYPE_6__ {int ip_alloc_sem; } ;
struct TYPE_5__ {struct inode** files; } ;


 scalar_t__ FUNC_0 (struct ocfs2_quota_chunk*) ;
 struct ocfs2_dquot* FUNC_1 (struct dquot*) ;
 TYPE_3__* FUNC_2 (struct inode*) ;
 int FUNC_3 (struct ocfs2_quota_chunk*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 struct ocfs2_quota_chunk* FUNC_6 (struct super_block*,int,int*) ;
 int FUNC_7 (struct inode*,int ,int *,int *,int *) ;
 struct ocfs2_quota_chunk* FUNC_8 (struct super_block*,int,int*) ;
 int FUNC_9 (struct dquot*) ;
 int FUNC_10 (struct inode*,int ,int ,int*) ;
 int FUNC_11 (struct super_block*,int ,int) ;
 int FUNC_12 (struct super_block*,int ,int) ;
 int VAR_0 ;
 TYPE_2__* FUNC_13 (struct super_block*) ;
 int FUNC_14 (int *) ;

int FUNC_15(struct dquot *VAR_1)
{
 struct super_block *VAR_2 = VAR_1->dq_sb;
 int VAR_3 = VAR_1->dq_id.type;
 struct inode *VAR_4 = FUNC_13(VAR_2)->files[VAR_3];
 struct ocfs2_quota_chunk *VAR_5;
 struct ocfs2_dquot *VAR_6 = FUNC_1(VAR_1);
 int VAR_7;
 int VAR_8;
 u64 VAR_9;

 FUNC_4(&FUNC_2(VAR_4)->ip_alloc_sem);
 VAR_5 = FUNC_8(VAR_2, VAR_3, &VAR_7);
 if (!VAR_5) {
  VAR_5 = FUNC_6(VAR_2, VAR_3, &VAR_7);
  if (FUNC_0(VAR_5)) {
   VAR_8 = FUNC_3(VAR_5);
   goto out;
  }
 } else if (FUNC_0(VAR_5)) {
  VAR_8 = FUNC_3(VAR_5);
  goto out;
 }
 VAR_6->dq_local_off = FUNC_12(VAR_2, VAR_5->qc_num, VAR_7);
 VAR_6->dq_chunk = VAR_5;
 VAR_8 = FUNC_7(VAR_4,
         FUNC_11(VAR_2, VAR_5->qc_num, VAR_7),
         &VAR_6->dq_local_phys_blk,
         &VAR_9,
         ((void*)0));


 VAR_8 = FUNC_9(VAR_1);
 if (VAR_8 < 0) {
  FUNC_5(VAR_8);
  goto out;
 }


 VAR_8 = FUNC_10(VAR_4, VAR_5->qc_headerbh, VAR_0,
     &VAR_7);
 if (VAR_8 < 0) {
  FUNC_5(VAR_8);
  goto out;
 }
out:
 FUNC_14(&FUNC_2(VAR_4)->ip_alloc_sem);
 return VAR_8;
}
