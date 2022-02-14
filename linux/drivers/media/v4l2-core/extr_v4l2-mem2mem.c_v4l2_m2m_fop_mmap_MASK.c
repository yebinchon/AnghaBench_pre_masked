
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct v4l2_fh {int m2m_ctx; } ;
struct file {struct v4l2_fh* private_data; } ;


 int FUNC_0 (struct file*,int ,struct vm_area_struct*) ;

int FUNC_1(struct file *VAR_0, struct vm_area_struct *VAR_1)
{
 struct v4l2_fh *VAR_2 = VAR_0->private_data;

 return FUNC_0(VAR_0, VAR_2->m2m_ctx, VAR_1);
}
