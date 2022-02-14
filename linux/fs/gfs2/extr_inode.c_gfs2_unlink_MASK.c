
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_nlink; int i_mode; } ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_rgrpd {int rd_gl; } ;
struct gfs2_inode {int i_entries; int i_no_addr; int i_gl; } ;
struct gfs2_holder {int dummy; } ;
struct dentry {int d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 struct gfs2_sbd* FUNC_1 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (int ) ;
 struct inode* FUNC_3 (struct dentry*) ;
 struct gfs2_rgrpd* FUNC_4 (struct gfs2_sbd*,int ,int) ;
 int FUNC_5 (struct gfs2_holder*) ;
 int FUNC_6 (struct gfs2_holder*) ;
 int FUNC_7 (int ,int ,int ,struct gfs2_holder*) ;
 int FUNC_8 (struct gfs2_holder*) ;
 int FUNC_9 (struct gfs2_sbd*) ;
 int FUNC_10 (struct gfs2_sbd*,scalar_t__,int ) ;
 int FUNC_11 (struct gfs2_sbd*) ;
 int FUNC_12 (struct gfs2_inode*,struct dentry*) ;
 int FUNC_13 (struct gfs2_inode*,int *,struct gfs2_inode*) ;

__attribute__((used)) static int FUNC_14(struct inode *VAR_7, struct dentry *VAR_8)
{
 struct gfs2_inode *VAR_9 = FUNC_0(VAR_7);
 struct gfs2_sbd *VAR_10 = FUNC_1(VAR_7);
 struct inode *VAR_11 = FUNC_3(VAR_8);
 struct gfs2_inode *VAR_12 = FUNC_0(VAR_11);
 struct gfs2_holder VAR_13[3];
 struct gfs2_rgrpd *VAR_14;
 int VAR_15;

 VAR_15 = FUNC_9(VAR_10);
 if (VAR_15)
  return VAR_15;

 VAR_15 = -VAR_2;

 FUNC_7(VAR_9->i_gl, VAR_3, 0, VAR_13);
 FUNC_7(VAR_12->i_gl, VAR_3, 0, VAR_13 + 1);

 VAR_14 = FUNC_4(VAR_10, VAR_12->i_no_addr, 1);
 if (!VAR_14)
  goto out_inodes;

 FUNC_7(VAR_14->rd_gl, VAR_3, 0, VAR_13 + 2);


 VAR_15 = FUNC_6(VAR_13);
 if (VAR_15)
  goto out_parent;

 VAR_15 = FUNC_6(VAR_13 + 1);
 if (VAR_15)
  goto out_child;

 VAR_15 = -VAR_0;
 if (VAR_11->i_nlink == 0)
  goto out_rgrp;

 if (FUNC_2(VAR_11->i_mode)) {
  VAR_15 = -VAR_1;
  if (VAR_12->i_entries > 2 || VAR_11->i_nlink > 2)
   goto out_rgrp;
 }

 VAR_15 = FUNC_6(VAR_13 + 2);
 if (VAR_15)
  goto out_rgrp;

 VAR_15 = FUNC_13(VAR_9, &VAR_8->d_name, VAR_12);
 if (VAR_15)
  goto out_gunlock;

 VAR_15 = FUNC_10(VAR_10, 2*VAR_4 + 3*VAR_5 + VAR_6, 0);
 if (VAR_15)
  goto out_gunlock;

 VAR_15 = FUNC_12(VAR_9, VAR_8);
 FUNC_11(VAR_10);

out_gunlock:
 FUNC_5(VAR_13 + 2);
out_rgrp:
 FUNC_5(VAR_13 + 1);
out_child:
 FUNC_5(VAR_13);
out_parent:
 FUNC_8(VAR_13 + 2);
out_inodes:
 FUNC_8(VAR_13 + 1);
 FUNC_8(VAR_13);
 return VAR_15;
}
