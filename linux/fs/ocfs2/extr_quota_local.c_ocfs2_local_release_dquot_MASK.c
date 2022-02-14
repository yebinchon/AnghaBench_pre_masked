
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct ocfs2_local_disk_chunk {int dqc_free; int dqc_bitmap; } ;
struct ocfs2_dquot {TYPE_2__* dq_chunk; int dq_local_off; } ;
struct TYPE_8__ {int type; } ;
struct dquot {struct super_block* dq_sb; TYPE_1__ dq_id; } ;
typedef int handle_t ;
struct TYPE_11__ {int * files; } ;
struct TYPE_10__ {scalar_t__ b_data; } ;
struct TYPE_9__ {TYPE_3__* qc_headerbh; int qc_num; } ;


 int FUNC_0 (int ) ;
 struct ocfs2_dquot* FUNC_1 (struct dquot*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int ,TYPE_3__*,int ) ;
 int FUNC_7 (int *,TYPE_3__*) ;
 int FUNC_8 (struct super_block*,int ,int ) ;
 TYPE_4__* FUNC_9 (struct super_block*) ;
 int FUNC_10 (TYPE_3__*) ;

int FUNC_11(handle_t *VAR_1, struct dquot *VAR_2)
{
 int VAR_3;
 int VAR_4 = VAR_2->dq_id.type;
 struct ocfs2_dquot *VAR_5 = FUNC_1(VAR_2);
 struct super_block *VAR_6 = VAR_2->dq_sb;
 struct ocfs2_local_disk_chunk *VAR_7;
 int VAR_8;

 VAR_3 = FUNC_6(VAR_1,
   FUNC_0(FUNC_9(VAR_6)->files[VAR_4]),
   VAR_5->dq_chunk->qc_headerbh, VAR_0);
 if (VAR_3 < 0) {
  FUNC_4(VAR_3);
  goto out;
 }
 VAR_8 = FUNC_8(VAR_6, VAR_5->dq_chunk->qc_num,
          VAR_5->dq_local_off);
 VAR_7 = (struct ocfs2_local_disk_chunk *)
   (VAR_5->dq_chunk->qc_headerbh->b_data);

 FUNC_3(VAR_5->dq_chunk->qc_headerbh);
 FUNC_5(VAR_8, VAR_7->dqc_bitmap);
 FUNC_2(&VAR_7->dqc_free, 1);
 FUNC_10(VAR_5->dq_chunk->qc_headerbh);
 FUNC_7(VAR_1, VAR_5->dq_chunk->qc_headerbh);

out:
 return VAR_3;
}
