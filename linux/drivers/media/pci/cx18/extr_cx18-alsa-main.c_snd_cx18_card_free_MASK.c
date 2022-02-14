
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_cx18_card {int * v4l2_dev; } ;
struct TYPE_2__ {int * alsa; } ;


 int FUNC_0 (struct snd_cx18_card*) ;
 TYPE_1__* FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct snd_cx18_card *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;

 if (VAR_0->v4l2_dev != ((void*)0))
  FUNC_1(VAR_0->v4l2_dev)->alsa = ((void*)0);



 FUNC_0(VAR_0);
}
