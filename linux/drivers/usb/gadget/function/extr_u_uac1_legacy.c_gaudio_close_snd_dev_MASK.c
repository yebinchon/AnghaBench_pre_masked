
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gaudio_snd_dev {scalar_t__ filp; } ;
struct gaudio {struct gaudio_snd_dev capture; struct gaudio_snd_dev playback; struct gaudio_snd_dev control; } ;


 int FUNC_0 (scalar_t__,int *) ;

__attribute__((used)) static int FUNC_1(struct gaudio *VAR_0)
{
 struct gaudio_snd_dev *VAR_1;


 VAR_1 = &VAR_0->control;
 if (VAR_1->filp)
  FUNC_0(VAR_1->filp, ((void*)0));


 VAR_1 = &VAR_0->playback;
 if (VAR_1->filp)
  FUNC_0(VAR_1->filp, ((void*)0));


 VAR_1 = &VAR_0->capture;
 if (VAR_1->filp)
  FUNC_0(VAR_1->filp, ((void*)0));

 return 0;
}
