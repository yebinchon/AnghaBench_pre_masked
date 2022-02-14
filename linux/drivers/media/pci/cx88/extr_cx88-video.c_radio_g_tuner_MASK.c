
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ index; int name; } ;
struct file {int dummy; } ;
struct cx88_core {int dummy; } ;
struct cx8800_dev {struct cx88_core* core; } ;


 int VAR_0 ;
 int FUNC_0 (struct cx88_core*,int ,int ,struct v4l2_tuner*) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 struct cx8800_dev* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_3, void *VAR_4,
    struct v4l2_tuner *VAR_5)
{
 struct cx8800_dev *VAR_6 = FUNC_3(VAR_3);
 struct cx88_core *VAR_7 = VAR_6->core;

 if (FUNC_2(VAR_5->index > 0))
  return -VAR_0;

 FUNC_1(VAR_5->name, "Radio", sizeof(VAR_5->name));

 FUNC_0(VAR_7, VAR_2, VAR_1, VAR_5);
 return 0;
}
