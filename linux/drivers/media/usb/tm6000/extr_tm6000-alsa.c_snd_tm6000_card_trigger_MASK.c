
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm6000_core {int wq_trigger; int stream_started; } ;
struct snd_tm6000_card {struct tm6000_core* core; } ;
struct snd_pcm_substream {int dummy; } ;


 int VAR_0 ;






 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 struct snd_tm6000_card* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1, int VAR_2)
{
 struct snd_tm6000_card *VAR_3 = FUNC_2(VAR_1);
 struct tm6000_core *VAR_4 = VAR_3->core;
 int VAR_5 = 0;

 switch (VAR_2) {
 case 132:
 case 131:
 case 130:
  FUNC_0(&VAR_4->stream_started, 1);
  break;
 case 133:
 case 128:
 case 129:
  FUNC_0(&VAR_4->stream_started, 0);
  break;
 default:
  VAR_5 = -VAR_0;
  break;
 }
 FUNC_1(&VAR_4->wq_trigger);

 return VAR_5;
}
