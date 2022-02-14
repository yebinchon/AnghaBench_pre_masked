
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_input {int dummy; } ;
struct file {int dummy; } ;
struct cx88_core {int dummy; } ;
struct cx8800_dev {struct cx88_core* core; } ;


 int FUNC_0 (struct cx88_core*,struct v4l2_input*) ;
 struct cx8800_dev* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, void *VAR_1,
        struct v4l2_input *VAR_2)
{
 struct cx8800_dev *VAR_3 = FUNC_1(VAR_0);
 struct cx88_core *VAR_4 = VAR_3->core;

 return FUNC_0(VAR_4, VAR_2);
}
