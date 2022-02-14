
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gfs2_trans {int tr_databuf; int tr_num_databuf_new; int tr_flags; } ;
struct gfs2_sbd {int dummy; } ;
struct TYPE_3__ {struct gfs2_sbd* ln_sbd; } ;
struct gfs2_glock {int gl_flags; TYPE_1__ gl_name; } ;
struct gfs2_bufdata {int bd_list; int bd_bh; struct gfs2_glock* bd_gl; } ;
struct buffer_head {struct gfs2_bufdata* b_private; } ;
struct TYPE_4__ {struct gfs2_trans* journal_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct buffer_head*) ;
 TYPE_2__* VAR_3 ;
 struct gfs2_bufdata* FUNC_1 (struct gfs2_glock*,struct buffer_head*) ;
 int FUNC_2 (struct gfs2_sbd*,int) ;
 int FUNC_3 (struct gfs2_sbd*) ;
 int FUNC_4 (struct gfs2_sbd*) ;
 int FUNC_5 (struct gfs2_sbd*,int ) ;
 int FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (struct buffer_head*) ;

void FUNC_11(struct gfs2_glock *VAR_4, struct buffer_head *VAR_5)
{
 struct gfs2_trans *VAR_6 = VAR_3->journal_info;
 struct gfs2_sbd *VAR_7 = VAR_4->gl_name.ln_sbd;
 struct gfs2_bufdata *VAR_8;

 FUNC_8(VAR_5);
 if (FUNC_0(VAR_5)) {
  FUNC_9(VAR_2, &VAR_6->tr_flags);
  goto out;
 }
 FUNC_3(VAR_7);
 VAR_8 = VAR_5->b_private;
 if (VAR_8 == ((void*)0)) {
  FUNC_4(VAR_7);
  FUNC_10(VAR_5);
  if (VAR_5->b_private == ((void*)0))
   VAR_8 = FUNC_1(VAR_4, VAR_5);
  else
   VAR_8 = VAR_5->b_private;
  FUNC_8(VAR_5);
  FUNC_3(VAR_7);
 }
 FUNC_2(VAR_7, VAR_8->bd_gl == VAR_4);
 FUNC_9(VAR_2, &VAR_6->tr_flags);
 if (FUNC_7(&VAR_8->bd_list)) {
  FUNC_9(VAR_1, &VAR_8->bd_gl->gl_flags);
  FUNC_9(VAR_0, &VAR_8->bd_gl->gl_flags);
  FUNC_5(VAR_7, VAR_8->bd_bh);
  VAR_6->tr_num_databuf_new++;
  FUNC_6(&VAR_8->bd_list, &VAR_6->tr_databuf);
 }
 FUNC_4(VAR_7);
out:
 FUNC_10(VAR_5);
}
