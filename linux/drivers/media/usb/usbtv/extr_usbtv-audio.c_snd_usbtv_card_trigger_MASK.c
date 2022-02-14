
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbtv {int snd_trigger; int snd_stream; } ;
struct snd_pcm_substream {int dummy; } ;


 int VAR_0 ;






 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;
 struct usbtv* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1, int VAR_2)
{
 struct usbtv *VAR_3 = FUNC_2(VAR_1);

 switch (VAR_2) {
 case 130:
 case 131:
 case 132:
  FUNC_0(&VAR_3->snd_stream, 1);
  break;
 case 129:
 case 128:
 case 133:
  FUNC_0(&VAR_3->snd_stream, 0);
  break;
 default:
  return -VAR_0;
 }

 FUNC_1(&VAR_3->snd_trigger);

 return 0;
}
