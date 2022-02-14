
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {struct gfs2_sbd* s_fs_info; } ;
struct address_space {int dummy; } ;
struct inode {struct address_space i_data; int i_mode; scalar_t__ i_nlink; struct super_block* i_sb; } ;
struct gfs2_sbd {TYPE_1__* sd_jdesc; } ;
struct gfs2_holder {int gh_flags; struct gfs2_glock* gh_gl; int gh_iflags; } ;
struct gfs2_inode {int i_diskflags; struct gfs2_holder i_iopen_gh; struct gfs2_glock* i_gl; int i_flags; int i_res; scalar_t__ i_eattr; int i_no_addr; } ;
struct gfs2_glock {int gl_flags; } ;
struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int jd_blocks; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gfs2_inode* FUNC_1 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_17 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct inode*) ;
 TYPE_2__* VAR_18 ;
 int FUNC_5 (struct address_space*) ;
 int FUNC_6 (struct address_space*) ;
 int FUNC_7 (struct gfs2_sbd*,char*,int) ;
 int FUNC_8 (struct gfs2_glock*,int ) ;
 int FUNC_9 (struct gfs2_sbd*,int ,int ) ;
 int FUNC_10 (struct gfs2_inode*) ;
 int FUNC_11 (struct gfs2_inode*) ;
 int FUNC_12 (struct gfs2_inode*) ;
 int FUNC_13 (struct gfs2_inode*) ;
 int FUNC_14 (struct gfs2_inode*) ;
 struct address_space* FUNC_15 (struct gfs2_glock*) ;
 int FUNC_16 (struct gfs2_glock*) ;
 int FUNC_17 (struct gfs2_holder*) ;
 int FUNC_18 (struct gfs2_holder*) ;
 int FUNC_19 (struct gfs2_holder*) ;
 int FUNC_20 (struct gfs2_glock*) ;
 int FUNC_21 (struct gfs2_glock*) ;
 int FUNC_22 (struct gfs2_holder*) ;
 int FUNC_23 (struct gfs2_glock*,int ,int ,struct gfs2_holder*) ;
 int FUNC_24 (struct gfs2_glock*) ;
 scalar_t__ FUNC_25 (struct gfs2_holder*) ;
 int FUNC_26 (struct gfs2_holder*) ;
 int FUNC_27 (int ,int,struct gfs2_holder*) ;
 int FUNC_28 (struct gfs2_holder*) ;
 int FUNC_29 (struct gfs2_inode*) ;
 int FUNC_30 (struct gfs2_inode*) ;
 int FUNC_31 (struct gfs2_sbd*,struct gfs2_glock*,int) ;
 int FUNC_32 (struct gfs2_inode*) ;
 scalar_t__ FUNC_33 (int *) ;
 int FUNC_34 (int *) ;
 int FUNC_35 (struct gfs2_inode*,int *) ;
 int FUNC_36 (struct gfs2_sbd*,int ,int ) ;
 int FUNC_37 (struct gfs2_sbd*) ;
 int FUNC_38 (struct gfs2_glock*,struct gfs2_inode*) ;
 scalar_t__ FUNC_39 (struct super_block*) ;
 scalar_t__ FUNC_40 (int ,int *) ;
 int FUNC_41 (struct address_space*,int ) ;
 int FUNC_42 (struct address_space*) ;
 scalar_t__ FUNC_43 (int) ;
 int FUNC_44 (int *,int ,int ) ;
 int FUNC_45 (struct inode*,int) ;

__attribute__((used)) static void FUNC_46(struct inode *VAR_19)
{
 struct super_block *VAR_20 = VAR_19->i_sb;
 struct gfs2_sbd *VAR_21 = VAR_20->s_fs_info;
 struct gfs2_inode *VAR_22 = FUNC_1(VAR_19);
 struct gfs2_holder VAR_23;
 struct address_space *VAR_24;
 int VAR_25;

 if (FUNC_40(VAR_6, &VAR_22->i_flags)) {
  FUNC_4(VAR_19);
  return;
 }

 if (VAR_19->i_nlink || FUNC_39(VAR_20))
  goto out;

 if (FUNC_40(VAR_5, &VAR_22->i_flags)) {
  FUNC_0(!FUNC_21(VAR_22->i_gl));
  FUNC_26(&VAR_23);
  goto alloc_failed;
 }


 if (FUNC_3(VAR_18->flags & VAR_16))
  goto out;


 VAR_25 = FUNC_23(VAR_22->i_gl, VAR_15, VAR_12, &VAR_23);
 if (FUNC_43(VAR_25)) {
  FUNC_38(VAR_22->i_iopen_gh.gh_gl, VAR_22);
  VAR_22->i_iopen_gh.gh_flags |= VAR_11;
  FUNC_18(&VAR_22->i_iopen_gh);
  goto out;
 }

 VAR_25 = FUNC_9(VAR_21, VAR_22->i_no_addr, VAR_1);
 if (VAR_25)
  goto out_truncate;

 if (FUNC_40(VAR_8, &VAR_22->i_flags)) {
  VAR_25 = FUNC_29(VAR_22);
  if (VAR_25)
   goto out_truncate;
 }




 if (VAR_19->i_nlink)
  goto out_truncate;

alloc_failed:
 if (FUNC_25(&VAR_22->i_iopen_gh) &&
     FUNC_40(VAR_13, &VAR_22->i_iopen_gh.gh_iflags)) {
  VAR_22->i_iopen_gh.gh_flags |= VAR_11;
  FUNC_19(&VAR_22->i_iopen_gh);
  FUNC_27(VAR_15, VAR_14 | VAR_11,
       &VAR_22->i_iopen_gh);
  VAR_25 = FUNC_22(&VAR_22->i_iopen_gh);
  if (VAR_25)
   goto out_truncate;
 }

 if (FUNC_2(VAR_19->i_mode) &&
     (VAR_22->i_diskflags & VAR_2)) {
  VAR_25 = FUNC_11(VAR_22);
  if (VAR_25)
   goto out_unlock;
 }

 if (VAR_22->i_eattr) {
  VAR_25 = FUNC_13(VAR_22);
  if (VAR_25)
   goto out_unlock;
 }

 if (!FUNC_30(VAR_22)) {
  VAR_25 = FUNC_14(VAR_22);
  if (VAR_25)
   goto out_unlock;
 }





 FUNC_38(VAR_22->i_gl, VAR_22);
 VAR_25 = FUNC_10(VAR_22);
 goto out_unlock;

out_truncate:
 FUNC_31(VAR_21, VAR_22->i_gl, VAR_4 |
         VAR_3);
 VAR_24 = FUNC_15(VAR_22->i_gl);
 if (FUNC_40(VAR_9, &VAR_22->i_gl->gl_flags)) {
  FUNC_6(VAR_24);
  FUNC_5(VAR_24);
 }
 FUNC_45(VAR_19, 1);
 FUNC_8(VAR_22->i_gl, 0);

 VAR_25 = FUNC_36(VAR_21, 0, VAR_21->sd_jdesc->jd_blocks);
 if (VAR_25)
  goto out_unlock;

 FUNC_41(&VAR_19->i_data, 0);
 FUNC_41(VAR_24, 0);
 FUNC_37(VAR_21);

out_unlock:
 if (FUNC_33(&VAR_22->i_res))
  FUNC_34(&VAR_22->i_res);

 if (FUNC_25(&VAR_22->i_iopen_gh)) {
  FUNC_38(VAR_22->i_iopen_gh.gh_gl, VAR_22);
  if (FUNC_40(VAR_13, &VAR_22->i_iopen_gh.gh_iflags)) {
   VAR_22->i_iopen_gh.gh_flags |= VAR_11;
   FUNC_17(&VAR_22->i_iopen_gh);
  }
  FUNC_28(&VAR_22->i_iopen_gh);
 }
 if (FUNC_25(&VAR_23)) {
  FUNC_38(VAR_22->i_gl, VAR_22);
  FUNC_18(&VAR_23);
 }
 if (VAR_25 && VAR_25 != VAR_10 && VAR_25 != -VAR_0)
  FUNC_7(VAR_21, "gfs2_evict_inode: %d\n", VAR_25);
out:
 FUNC_42(&VAR_19->i_data);
 FUNC_35(VAR_22, ((void*)0));
 FUNC_32(VAR_22);
 FUNC_4(VAR_19);
 FUNC_12(VAR_22);
 FUNC_38(VAR_22->i_gl, VAR_22);
 FUNC_44(&VAR_22->i_flags, VAR_7, VAR_17);
 FUNC_16(VAR_22->i_gl);
 FUNC_24(VAR_22->i_gl);
 VAR_22->i_gl = ((void*)0);
 if (FUNC_25(&VAR_22->i_iopen_gh)) {
  struct gfs2_glock *VAR_26 = VAR_22->i_iopen_gh.gh_gl;

  FUNC_38(VAR_26, VAR_22);
  VAR_22->i_iopen_gh.gh_flags |= VAR_11;
  FUNC_20(VAR_26);
  FUNC_18(&VAR_22->i_iopen_gh);
  FUNC_24(VAR_26);
 }
}
