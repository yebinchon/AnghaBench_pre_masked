
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int tr ;
struct gfs2_trans {int tr_revokes; scalar_t__ tr_reserved; int tr_ip; int tr_databuf; int tr_buf; } ;
struct gfs2_sbd {int dummy; } ;
struct TYPE_3__ {struct gfs2_sbd* ln_sbd; } ;
struct gfs2_glock {int gl_ail_count; TYPE_1__ gl_name; } ;
struct TYPE_4__ {struct gfs2_trans* journal_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct gfs2_trans*) ;
 int VAR_2 ;
 int FUNC_2 (struct gfs2_glock*,int ,int ) ;
 int FUNC_3 (int *) ;
 TYPE_2__* VAR_3 ;
 int FUNC_4 (struct gfs2_sbd*,int *,int) ;
 scalar_t__ FUNC_5 (struct gfs2_sbd*,scalar_t__) ;
 scalar_t__ FUNC_6 (struct gfs2_sbd*,int ,int) ;
 int FUNC_7 (struct gfs2_sbd*) ;
 int FUNC_8 (struct gfs2_trans*,int ,int) ;

__attribute__((used)) static void FUNC_9(struct gfs2_glock *VAR_4)
{
 struct gfs2_sbd *VAR_5 = VAR_4->gl_name.ln_sbd;
 struct gfs2_trans VAR_6;

 FUNC_8(&VAR_6, 0, sizeof(VAR_6));
 FUNC_0(&VAR_6.tr_buf);
 FUNC_0(&VAR_6.tr_databuf);
 VAR_6.tr_revokes = FUNC_3(&VAR_4->gl_ail_count);

 if (!VAR_6.tr_revokes)
  return;




 VAR_6.tr_reserved = 1 + FUNC_6(VAR_5, VAR_6.tr_revokes, sizeof(u64));
 VAR_6.tr_ip = VAR_2;
 if (FUNC_5(VAR_5, VAR_6.tr_reserved) < 0)
  return;
 FUNC_1(VAR_3->journal_info);
 VAR_3->journal_info = &VAR_6;

 FUNC_2(VAR_4, 0, VAR_6.tr_revokes);

 FUNC_7(VAR_5);
 FUNC_4(VAR_5, ((void*)0), VAR_1 |
         VAR_0);
}
