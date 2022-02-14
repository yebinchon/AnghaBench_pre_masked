
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_frequency {scalar_t__ tuner; } ;
struct file {int dummy; } ;
struct TYPE_2__ {scalar_t__ tuner_type; } ;
struct cx88_core {int field; int height; int width; TYPE_1__ board; } ;
struct cx8802_dev {int vb2_mpegq; struct cx88_core* core; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct cx8802_dev*) ;
 int FUNC_1 (struct cx8802_dev*) ;
 int FUNC_2 (struct cx8802_dev*) ;
 int FUNC_3 (struct cx88_core*,struct v4l2_frequency const*) ;
 int FUNC_4 (struct cx88_core*,int ,int ,int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 struct cx8802_dev* FUNC_7 (struct file*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_2, void *VAR_3,
         const struct v4l2_frequency *VAR_4)
{
 struct cx8802_dev *VAR_5 = FUNC_7(VAR_2);
 struct cx88_core *VAR_6 = VAR_5->core;
 bool VAR_7;

 if (FUNC_5(VAR_6->board.tuner_type == VAR_1))
  return -VAR_0;
 if (FUNC_5(VAR_4->tuner != 0))
  return -VAR_0;
 VAR_7 = FUNC_6(&VAR_5->vb2_mpegq);
 if (VAR_7)
  FUNC_2(VAR_5);

 FUNC_3(VAR_6, VAR_4);
 FUNC_0(VAR_5);
 FUNC_4(VAR_6, VAR_6->width, VAR_6->height, VAR_6->field);
 if (VAR_7)
  FUNC_1(VAR_5);
 return 0;
}
