
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gfs2_trans {int tr_num_revoke; int tr_flags; } ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_bufdata {int bd_list; } ;
struct TYPE_2__ {struct gfs2_trans* journal_info; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct gfs2_sbd*,struct gfs2_bufdata*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;

void FUNC_4(struct gfs2_sbd *VAR_2, struct gfs2_bufdata *VAR_3)
{
 struct gfs2_trans *VAR_4 = VAR_1->journal_info;

 FUNC_0(!FUNC_2(&VAR_3->bd_list));
 FUNC_1(VAR_2, VAR_3);
 FUNC_3(VAR_0, &VAR_4->tr_flags);
 VAR_4->tr_num_revoke++;
}
