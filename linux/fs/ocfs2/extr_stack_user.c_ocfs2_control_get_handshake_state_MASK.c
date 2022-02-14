
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_control_private {int op_state; } ;
struct file {struct ocfs2_control_private* private_data; } ;



__attribute__((used)) static inline int FUNC_0(struct file *VAR_0)
{
 struct ocfs2_control_private *VAR_1 = VAR_0->private_data;
 return VAR_1->op_state;
}
