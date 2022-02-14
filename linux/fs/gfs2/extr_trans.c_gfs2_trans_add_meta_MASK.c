
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct gfs2_trans {int tr_num_buf_new; int tr_buf; int tr_flags; } ;
struct gfs2_sbd {TYPE_2__* sd_jdesc; int sd_freeze_state; } ;
struct gfs2_meta_header {int mh_jid; int __pad0; int mh_magic; } ;
struct TYPE_5__ {struct gfs2_sbd* ln_sbd; } ;
struct gfs2_glock {int gl_flags; TYPE_1__ gl_name; } ;
struct gfs2_bufdata {int bd_list; TYPE_3__* bd_bh; struct gfs2_glock* bd_gl; } ;
struct buffer_head {int b_page; struct gfs2_bufdata* b_private; } ;
typedef enum gfs2_freeze_state { ____Placeholder_gfs2_freeze_state } gfs2_freeze_state ;
struct TYPE_8__ {struct gfs2_trans* journal_info; } ;
struct TYPE_7__ {scalar_t__ b_blocknr; scalar_t__ b_data; } ;
struct TYPE_6__ {int jd_jid; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 TYPE_4__* VAR_5 ;
 int FUNC_5 (struct gfs2_sbd*,char*,unsigned long long) ;
 int FUNC_6 (struct gfs2_sbd*,char*) ;
 struct gfs2_bufdata* FUNC_7 (struct gfs2_glock*,struct buffer_head*) ;
 int FUNC_8 (struct gfs2_sbd*,int) ;
 int FUNC_9 (struct gfs2_sbd*,int ) ;
 int FUNC_10 (struct gfs2_sbd*) ;
 int FUNC_11 (struct gfs2_sbd*) ;
 int FUNC_12 (struct gfs2_sbd*,TYPE_3__*) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct buffer_head*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int *) ;
 scalar_t__ FUNC_18 (int) ;
 int FUNC_19 (struct buffer_head*) ;
 int FUNC_20 (int ) ;

void FUNC_21(struct gfs2_glock *VAR_6, struct buffer_head *VAR_7)
{

 struct gfs2_sbd *VAR_8 = VAR_6->gl_name.ln_sbd;
 struct gfs2_bufdata *VAR_9;
 struct gfs2_meta_header *VAR_10;
 struct gfs2_trans *VAR_11 = VAR_5->journal_info;
 enum gfs2_freeze_state VAR_12 = FUNC_1(&VAR_8->sd_freeze_state);

 FUNC_15(VAR_7);
 if (FUNC_2(VAR_7)) {
  FUNC_17(VAR_4, &VAR_11->tr_flags);
  goto out;
 }
 FUNC_10(VAR_8);
 VAR_9 = VAR_7->b_private;
 if (VAR_9 == ((void*)0)) {
  FUNC_11(VAR_8);
  FUNC_19(VAR_7);
  FUNC_16(VAR_7->b_page);
  if (VAR_7->b_private == ((void*)0))
   VAR_9 = FUNC_7(VAR_6, VAR_7);
  else
   VAR_9 = VAR_7->b_private;
  FUNC_20(VAR_7->b_page);
  FUNC_15(VAR_7);
  FUNC_10(VAR_8);
 }
 FUNC_8(VAR_8, VAR_9->bd_gl == VAR_6);
 FUNC_17(VAR_4, &VAR_11->tr_flags);
 if (!FUNC_14(&VAR_9->bd_list))
  goto out_unlock;
 FUNC_17(VAR_2, &VAR_9->bd_gl->gl_flags);
 FUNC_17(VAR_1, &VAR_9->bd_gl->gl_flags);
 VAR_10 = (struct gfs2_meta_header *)VAR_9->bd_bh->b_data;
 if (FUNC_18(VAR_10->mh_magic != FUNC_3(VAR_0))) {
  FUNC_5(VAR_8, "Attempting to add uninitialised block to "
         "journal (inplace block=%lld)\n",
         (unsigned long long)VAR_9->bd_bh->b_blocknr);
  FUNC_0();
 }
 if (FUNC_18(VAR_12 == VAR_3)) {
  FUNC_6(VAR_8, "GFS2:adding buf while frozen\n");
  FUNC_9(VAR_8, 0);
 }
 FUNC_12(VAR_8, VAR_9->bd_bh);
 VAR_10->__pad0 = FUNC_4(0);
 VAR_10->mh_jid = FUNC_3(VAR_8->sd_jdesc->jd_jid);
 FUNC_13(&VAR_9->bd_list, &VAR_11->tr_buf);
 VAR_11->tr_num_buf_new++;
out_unlock:
 FUNC_11(VAR_8);
out:
 FUNC_19(VAR_7);
}
