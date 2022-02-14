
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct em28xx {scalar_t__ disconnected; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 unsigned int FUNC_2 (struct snd_pcm_hw_params*) ;
 unsigned int FUNC_3 (struct snd_pcm_hw_params*) ;
 unsigned int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct snd_pcm_substream*,int ) ;
 struct em28xx* FUNC_6 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_1,
     struct snd_pcm_hw_params *VAR_2)
{
 int VAR_3;
 struct em28xx *VAR_4 = FUNC_6(VAR_1);

 if (VAR_4->disconnected)
  return -VAR_0;

 FUNC_0("Setting capture parameters\n");

 VAR_3 = FUNC_5(VAR_1,
        FUNC_1(VAR_2));
 if (VAR_3 < 0)
  return VAR_3;
 return 0;
}
