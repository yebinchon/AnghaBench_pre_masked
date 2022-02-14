
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fh {int wait; } ;
struct poll_table_struct {int dummy; } ;
struct file {struct v4l2_fh* private_data; } ;
typedef int __poll_t ;


 int VAR_0 ;
 int FUNC_0 (struct file*,int *,struct poll_table_struct*) ;
 scalar_t__ FUNC_1 (struct v4l2_fh*) ;

__poll_t FUNC_2(struct file *VAR_1, struct poll_table_struct *VAR_2)
{
 struct v4l2_fh *VAR_3 = VAR_1->private_data;

 FUNC_0(VAR_1, &VAR_3->wait, VAR_2);
 if (FUNC_1(VAR_3))
  return VAR_0;
 return 0;
}
