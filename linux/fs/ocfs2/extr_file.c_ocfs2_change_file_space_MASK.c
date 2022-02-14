
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct ocfs2_space_resv {int dummy; } ;
struct inode {int i_mode; int i_sb; } ;
struct file {int f_mode; int f_pos; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 struct ocfs2_super* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct file*,struct inode*,int ,unsigned int,struct ocfs2_space_resv*,int ) ;
 struct inode* FUNC_3 (struct file*) ;
 int FUNC_4 (struct file*) ;
 int FUNC_5 (struct file*) ;
 int FUNC_6 (struct ocfs2_super*) ;
 int FUNC_7 (struct ocfs2_super*) ;

int FUNC_8(struct file *VAR_8, unsigned int VAR_9,
       struct ocfs2_space_resv *VAR_10)
{
 struct inode *VAR_11 = FUNC_3(VAR_8);
 struct ocfs2_super *VAR_12 = FUNC_0(VAR_11->i_sb);
 int VAR_13;

 if ((VAR_9 == VAR_4 || VAR_9 == VAR_5) &&
     !FUNC_7(VAR_12))
  return -VAR_2;
 else if ((VAR_9 == VAR_6 || VAR_9 == VAR_7) &&
   !FUNC_6(VAR_12))
  return -VAR_2;

 if (!FUNC_1(VAR_11->i_mode))
  return -VAR_1;

 if (!(VAR_8->f_mode & VAR_3))
  return -VAR_0;

 VAR_13 = FUNC_5(VAR_8);
 if (VAR_13)
  return VAR_13;
 VAR_13 = FUNC_2(VAR_8, VAR_11, VAR_8->f_pos, VAR_9, VAR_10, 0);
 FUNC_4(VAR_8);
 return VAR_13;
}
