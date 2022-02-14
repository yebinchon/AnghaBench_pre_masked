
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_trans {int tr_ail1_list; } ;
struct gfs2_sbd {int sd_log_pinned; int sd_ail_lock; } ;
struct gfs2_glock {int gl_flags; int gl_ail_count; int gl_ail_list; } ;
struct gfs2_bufdata {struct gfs2_glock* bd_gl; int bd_ail_st_list; struct gfs2_trans* bd_tr; int bd_ail_gl_list; } ;
struct buffer_head {struct gfs2_bufdata* b_private; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct buffer_head*) ;
 scalar_t__ FUNC_4 (struct gfs2_bufdata*) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (struct buffer_head*) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct buffer_head*) ;
 int FUNC_12 (struct buffer_head*) ;
 int FUNC_13 (struct gfs2_bufdata*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct gfs2_bufdata*,int ) ;
 int FUNC_17 (struct buffer_head*) ;

__attribute__((used)) static void FUNC_18(struct gfs2_sbd *VAR_1, struct buffer_head *VAR_2,
         struct gfs2_trans *VAR_3)
{
 struct gfs2_bufdata *VAR_4 = VAR_2->b_private;

 FUNC_0(!FUNC_6(VAR_2));
 FUNC_0(!FUNC_5(VAR_2));

 FUNC_11(VAR_2);
 FUNC_12(VAR_2);
 FUNC_8(VAR_2);

 if (FUNC_4(VAR_4))
  FUNC_13(VAR_4);

 FUNC_14(&VAR_1->sd_ail_lock);
 if (VAR_4->bd_tr) {
  FUNC_10(&VAR_4->bd_ail_st_list);
  FUNC_3(VAR_2);
 } else {
  struct gfs2_glock *VAR_5 = VAR_4->bd_gl;
  FUNC_9(&VAR_4->bd_ail_gl_list, &VAR_5->gl_ail_list);
  FUNC_2(&VAR_5->gl_ail_count);
 }
 VAR_4->bd_tr = VAR_3;
 FUNC_9(&VAR_4->bd_ail_st_list, &VAR_3->tr_ail1_list);
 FUNC_15(&VAR_1->sd_ail_lock);

 FUNC_7(VAR_0, &VAR_4->bd_gl->gl_flags);
 FUNC_16(VAR_4, 0);
 FUNC_17(VAR_2);
 FUNC_1(&VAR_1->sd_log_pinned);
}
