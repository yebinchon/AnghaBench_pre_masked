
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gfs2_sbd {int sd_quota_inode; } ;
struct gfs2_quota_lvb {scalar_t__ qb_magic; } ;
struct gfs2_quota_data {TYPE_3__* qd_gl; struct gfs2_quota_lvb qd_qb; int qd_flags; } ;
struct gfs2_inode {TYPE_3__* i_gl; } ;
struct gfs2_holder {int dummy; } ;
struct TYPE_5__ {scalar_t__ sb_lvbptr; } ;
struct TYPE_4__ {struct gfs2_sbd* ln_sbd; } ;
struct TYPE_6__ {TYPE_2__ gl_lksb; TYPE_1__ gl_name; } ;


 int VAR_0 ;
 struct gfs2_inode* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct gfs2_holder*) ;
 int FUNC_3 (TYPE_3__*,int ,int ,struct gfs2_holder*) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (struct gfs2_sbd*,struct gfs2_quota_data*) ;

__attribute__((used)) static int FUNC_6(struct gfs2_quota_data *VAR_6, int VAR_7,
      struct gfs2_holder *VAR_8)
{
 struct gfs2_sbd *VAR_9 = VAR_6->qd_gl->gl_name.ln_sbd;
 struct gfs2_inode *VAR_10 = FUNC_0(VAR_9->sd_quota_inode);
 struct gfs2_holder VAR_11;
 int VAR_12;

restart:
 VAR_12 = FUNC_3(VAR_6->qd_gl, VAR_4, 0, VAR_8);
 if (VAR_12)
  return VAR_12;

 if (FUNC_4(VAR_5, &VAR_6->qd_flags))
  VAR_7 = VAR_0;

 VAR_6->qd_qb = *(struct gfs2_quota_lvb *)VAR_6->qd_gl->gl_lksb.sb_lvbptr;

 if (VAR_7 || VAR_6->qd_qb.qb_magic != FUNC_1(VAR_1)) {
  FUNC_2(VAR_8);
  VAR_12 = FUNC_3(VAR_6->qd_gl, VAR_3,
        VAR_2, VAR_8);
  if (VAR_12)
   return VAR_12;

  VAR_12 = FUNC_3(VAR_10->i_gl, VAR_4, 0, &VAR_11);
  if (VAR_12)
   goto fail;

  VAR_12 = FUNC_5(VAR_9, VAR_6);
  if (VAR_12)
   goto fail_gunlock;

  FUNC_2(&VAR_11);
  FUNC_2(VAR_8);
  VAR_7 = 0;
  goto restart;
 }

 return 0;

fail_gunlock:
 FUNC_2(&VAR_11);
fail:
 FUNC_2(VAR_8);
 return VAR_12;
}
