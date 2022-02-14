
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {int dummy; } ;
struct ocfs2_file_private {int fp_flock; } ;
struct inode {int i_sb; } ;
struct file {struct ocfs2_file_private* private_data; } ;


 struct ocfs2_super* FUNC_0 (int ) ;
 int FUNC_1 (struct ocfs2_file_private*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ocfs2_super*,int *) ;

__attribute__((used)) static void FUNC_4(struct inode *VAR_0, struct file *VAR_1)
{
 struct ocfs2_file_private *VAR_2 = VAR_1->private_data;
 struct ocfs2_super *VAR_3 = FUNC_0(VAR_0->i_sb);

 if (VAR_2) {
  FUNC_3(VAR_3, &VAR_2->fp_flock);
  FUNC_2(&VAR_2->fp_flock);
  FUNC_1(VAR_2);
  VAR_1->private_data = ((void*)0);
 }
}
