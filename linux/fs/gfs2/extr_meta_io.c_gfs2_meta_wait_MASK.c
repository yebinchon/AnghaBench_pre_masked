
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_trans {int tr_flags; } ;
struct gfs2_sbd {int sd_flags; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {struct gfs2_trans* journal_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct buffer_head*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (struct gfs2_sbd*,struct buffer_head*) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct buffer_head*) ;

int FUNC_5(struct gfs2_sbd *VAR_4, struct buffer_head *VAR_5)
{
 if (FUNC_3(FUNC_2(VAR_1, &VAR_4->sd_flags)))
  return -VAR_0;

 FUNC_4(VAR_5);

 if (!FUNC_0(VAR_5)) {
  struct gfs2_trans *VAR_6 = VAR_3->journal_info;
  if (VAR_6 && FUNC_2(VAR_2, &VAR_6->tr_flags))
   FUNC_1(VAR_4, VAR_5);
  return -VAR_0;
 }
 if (FUNC_3(FUNC_2(VAR_1, &VAR_4->sd_flags)))
  return -VAR_0;

 return 0;
}
