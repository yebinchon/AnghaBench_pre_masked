
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_control_private {int op_this_node; int op_list; } ;
struct inode {int dummy; } ;
struct file {struct ocfs2_control_private* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ocfs2_control_private* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_4, struct file *VAR_5)
{
 struct ocfs2_control_private *VAR_6;

 VAR_6 = FUNC_0(sizeof(struct ocfs2_control_private), VAR_1);
 if (!VAR_6)
  return -VAR_0;
 VAR_6->op_this_node = -1;

 FUNC_2(&VAR_2);
 VAR_5->private_data = VAR_6;
 FUNC_1(&VAR_6->op_list, &VAR_3);
 FUNC_3(&VAR_2);

 return 0;
}
