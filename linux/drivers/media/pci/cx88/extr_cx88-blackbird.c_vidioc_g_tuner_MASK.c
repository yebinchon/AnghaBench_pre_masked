
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_tuner {scalar_t__ index; int rangehigh; int signal; int capability; int name; } ;
struct file {int dummy; } ;
struct TYPE_2__ {scalar_t__ tuner_type; } ;
struct cx88_core {TYPE_1__ board; } ;
struct cx8802_dev {struct cx88_core* core; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cx88_core*,int ,int ,struct v4l2_tuner*) ;
 int FUNC_1 (struct cx88_core*,struct v4l2_tuner*) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int) ;
 struct cx8802_dev* FUNC_5 (struct file*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_6, void *VAR_7,
     struct v4l2_tuner *VAR_8)
{
 struct cx8802_dev *VAR_9 = FUNC_5(VAR_6);
 struct cx88_core *VAR_10 = VAR_9->core;
 u32 VAR_11;

 if (FUNC_4(VAR_10->board.tuner_type == VAR_2))
  return -VAR_0;
 if (VAR_8->index != 0)
  return -VAR_0;

 FUNC_3(VAR_8->name, "Television", sizeof(VAR_8->name));
 VAR_8->capability = VAR_3;
 VAR_8->rangehigh = 0xffffffffUL;
 FUNC_0(VAR_10, VAR_5, VAR_4, VAR_8);

 FUNC_1(VAR_10, VAR_8);
 VAR_11 = FUNC_2(VAR_1);
 VAR_8->signal = (VAR_11 & (1 << 5)) ? 0xffff : 0x0000;
 return 0;
}
