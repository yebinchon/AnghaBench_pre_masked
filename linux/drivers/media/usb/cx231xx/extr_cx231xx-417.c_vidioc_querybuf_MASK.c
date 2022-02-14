
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_buffer {int dummy; } ;
struct file {struct cx231xx_fh* private_data; } ;
struct cx231xx_fh {int vidq; } ;


 int FUNC_0 (int *,struct v4l2_buffer*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1,
    struct v4l2_buffer *VAR_2)
{
 struct cx231xx_fh *VAR_3 = VAR_0->private_data;

 return FUNC_0(&VAR_3->vidq, VAR_2);
}
