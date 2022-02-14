
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {int wq_trigger; int stream_started; } ;
struct em28xx {TYPE_1__ adev; scalar_t__ disconnected; } ;


 int VAR_0 ;
 int VAR_1 ;






 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 struct em28xx* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_2,
          int VAR_3)
{
 struct em28xx *VAR_4 = FUNC_2(VAR_2);
 int VAR_5 = 0;

 if (VAR_4->disconnected)
  return -VAR_1;

 switch (VAR_3) {
 case 132:
 case 131:
 case 130:
  FUNC_0(&VAR_4->adev.stream_started, 1);
  break;
 case 133:
 case 128:
 case 129:
  FUNC_0(&VAR_4->adev.stream_started, 0);
  break;
 default:
  VAR_5 = -VAR_0;
 }
 FUNC_1(&VAR_4->adev.wq_trigger);
 return VAR_5;
}
