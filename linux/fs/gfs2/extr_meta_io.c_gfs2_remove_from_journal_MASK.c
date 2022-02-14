
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gfs2_trans {int tr_flags; int tr_num_databuf_rm; int tr_num_buf_rm; } ;
struct gfs2_sbd {int sd_ail_lock; int sd_log_pinned; } ;
struct gfs2_bufdata {scalar_t__ bd_tr; int bd_list; } ;
struct buffer_head {struct gfs2_bufdata* b_private; TYPE_1__* b_page; } ;
struct address_space {int dummy; } ;
struct TYPE_4__ {struct gfs2_trans* journal_info; } ;
struct TYPE_3__ {struct address_space* mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 struct gfs2_sbd* FUNC_4 (struct address_space*) ;
 int FUNC_5 (struct gfs2_sbd*,struct gfs2_bufdata*) ;
 int FUNC_6 (int ,struct gfs2_bufdata*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (struct buffer_head*) ;
 int FUNC_12 (struct gfs2_bufdata*,int ) ;

void FUNC_13(struct buffer_head *VAR_4, int VAR_5)
{
 struct address_space *VAR_6 = VAR_4->b_page->mapping;
 struct gfs2_sbd *VAR_7 = FUNC_4(VAR_6);
 struct gfs2_bufdata *VAR_8 = VAR_4->b_private;
 struct gfs2_trans *VAR_9 = VAR_2->journal_info;
 int VAR_10 = 0;

 if (FUNC_11(VAR_4)) {
  FUNC_12(VAR_8, 0);
  FUNC_0(&VAR_7->sd_log_pinned);
  FUNC_7(&VAR_8->bd_list);
  if (VAR_5 == VAR_0)
   VAR_9->tr_num_buf_rm++;
  else
   VAR_9->tr_num_databuf_rm++;
  FUNC_8(VAR_1, &VAR_9->tr_flags);
  VAR_10 = 1;
  FUNC_1(VAR_4);
 }
 if (VAR_8) {
  FUNC_9(&VAR_7->sd_ail_lock);
  if (VAR_8->bd_tr) {
   FUNC_5(VAR_7, VAR_8);
  } else if (VAR_10) {
   VAR_4->b_private = ((void*)0);
   FUNC_6(VAR_3, VAR_8);
  }
  FUNC_10(&VAR_7->sd_ail_lock);
 }
 FUNC_2(VAR_4);
 FUNC_3(VAR_4);
}
