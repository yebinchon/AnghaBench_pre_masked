
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct super_block {int s_blocksize_bits; } ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_mem_dqinfo {int dqi_gi; struct inode* dqi_gqinode; } ;
struct inode {int dummy; } ;
struct TYPE_6__ {int dqb_curinodes; int dqb_curspace; } ;
struct TYPE_8__ {int type; } ;
struct dquot {int dq_lock; int dq_flags; int dq_off; TYPE_1__ dq_dqb; TYPE_4__ dq_id; struct super_block* dq_sb; } ;
typedef int handle_t ;
struct TYPE_9__ {int dq_originodes; int dq_origspace; int dq_use_count; } ;
struct TYPE_7__ {struct ocfs2_mem_dqinfo* dqi_priv; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 TYPE_5__* FUNC_1 (struct dquot*) ;
 struct ocfs2_super* FUNC_2 (struct super_block*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct super_block*,int) ;
 int FUNC_6 (int *,TYPE_4__) ;
 scalar_t__ FUNC_7 (struct inode*) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_9 () ;
 int FUNC_10 (int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct super_block*,int) ;
 int FUNC_14 (struct ocfs2_super*,int *) ;
 int FUNC_15 (struct dquot*) ;
 int FUNC_16 (struct inode*,int *,scalar_t__,scalar_t__) ;
 int FUNC_17 (struct super_block*,int) ;
 int FUNC_18 (struct ocfs2_mem_dqinfo*,int) ;
 int FUNC_19 (struct ocfs2_mem_dqinfo*,int) ;
 int FUNC_20 (struct ocfs2_mem_dqinfo*,int) ;
 int * FUNC_21 (struct ocfs2_super*,int ) ;
 int FUNC_22 (struct ocfs2_mem_dqinfo*,int) ;
 int FUNC_23 (int *,struct dquot*) ;
 int FUNC_24 (int *,struct dquot*) ;
 TYPE_2__* FUNC_25 (struct super_block*,int) ;
 int FUNC_26 (int ,int *) ;
 int FUNC_27 (int ,int) ;

__attribute__((used)) static int FUNC_28(struct dquot *VAR_2)
{
 int VAR_3 = 0, VAR_4;
 int VAR_5 = 0;
 struct super_block *VAR_6 = VAR_2->dq_sb;
 struct ocfs2_super *VAR_7 = FUNC_2(VAR_6);
 int VAR_8 = VAR_2->dq_id.type;
 struct ocfs2_mem_dqinfo *VAR_9 = FUNC_25(VAR_6, VAR_8)->dqi_priv;
 struct inode *VAR_10 = VAR_9->dqi_gqinode;
 int VAR_11 = FUNC_17(VAR_6, VAR_8);
 handle_t *VAR_12;

 FUNC_27(FUNC_6(&VAR_1, VAR_2->dq_id),
      VAR_8);
 FUNC_11(&VAR_2->dq_lock);




 VAR_3 = FUNC_18(VAR_9, 1);
 if (VAR_3 < 0)
  goto out;
 VAR_3 = FUNC_19(VAR_9, 0);
 if (VAR_3 < 0)
  goto out_dq;




 VAR_3 = FUNC_23(&VAR_9->dqi_gi, VAR_2);
 FUNC_20(VAR_9, 0);
 if (VAR_3 < 0)
  goto out_dq;

 FUNC_1(VAR_2)->dq_use_count++;
 FUNC_1(VAR_2)->dq_origspace = VAR_2->dq_dqb.dqb_curspace;
 FUNC_1(VAR_2)->dq_originodes = VAR_2->dq_dqb.dqb_curinodes;
 if (!VAR_2->dq_off) {
  VAR_5 = 1;




  FUNC_4(FUNC_9());
  VAR_3 = FUNC_16(VAR_10, ((void*)0),
   FUNC_7(VAR_10) + (VAR_11 << VAR_6->s_blocksize_bits),
   FUNC_7(VAR_10));
  if (VAR_3 < 0)
   goto out_dq;
 }

 VAR_12 = FUNC_21(VAR_7,
       FUNC_13(VAR_6, VAR_8));
 if (FUNC_0(VAR_12)) {
  VAR_3 = FUNC_3(VAR_12);
  goto out_dq;
 }
 VAR_3 = FUNC_19(VAR_9, VAR_5);
 if (VAR_3 < 0)
  goto out_trans;
 VAR_3 = FUNC_24(&VAR_9->dqi_gi, VAR_2);
 if (VAR_5 && FUNC_8(FUNC_25(VAR_6, VAR_8))) {
  VAR_4 = FUNC_5(VAR_6, VAR_8);
  if (!VAR_3)
   VAR_3 = VAR_4;
 }
 FUNC_20(VAR_9, VAR_5);
out_trans:
 FUNC_14(VAR_7, VAR_12);
out_dq:
 FUNC_22(VAR_9, 1);
 if (VAR_3 < 0)
  goto out;

 VAR_3 = FUNC_15(VAR_2);
 if (VAR_3 < 0)
  goto out;
 FUNC_26(VAR_0, &VAR_2->dq_flags);
out:
 FUNC_12(&VAR_2->dq_lock);
 if (VAR_3)
  FUNC_10(VAR_3);
 return VAR_3;
}
