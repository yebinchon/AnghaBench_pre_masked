
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fh {int dummy; } ;
struct file {struct v4l2_fh* private_data; } ;


 int FUNC_0 (struct v4l2_fh*) ;
 int FUNC_1 (struct v4l2_fh*) ;
 int FUNC_2 (struct v4l2_fh*) ;

int FUNC_3(struct file *VAR_0)
{
 struct v4l2_fh *VAR_1 = VAR_0->private_data;

 if (VAR_1) {
  FUNC_1(VAR_1);
  FUNC_2(VAR_1);
  FUNC_0(VAR_1);
 }
 return 0;
}
