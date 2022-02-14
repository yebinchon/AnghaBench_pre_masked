
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_tuner {int capability; int rangelow; int rangehigh; int signal; int audmode; int rxsubchans; int name; int type; scalar_t__ index; } ;
struct file {int dummy; } ;
struct cadet {int sigstrength; scalar_t__ io; scalar_t__ is_fm_band; } ;
struct TYPE_2__ {int capability; int rangelow; int rangehigh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_0 (struct cadet*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (int ,char*,int) ;
 struct cadet* FUNC_5 (struct file*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_6, void *VAR_7,
    struct v4l2_tuner *VAR_8)
{
 struct cadet *VAR_9 = FUNC_5(VAR_6);

 if (VAR_8->index)
  return -VAR_0;
 VAR_8->type = VAR_2;
 FUNC_4(VAR_8->name, "Radio", sizeof(VAR_8->name));
 VAR_8->capability = VAR_5[0].capability | VAR_5[1].capability;
 VAR_8->rangelow = VAR_5[0].rangelow;
 VAR_8->rangehigh = VAR_5[1].rangehigh;
 if (VAR_9->is_fm_band) {
  VAR_8->rxsubchans = FUNC_0(VAR_9);
  FUNC_3(3, VAR_9->io);
  FUNC_3(FUNC_1(VAR_9->io + 1) & 0x7f, VAR_9->io + 1);
  FUNC_2(100);
  FUNC_3(3, VAR_9->io);
  if (FUNC_1(VAR_9->io + 1) & 0x80)
   VAR_8->rxsubchans |= VAR_4;
 } else {
  VAR_8->rangelow = 8320;
  VAR_8->rangehigh = 26400;
  VAR_8->rxsubchans = VAR_3;
 }
 VAR_8->audmode = VAR_1;
 VAR_8->signal = VAR_9->sigstrength;
 return 0;
}
