
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int umode_t ;
struct inode {int dummy; } ;
struct gfs2_sbd {int sd_rename_gl; } ;
struct TYPE_4__ {scalar_t__ i_nlink; int i_mode; } ;
struct gfs2_inode {TYPE_1__ i_inode; int i_gl; } ;
struct gfs2_holder {int dummy; } ;
struct dentry {int d_name; struct inode* d_inode; } ;


 int VAR_0 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 struct gfs2_sbd* FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct gfs2_inode*,int *,struct gfs2_inode*,int ) ;
 int FUNC_6 (unsigned int,struct gfs2_holder*) ;
 int FUNC_7 (struct gfs2_holder*) ;
 int FUNC_8 (struct gfs2_holder*) ;
 int FUNC_9 (struct gfs2_holder*) ;
 int FUNC_10 (int ,int ,int ,struct gfs2_holder*) ;
 int FUNC_11 (int ,int ,int ,struct gfs2_holder*) ;
 scalar_t__ FUNC_12 (struct gfs2_holder*) ;
 int FUNC_13 (struct gfs2_holder*) ;
 scalar_t__ FUNC_14 (struct gfs2_holder*) ;
 int FUNC_15 (struct gfs2_holder*) ;
 int FUNC_16 (struct gfs2_inode*,struct gfs2_inode*) ;
 int FUNC_17 (struct inode*,int ) ;
 int FUNC_18 (struct gfs2_sbd*) ;
 int FUNC_19 (struct gfs2_sbd*,int,int ) ;
 int FUNC_20 (struct gfs2_sbd*) ;
 int FUNC_21 (struct gfs2_inode*,int *,struct gfs2_inode*) ;
 int FUNC_22 (TYPE_1__*) ;
 int FUNC_23 (TYPE_1__*) ;
 int FUNC_24 (struct gfs2_inode*,struct gfs2_inode*,scalar_t__) ;

__attribute__((used)) static int FUNC_25(struct inode *VAR_6, struct dentry *VAR_7,
    struct inode *VAR_8, struct dentry *VAR_9,
    unsigned int VAR_10)
{
 struct gfs2_inode *VAR_11 = FUNC_0(VAR_6);
 struct gfs2_inode *VAR_12 = FUNC_0(VAR_8);
 struct gfs2_inode *VAR_13 = FUNC_0(VAR_7->d_inode);
 struct gfs2_inode *VAR_14 = FUNC_0(VAR_9->d_inode);
 struct gfs2_sbd *VAR_15 = FUNC_1(VAR_6);
 struct gfs2_holder VAR_16[4], VAR_17;
 unsigned int VAR_18;
 unsigned int VAR_19;
 umode_t VAR_20 = VAR_13->i_inode.i_mode;
 umode_t VAR_21 = VAR_14->i_inode.i_mode;
 int VAR_22;

 FUNC_13(&VAR_17);
 VAR_22 = FUNC_18(VAR_15);
 if (VAR_22)
  return VAR_22;

 if (VAR_11 != VAR_12) {
  VAR_22 = FUNC_10(VAR_15->sd_rename_gl, VAR_2,
        0, &VAR_17);
  if (VAR_22)
   goto out;

  if (FUNC_3(VAR_20)) {

   VAR_22 = FUNC_16(VAR_13, VAR_12);
   if (VAR_22)
    goto out_gunlock_r;
  }

  if (FUNC_3(VAR_21)) {

   VAR_22 = FUNC_16(VAR_14, VAR_11);
   if (VAR_22)
    goto out_gunlock_r;
  }
 }

 VAR_18 = 1;
 FUNC_11(VAR_11->i_gl, VAR_2, VAR_1, VAR_16);
 if (VAR_11 != VAR_12) {
  FUNC_11(VAR_12->i_gl, VAR_2, VAR_1,
     VAR_16 + VAR_18);
  VAR_18++;
 }
 FUNC_11(VAR_13->i_gl, VAR_2, VAR_1, VAR_16 + VAR_18);
 VAR_18++;

 FUNC_11(VAR_14->i_gl, VAR_2, VAR_1, VAR_16 + VAR_18);
 VAR_18++;

 for (VAR_19 = 0; VAR_19 < VAR_18; VAR_19++) {
  VAR_22 = FUNC_9(VAR_16 + VAR_19);
  if (VAR_22)
   goto out_gunlock;
 }

 VAR_22 = FUNC_6(VAR_18, VAR_16);
 if (VAR_22)
  goto out_gunlock;

 VAR_22 = -VAR_0;
 if (VAR_13->i_inode.i_nlink == 0 || VAR_14->i_inode.i_nlink == 0)
  goto out_gunlock;

 VAR_22 = FUNC_21(VAR_11, &VAR_7->d_name, VAR_13);
 if (VAR_22)
  goto out_gunlock;
 VAR_22 = FUNC_21(VAR_12, &VAR_9->d_name, VAR_14);
 if (VAR_22)
  goto out_gunlock;

 if (FUNC_3(VAR_20)) {
  VAR_22 = FUNC_17(VAR_7->d_inode, VAR_3);
  if (VAR_22)
   goto out_gunlock;
 }
 if (FUNC_3(VAR_21)) {
  VAR_22 = FUNC_17(VAR_9->d_inode, VAR_3);
  if (VAR_22)
   goto out_gunlock;
 }
 VAR_22 = FUNC_19(VAR_15, 4 * VAR_4 + 4 * VAR_5, 0);
 if (VAR_22)
  goto out_gunlock;

 VAR_22 = FUNC_24(VAR_13, VAR_12, FUNC_3(VAR_20));
 if (VAR_22)
  goto out_end_trans;

 VAR_22 = FUNC_24(VAR_14, VAR_11, FUNC_3(VAR_21));
 if (VAR_22)
  goto out_end_trans;

 VAR_22 = FUNC_5(VAR_12, &VAR_9->d_name, VAR_13,
          FUNC_2(VAR_20));
 if (VAR_22)
  goto out_end_trans;

 VAR_22 = FUNC_5(VAR_11, &VAR_7->d_name, VAR_14,
          FUNC_2(VAR_21));
 if (VAR_22)
  goto out_end_trans;

 if (VAR_11 != VAR_12) {
  if (FUNC_3(VAR_21) && !FUNC_3(VAR_20)) {
   FUNC_22(&VAR_11->i_inode);
   FUNC_4(&VAR_12->i_inode);
  } else if (FUNC_3(VAR_20) && !FUNC_3(VAR_21)) {
   FUNC_22(&VAR_12->i_inode);
   FUNC_4(&VAR_11->i_inode);
  }
 }
 FUNC_23(&VAR_12->i_inode);
 if (VAR_11 != VAR_12)
  FUNC_23(&VAR_11->i_inode);

out_end_trans:
 FUNC_20(VAR_15);
out_gunlock:
 while (VAR_19--) {
  if (FUNC_14(VAR_16 + VAR_19))
   FUNC_7(VAR_16 + VAR_19);
  FUNC_15(VAR_16 + VAR_19);
 }
out_gunlock_r:
 if (FUNC_12(&VAR_17))
  FUNC_8(&VAR_17);
out:
 return VAR_22;
}
