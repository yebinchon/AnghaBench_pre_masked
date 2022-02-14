
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gfs2_trans {scalar_t__ tr_num_buf_new; scalar_t__ tr_num_databuf_new; scalar_t__ tr_num_buf_rm; scalar_t__ tr_num_databuf_rm; scalar_t__ tr_blocks; scalar_t__ tr_num_revoke; scalar_t__ tr_revokes; int tr_flags; int tr_reserved; } ;
struct gfs2_sbd {TYPE_1__* sd_vfs; int sd_log_flush_lock; } ;
typedef scalar_t__ s64 ;
struct TYPE_4__ {struct gfs2_trans* journal_info; } ;
struct TYPE_3__ {int s_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 scalar_t__ FUNC_0 (struct gfs2_sbd*,int) ;
 int FUNC_1 (struct gfs2_sbd*,struct gfs2_trans*) ;
 int FUNC_2 (struct gfs2_sbd*,int *,int) ;
 int FUNC_3 (struct gfs2_sbd*,int ) ;
 int FUNC_4 (struct gfs2_sbd*,struct gfs2_trans*) ;
 int FUNC_5 (struct gfs2_trans*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct gfs2_sbd *VAR_7)
{
 struct gfs2_trans *VAR_8 = VAR_6->journal_info;
 s64 VAR_9;
 int VAR_10 = FUNC_7(VAR_3, &VAR_8->tr_flags);

 VAR_6->journal_info = ((void*)0);

 if (!FUNC_7(VAR_5, &VAR_8->tr_flags)) {
  FUNC_3(VAR_7, VAR_8->tr_reserved);
  if (VAR_10) {
   FUNC_5(VAR_8);
   FUNC_6(VAR_7->sd_vfs);
  }
  return;
 }

 VAR_9 = VAR_8->tr_num_buf_new + VAR_8->tr_num_databuf_new;
 VAR_9 -= VAR_8->tr_num_buf_rm;
 VAR_9 -= VAR_8->tr_num_databuf_rm;

 if (FUNC_0(VAR_7, (VAR_9 <= VAR_8->tr_blocks) &&
           (VAR_8->tr_num_revoke <= VAR_8->tr_revokes)))
  FUNC_4(VAR_7, VAR_8);

 FUNC_1(VAR_7, VAR_8);
 if (VAR_10 && !FUNC_7(VAR_4, &VAR_8->tr_flags))
  FUNC_5(VAR_8);
 FUNC_8(&VAR_7->sd_log_flush_lock);

 if (VAR_7->sd_vfs->s_flags & VAR_2)
  FUNC_2(VAR_7, ((void*)0), VAR_1 |
          VAR_0);
 if (VAR_10)
  FUNC_6(VAR_7->sd_vfs);
}
