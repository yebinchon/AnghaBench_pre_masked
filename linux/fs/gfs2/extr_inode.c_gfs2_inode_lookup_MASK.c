
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct super_block {int dummy; } ;
struct TYPE_2__ {long long tv_sec; scalar_t__ tv_nsec; } ;
struct inode {int i_state; TYPE_1__ i_atime; int i_mode; } ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_holder {struct gfs2_glock* gh_gl; int gh_flags; } ;
struct gfs2_inode {struct gfs2_glock* i_gl; struct gfs2_holder i_iopen_gh; int i_flags; int i_no_formal_ino; } ;
struct gfs2_glock {int gl_work; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 struct inode* FUNC_1 (int) ;
 unsigned int VAR_3 ;
 struct gfs2_inode* FUNC_2 (struct inode*) ;
 struct gfs2_sbd* FUNC_3 (struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct gfs2_sbd*,int ,unsigned int) ;
 int FUNC_6 (struct gfs2_holder*) ;
 int FUNC_7 (struct gfs2_sbd*,int ,int *,int ,struct gfs2_glock**) ;
 int FUNC_8 (struct gfs2_glock*,int ,int ,struct gfs2_holder*) ;
 int FUNC_9 (struct gfs2_glock*) ;
 scalar_t__ FUNC_10 (struct gfs2_holder*) ;
 int FUNC_11 (struct gfs2_holder*) ;
 struct inode* FUNC_12 (struct super_block*,int ) ;
 int VAR_11 ;
 int FUNC_13 (struct gfs2_inode*) ;
 int VAR_12 ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct gfs2_glock*,struct gfs2_inode*) ;
 int FUNC_16 (struct gfs2_glock*,struct gfs2_inode*) ;
 int FUNC_17 (struct inode*) ;
 int FUNC_18 (int ,int *) ;
 scalar_t__ FUNC_19 (int) ;
 int FUNC_20 (struct inode*) ;

struct inode *FUNC_21(struct super_block *VAR_13, unsigned int VAR_14,
    u64 VAR_15, u64 VAR_16,
    unsigned int VAR_17)
{
 struct inode *VAR_18;
 struct gfs2_inode *VAR_19;
 struct gfs2_glock *VAR_20 = ((void*)0);
 struct gfs2_holder VAR_21;
 int VAR_22;

 FUNC_11(&VAR_21);
 VAR_18 = FUNC_12(VAR_13, VAR_15);
 if (!VAR_18)
  return FUNC_1(-VAR_2);

 VAR_19 = FUNC_2(VAR_18);

 if (VAR_18->i_state & VAR_8) {
  struct gfs2_sbd *VAR_23 = FUNC_3(VAR_18);
  VAR_19->i_no_formal_ino = VAR_16;

  VAR_22 = FUNC_7(VAR_23, VAR_15, &VAR_11, VAR_0, &VAR_19->i_gl);
  if (FUNC_19(VAR_22))
   goto fail;
  FUNC_4(&VAR_19->i_gl->gl_work);

  VAR_22 = FUNC_7(VAR_23, VAR_15, &VAR_12, VAR_0, &VAR_20);
  if (FUNC_19(VAR_22))
   goto fail_put;

  if (VAR_14 == VAR_1 || VAR_17 != VAR_3) {





   VAR_22 = FUNC_8(VAR_19->i_gl, VAR_9,
         VAR_7, &VAR_21);
   if (VAR_22)
    goto fail_put;

   if (VAR_17 != VAR_3) {
    VAR_22 = FUNC_5(VAR_23, VAR_15,
           VAR_17);
    if (VAR_22)
     goto fail_put;
   }
  }

  FUNC_16(VAR_19->i_gl, VAR_19);
  FUNC_18(VAR_4, &VAR_19->i_flags);
  VAR_22 = FUNC_8(VAR_20, VAR_10, VAR_5, &VAR_19->i_iopen_gh);
  if (FUNC_19(VAR_22))
   goto fail_put;
  FUNC_16(VAR_19->i_iopen_gh.gh_gl, VAR_19);
  FUNC_9(VAR_20);
  VAR_20 = ((void*)0);

  if (VAR_14 == VAR_1) {

   VAR_22 = FUNC_13(FUNC_2(VAR_18));
   if (VAR_22)
    goto fail_refresh;
  } else {
   VAR_18->i_mode = FUNC_0(VAR_14);
  }

  FUNC_14(VAR_18);


  VAR_18->i_atime.tv_sec = 1LL << (8 * sizeof(VAR_18->i_atime.tv_sec) - 1);
  VAR_18->i_atime.tv_nsec = 0;

  FUNC_20(VAR_18);
 }

 if (FUNC_10(&VAR_21))
  FUNC_6(&VAR_21);
 return VAR_18;

fail_refresh:
 VAR_19->i_iopen_gh.gh_flags |= VAR_6;
 FUNC_15(VAR_19->i_iopen_gh.gh_gl, VAR_19);
 FUNC_6(&VAR_19->i_iopen_gh);
fail_put:
 if (VAR_20)
  FUNC_9(VAR_20);
 FUNC_15(VAR_19->i_gl, VAR_19);
 if (FUNC_10(&VAR_21))
  FUNC_6(&VAR_21);
fail:
 FUNC_17(VAR_18);
 return FUNC_1(VAR_22);
}
