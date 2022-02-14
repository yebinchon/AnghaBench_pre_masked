
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct inode {int i_ctime; int i_mapping; } ;
struct gfs2_sbd {int dummy; } ;
struct gfs2_inode {int i_diskflags; int i_gl; } ;
struct gfs2_holder {int dummy; } ;
struct file {int dummy; } ;
struct buffer_head {int b_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct gfs2_inode* FUNC_0 (struct inode*) ;
 int VAR_6 ;
 int VAR_7 ;
 struct gfs2_sbd* FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct inode*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct inode*) ;
 struct inode* FUNC_7 (struct file*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct gfs2_inode*,int ) ;
 int FUNC_11 (struct inode*,int) ;
 int FUNC_12 (struct gfs2_holder*) ;
 int FUNC_13 (int ,int ,int ,struct gfs2_holder*) ;
 int FUNC_14 (struct gfs2_sbd*,int ,int) ;
 int FUNC_15 (struct gfs2_inode*,struct buffer_head**) ;
 int FUNC_16 (struct gfs2_inode*) ;
 int FUNC_17 (struct inode*,int ) ;
 int FUNC_18 (struct inode*) ;
 int FUNC_19 (struct inode*) ;
 int FUNC_20 (int ,struct buffer_head*) ;
 int FUNC_21 (struct gfs2_sbd*,int ,int ) ;
 int FUNC_22 (struct gfs2_sbd*) ;
 int FUNC_23 (struct inode*) ;
 int FUNC_24 (struct file*) ;
 int FUNC_25 (struct file*) ;
 int FUNC_26 (struct inode*,int,int const) ;

__attribute__((used)) static int FUNC_27(struct file *VAR_11, u32 VAR_12, u32 VAR_13,
        const u32 VAR_14)
{
 struct inode *VAR_15 = FUNC_7(VAR_11);
 struct gfs2_inode *VAR_16 = FUNC_0(VAR_15);
 struct gfs2_sbd *VAR_17 = FUNC_1(VAR_15);
 struct buffer_head *VAR_18;
 struct gfs2_holder VAR_19;
 int VAR_20;
 u32 VAR_21, VAR_22, VAR_23;

 VAR_20 = FUNC_25(VAR_11);
 if (VAR_20)
  return VAR_20;

 VAR_20 = FUNC_13(VAR_16->i_gl, VAR_8, 0, &VAR_19);
 if (VAR_20)
  goto out_drop_write;

 VAR_23 = FUNC_11(VAR_15, VAR_16->i_diskflags);
 VAR_20 = FUNC_26(VAR_15, VAR_23, VAR_14);
 if (VAR_20)
  goto out;

 VAR_20 = -VAR_1;
 if (!FUNC_23(VAR_15))
  goto out;

 VAR_20 = 0;
 VAR_22 = VAR_16->i_diskflags;
 VAR_21 = (VAR_22 & ~VAR_13) | (VAR_12 & VAR_13);
 if ((VAR_21 ^ VAR_22) == 0)
  goto out;

 VAR_20 = -VAR_2;
 if (FUNC_3(VAR_15) && (VAR_21 & VAR_4))
  goto out;
 if (FUNC_2(VAR_15) && (VAR_21 & VAR_3))
  goto out;
 if (((VAR_21 ^ VAR_22) & VAR_4) &&
     !FUNC_5(VAR_0))
  goto out;
 if (!FUNC_3(VAR_15)) {
  VAR_20 = FUNC_17(VAR_15, VAR_9);
  if (VAR_20)
   goto out;
 }
 if ((VAR_22 ^ VAR_21) & VAR_5) {
  if (VAR_21 & VAR_5)
   FUNC_14(VAR_17, VAR_16->i_gl,
           VAR_7 |
           VAR_6);
  VAR_20 = FUNC_9(VAR_15->i_mapping);
  if (VAR_20)
   goto out;
  VAR_20 = FUNC_8(VAR_15->i_mapping);
  if (VAR_20)
   goto out;
  if (VAR_21 & VAR_5)
   FUNC_16(VAR_16);
 }
 VAR_20 = FUNC_21(VAR_17, VAR_10, 0);
 if (VAR_20)
  goto out;
 VAR_20 = FUNC_15(VAR_16, &VAR_18);
 if (VAR_20)
  goto out_trans_end;
 VAR_15->i_ctime = FUNC_6(VAR_15);
 FUNC_20(VAR_16->i_gl, VAR_18);
 VAR_16->i_diskflags = VAR_21;
 FUNC_10(VAR_16, VAR_18->b_data);
 FUNC_4(VAR_18);
 FUNC_19(VAR_15);
 FUNC_18(VAR_15);
out_trans_end:
 FUNC_22(VAR_17);
out:
 FUNC_12(&VAR_19);
out_drop_write:
 FUNC_24(VAR_11);
 return VAR_20;
}
