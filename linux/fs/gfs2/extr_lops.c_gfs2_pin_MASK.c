
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gfs2_sbd {int sd_log_pinned; int sd_ail_lock; } ;
struct gfs2_bufdata {TYPE_1__* bd_tr; int bd_ail_st_list; } ;
struct buffer_head {struct gfs2_bufdata* b_private; } ;
struct TYPE_4__ {int journal_info; } ;
struct TYPE_3__ {int tr_ail2_list; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (struct buffer_head*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct gfs2_sbd*,int ) ;
 int FUNC_6 (struct gfs2_sbd*,struct buffer_head*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (struct buffer_head*) ;
 int FUNC_11 (struct gfs2_bufdata*,int) ;

void FUNC_12(struct gfs2_sbd *VAR_1, struct buffer_head *VAR_2)
{
 struct gfs2_bufdata *VAR_3;

 FUNC_0(!VAR_0->journal_info);

 FUNC_3(VAR_2);
 if (FUNC_10(VAR_2))
  FUNC_5(VAR_1, 0);
 if (!FUNC_2(VAR_2))
  FUNC_6(VAR_1, VAR_2);
 VAR_3 = VAR_2->b_private;



 FUNC_8(&VAR_1->sd_ail_lock);
 if (VAR_3->bd_tr)
  FUNC_7(&VAR_3->bd_ail_st_list, &VAR_3->bd_tr->tr_ail2_list);
 FUNC_9(&VAR_1->sd_ail_lock);
 FUNC_4(VAR_2);
 FUNC_1(&VAR_1->sd_log_pinned);
 FUNC_11(VAR_3, 1);
}
