
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_tuner {scalar_t__ index; int audmode; } ;
struct file {int dummy; } ;
struct TYPE_2__ {scalar_t__ tuner_type; } ;
struct cx88_core {TYPE_1__ board; } ;
struct cx8802_dev {struct cx88_core* core; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct cx88_core*,int ,int) ;
 struct cx8802_dev* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
     const struct v4l2_tuner *VAR_4)
{
 struct cx8802_dev *VAR_5 = FUNC_1(VAR_2);
 struct cx88_core *VAR_6 = VAR_5->core;

 if (VAR_6->board.tuner_type == VAR_1)
  return -VAR_0;
 if (VAR_4->index != 0)
  return -VAR_0;

 FUNC_0(VAR_6, VAR_4->audmode, 1);
 return 0;
}
