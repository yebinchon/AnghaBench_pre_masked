
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {scalar_t__ i_size; } ;
struct gfs2_sbd {struct inode* sd_rindex; } ;
struct gfs2_inode {int i_res; int i_gl; } ;
struct gfs2_holder {int dummy; } ;
struct file {int dummy; } ;
typedef scalar_t__ loff_t ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 struct gfs2_sbd* FUNC_1 (struct inode*) ;
 int VAR_3 ;
 int FUNC_2 (struct file*,int,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct file*,scalar_t__,scalar_t__) ;
 struct inode* FUNC_4 (struct file*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct gfs2_holder*) ;
 int FUNC_7 (struct gfs2_holder*) ;
 int FUNC_8 (int ,int ,int ,struct gfs2_holder*) ;
 int FUNC_9 (struct gfs2_holder*) ;
 scalar_t__ FUNC_10 (struct gfs2_inode*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct gfs2_inode*) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (struct inode*,scalar_t__) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (struct inode*) ;

__attribute__((used)) static long FUNC_17(struct file *VAR_4, int VAR_5, loff_t VAR_6, loff_t VAR_7)
{
 struct inode *VAR_8 = FUNC_4(VAR_4);
 struct gfs2_sbd *VAR_9 = FUNC_1(VAR_8);
 struct gfs2_inode *VAR_10 = FUNC_0(VAR_8);
 struct gfs2_holder VAR_11;
 int VAR_12;

 if (VAR_5 & ~(VAR_2 | VAR_1))
  return -VAR_0;

 if (FUNC_10(VAR_10) && VAR_8 != VAR_9->sd_rindex)
  return -VAR_0;

 FUNC_13(VAR_8);

 FUNC_8(VAR_10->i_gl, VAR_3, 0, &VAR_11);
 VAR_12 = FUNC_7(&VAR_11);
 if (VAR_12)
  goto out_uninit;

 if (!(VAR_5 & VAR_1) &&
     (VAR_6 + VAR_7) > VAR_8->i_size) {
  VAR_12 = FUNC_14(VAR_8, VAR_6 + VAR_7);
  if (VAR_12)
   goto out_unlock;
 }

 VAR_12 = FUNC_5(VAR_8);
 if (VAR_12)
  goto out_unlock;

 if (VAR_5 & VAR_2) {
  VAR_12 = FUNC_3(VAR_4, VAR_6, VAR_7);
 } else {
  VAR_12 = FUNC_12(VAR_10);
  if (VAR_12)
   goto out_putw;

  VAR_12 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7);

  if (VAR_12)
   FUNC_11(&VAR_10->i_res);
 }

out_putw:
 FUNC_16(VAR_8);
out_unlock:
 FUNC_6(&VAR_11);
out_uninit:
 FUNC_9(&VAR_11);
 FUNC_15(VAR_8);
 return VAR_12;
}
