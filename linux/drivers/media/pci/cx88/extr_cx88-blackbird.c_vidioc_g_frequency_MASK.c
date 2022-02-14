
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_frequency {scalar_t__ tuner; int frequency; } ;
struct file {int dummy; } ;
struct TYPE_2__ {scalar_t__ tuner_type; } ;
struct cx88_core {int freq; TYPE_1__ board; } ;
struct cx8802_dev {struct cx88_core* core; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct cx88_core*,int ,int ,struct v4l2_frequency*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 struct cx8802_dev* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_4, void *VAR_5,
         struct v4l2_frequency *VAR_6)
{
 struct cx8802_dev *VAR_7 = FUNC_2(VAR_4);
 struct cx88_core *VAR_8 = VAR_7->core;

 if (FUNC_1(VAR_8->board.tuner_type == VAR_1))
  return -VAR_0;
 if (FUNC_1(VAR_6->tuner != 0))
  return -VAR_0;

 VAR_6->frequency = VAR_8->freq;
 FUNC_0(VAR_8, VAR_3, VAR_2, VAR_6);

 return 0;
}
