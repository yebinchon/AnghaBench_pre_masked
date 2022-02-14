
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef int u32 ;
struct qstr {scalar_t__ len; } ;
struct posix_acl {int dummy; } ;
struct inode {int i_mode; unsigned int i_size; int i_ctime; int i_mtime; int i_atime; int i_rdev; } ;
struct gfs2_sbd {int sd_root_dir; int sd_vfs; } ;
struct gfs2_holder {struct gfs2_glock* gh_gl; } ;
struct gfs2_inode {int i_diskflags; int i_entries; int i_flags; struct gfs2_glock* i_gl; struct gfs2_holder i_iopen_gh; int i_inode; scalar_t__ i_no_addr; scalar_t__ i_eattr; scalar_t__ i_depth; scalar_t__ i_height; int i_goal; } ;
struct gfs2_glock {int gl_flags; int gl_work; } ;
struct gfs2_diradd {int save_loc; int * bh; } ;
struct file {int f_mode; } ;
struct dentry {struct qstr d_name; } ;
typedef int dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct inode* FUNC_1 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 struct gfs2_inode* FUNC_2 (struct inode*) ;
 struct gfs2_sbd* FUNC_3 (int *) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_6 (struct inode*) ;

 int VAR_21 ;

 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct inode*,struct posix_acl*,int ) ;
 int FUNC_10 (struct gfs2_inode*,int ,unsigned int*) ;
 int FUNC_11 (struct gfs2_inode*) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (struct gfs2_inode*,struct qstr const*,int) ;
 int FUNC_15 (struct inode*) ;
 struct inode* FUNC_16 (int ) ;
 int FUNC_17 (struct dentry*,struct inode*) ;
 int FUNC_18 (struct file*,int *) ;
 int FUNC_19 (struct file*,struct dentry*,int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (struct gfs2_diradd*) ;
 struct inode* FUNC_22 (struct inode*,struct qstr*,int) ;
 int FUNC_23 (struct inode*,struct qstr const*,struct gfs2_diradd*) ;
 int FUNC_24 (struct gfs2_holder*) ;
 int FUNC_25 (struct gfs2_sbd*,scalar_t__,int *,int ,struct gfs2_glock**) ;
 int FUNC_26 (struct gfs2_glock*,int ,int ,struct gfs2_holder*) ;
 int FUNC_27 (struct gfs2_glock*) ;
 scalar_t__ FUNC_28 (struct gfs2_holder*) ;
 int FUNC_29 (struct gfs2_holder*) ;
 int FUNC_30 (struct gfs2_inode*) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_31 (struct gfs2_sbd*) ;
 int FUNC_32 (struct gfs2_inode*) ;
 int FUNC_33 (struct gfs2_inode*,int *) ;
 int FUNC_34 (struct inode*) ;
 int FUNC_35 (struct inode*,unsigned int) ;
 int FUNC_36 (struct inode*) ;
 int FUNC_37 (struct inode*) ;
 int FUNC_38 (struct gfs2_sbd*,unsigned int,int ) ;
 int FUNC_39 (struct gfs2_sbd*) ;
 int FUNC_40 (struct gfs2_sbd*,int ) ;
 int FUNC_41 (struct gfs2_glock*,struct gfs2_inode*) ;
 int FUNC_42 (struct gfs2_glock*,struct gfs2_inode*) ;
 int VAR_26 ;
 int FUNC_43 (struct gfs2_inode*,struct gfs2_inode*,char const*) ;
 int FUNC_44 (struct inode*) ;
 int FUNC_45 (struct inode*) ;
 int FUNC_46 (struct gfs2_inode*,struct qstr const*,struct gfs2_inode*,struct gfs2_diradd*) ;
 int FUNC_47 (struct inode*) ;
 int FUNC_48 (struct gfs2_inode*,struct inode*) ;
 struct inode* FUNC_49 (int ) ;
 int FUNC_50 (struct inode*,int*,struct posix_acl**,struct posix_acl**) ;
 int FUNC_51 (struct posix_acl*) ;
 int FUNC_52 (int *,int *,struct qstr const*,int *,int *) ;
 int FUNC_53 (int ,int *) ;
 int FUNC_54 (struct inode*,int) ;
 int FUNC_55 (int ,int *) ;

__attribute__((used)) static int FUNC_56(struct inode *VAR_27, struct dentry *VAR_28,
        struct file *VAR_29,
        umode_t VAR_30, dev_t VAR_31, const char *VAR_32,
        unsigned int VAR_33, int VAR_34)
{
 const struct qstr *VAR_35 = &VAR_28->d_name;
 struct posix_acl *VAR_36, *VAR_37;
 struct gfs2_holder VAR_38[2];
 struct inode *VAR_39 = ((void*)0);
 struct gfs2_inode *VAR_40 = FUNC_2(VAR_27), *VAR_41;
 struct gfs2_sbd *VAR_42 = FUNC_3(&VAR_40->i_inode);
 struct gfs2_glock *VAR_43 = ((void*)0);
 int VAR_44, VAR_45 = 1;
 u32 VAR_46 = 0;
 unsigned VAR_47 = 1;
 struct gfs2_diradd VAR_48 = { .bh = ((void*)0), .save_loc = 1, };

 if (!VAR_35->len || VAR_35->len > VAR_13)
  return -VAR_4;

 VAR_44 = FUNC_32(VAR_40);
 if (VAR_44)
  return VAR_44;

 VAR_44 = FUNC_31(VAR_42);
 if (VAR_44)
  return VAR_44;

 VAR_44 = FUNC_26(VAR_40->i_gl, VAR_19, 0, VAR_38);
 if (VAR_44)
  goto fail;
 FUNC_29(VAR_38 + 1);

 VAR_44 = FUNC_14(VAR_40, VAR_35, VAR_30);
 if (VAR_44)
  goto fail_gunlock;

 VAR_39 = FUNC_22(VAR_27, &VAR_28->d_name, !FUNC_8(VAR_30) || VAR_34);
 VAR_44 = FUNC_6(VAR_39);
 if (!FUNC_4(VAR_39)) {
  if (FUNC_7(VAR_39->i_mode)) {
   FUNC_45(VAR_39);
   VAR_39 = FUNC_1(-VAR_3);
   goto fail_gunlock;
  }
  FUNC_17(VAR_28, VAR_39);
  VAR_44 = 0;
  if (VAR_29) {
   if (FUNC_8(VAR_39->i_mode))
    VAR_44 = FUNC_19(VAR_29, VAR_28, VAR_25);
   else
    VAR_44 = FUNC_18(VAR_29, ((void*)0));
  }
  FUNC_24(VAR_38);
  return VAR_44;
 } else if (VAR_44 != -VAR_5) {
  goto fail_gunlock;
 }

 VAR_44 = FUNC_23(VAR_27, VAR_35, &VAR_48);
 if (VAR_44 < 0)
  goto fail_gunlock;

 VAR_39 = FUNC_49(VAR_42->sd_vfs);
 VAR_44 = -VAR_6;
 if (!VAR_39)
  goto fail_gunlock;

 VAR_44 = FUNC_50(VAR_27, &VAR_30, &VAR_36, &VAR_37);
 if (VAR_44)
  goto fail_gunlock;

 VAR_41 = FUNC_2(VAR_39);
 VAR_44 = FUNC_32(VAR_41);
 if (VAR_44)
  goto fail_free_acls;

 VAR_39->i_mode = VAR_30;
 FUNC_54(VAR_39, FUNC_7(VAR_30) ? 2 : 1);
 VAR_39->i_rdev = VAR_31;
 VAR_39->i_size = VAR_33;
 VAR_39->i_atime = VAR_39->i_mtime = VAR_39->i_ctime = FUNC_15(VAR_39);
 FUNC_35(VAR_39, 1);
 FUNC_48(VAR_40, VAR_39);
 FUNC_11(VAR_40);
 VAR_41->i_goal = VAR_40->i_goal;
 VAR_41->i_diskflags = 0;
 VAR_41->i_eattr = 0;
 VAR_41->i_height = 0;
 VAR_41->i_depth = 0;
 VAR_41->i_entries = 0;
 VAR_41->i_no_addr = 0;

 switch(VAR_30 & VAR_21) {
 case 128:
  if ((VAR_40->i_diskflags & VAR_9) ||
      FUNC_40(VAR_42, VAR_26))
   VAR_41->i_diskflags |= VAR_10;
  FUNC_34(VAR_39);
  break;
 case 129:
  VAR_41->i_diskflags |= (VAR_40->i_diskflags & VAR_9);
  VAR_41->i_diskflags |= VAR_10;
  VAR_41->i_entries = 2;
  break;
 }


 if (VAR_40->i_diskflags & VAR_11)
  VAR_41->i_diskflags |= VAR_11;

 FUNC_36(VAR_39);

 if ((FUNC_2(FUNC_16(VAR_42->sd_root_dir)) == VAR_40) ||
     (VAR_40->i_diskflags & VAR_12))
  VAR_46 |= VAR_8;

 if (VAR_36 || VAR_37)
  VAR_47++;

 VAR_44 = FUNC_10(VAR_41, VAR_46, &VAR_47);
 if (VAR_44)
  goto fail_free_inode;

 FUNC_35(VAR_39, VAR_47);

 VAR_44 = FUNC_25(VAR_42, VAR_41->i_no_addr, &VAR_23, VAR_2, &VAR_41->i_gl);
 if (VAR_44)
  goto fail_free_inode;
 FUNC_20(&VAR_41->i_gl->gl_work);
 FUNC_42(VAR_41->i_gl, VAR_41);

 VAR_44 = FUNC_26(VAR_41->i_gl, VAR_19, VAR_18, VAR_38 + 1);
 if (VAR_44)
  goto fail_free_inode;

 VAR_44 = FUNC_38(VAR_42, VAR_47, 0);
 if (VAR_44)
  goto fail_gunlock2;

 if (VAR_47 > 1) {
  VAR_41->i_eattr = VAR_41->i_no_addr + 1;
  FUNC_30(VAR_41);
 }
 FUNC_43(VAR_40, VAR_41, VAR_32);
 FUNC_39(VAR_42);

 VAR_44 = FUNC_25(VAR_42, VAR_41->i_no_addr, &VAR_24, VAR_2, &VAR_43);
 if (VAR_44)
  goto fail_gunlock2;

 FUNC_0(FUNC_55(VAR_16, &VAR_43->gl_flags));

 VAR_44 = FUNC_26(VAR_43, VAR_20, VAR_17, &VAR_41->i_iopen_gh);
 if (VAR_44)
  goto fail_gunlock2;

 FUNC_42(VAR_41->i_iopen_gh.gh_gl, VAR_41);
 FUNC_27(VAR_43);
 FUNC_37(VAR_39);
 FUNC_44(VAR_39);

 VAR_45 = 0;


 if (VAR_36) {
  VAR_44 = FUNC_9(VAR_39, VAR_36, VAR_1);
  if (VAR_44)
   goto fail_gunlock3;
  FUNC_51(VAR_36);
  VAR_36 = ((void*)0);
 }
 if (VAR_37) {
  VAR_44 = FUNC_9(VAR_39, VAR_37, VAR_0);
  if (VAR_44)
   goto fail_gunlock3;
  FUNC_51(VAR_37);
  VAR_37 = ((void*)0);
 }

 VAR_44 = FUNC_52(&VAR_41->i_inode, &VAR_40->i_inode, VAR_35,
          &VAR_22, ((void*)0));
 if (VAR_44)
  goto fail_gunlock3;

 VAR_44 = FUNC_46(VAR_40, VAR_35, VAR_41, &VAR_48);
 if (VAR_44)
  goto fail_gunlock3;

 FUNC_47(VAR_39);
 FUNC_17(VAR_28, VAR_39);
 if (VAR_29) {
  VAR_29->f_mode |= VAR_7;
  VAR_44 = FUNC_19(VAR_29, VAR_28, VAR_25);
 }
 FUNC_24(VAR_38);
 FUNC_24(VAR_38 + 1);
 FUNC_12(VAR_16, &VAR_43->gl_flags);
 return VAR_44;

fail_gunlock3:
 FUNC_41(VAR_43, VAR_41);
 FUNC_24(&VAR_41->i_iopen_gh);
 FUNC_27(VAR_43);
fail_gunlock2:
 if (VAR_43)
  FUNC_12(VAR_16, &VAR_43->gl_flags);
fail_free_inode:
 if (VAR_41->i_gl) {
  FUNC_41(VAR_41->i_gl, VAR_41);
  FUNC_27(VAR_41->i_gl);
 }
 FUNC_33(VAR_41, ((void*)0));
fail_free_acls:
 FUNC_51(VAR_36);
 FUNC_51(VAR_37);
fail_gunlock:
 FUNC_21(&VAR_48);
 FUNC_24(VAR_38);
 if (!FUNC_5(VAR_39)) {
  FUNC_13(VAR_39);
  if (!VAR_45)
   FUNC_47(VAR_39);
  FUNC_53(VAR_45 ? VAR_15 : VAR_14,
   &FUNC_2(VAR_39)->i_flags);
  FUNC_45(VAR_39);
 }
 if (FUNC_28(VAR_38 + 1))
  FUNC_24(VAR_38 + 1);
fail:
 return VAR_44;
}
