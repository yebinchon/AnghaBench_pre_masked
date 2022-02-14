
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_tm6000_card {struct snd_pcm_substream* substream; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int hw; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct snd_pcm_runtime*,int ) ;
 int FUNC_2 (struct snd_pcm_runtime*,int ,int ) ;
 struct snd_tm6000_card* FUNC_3 (struct snd_pcm_substream*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_2)
{
 struct snd_tm6000_card *VAR_3 = FUNC_3(VAR_2);
 struct snd_pcm_runtime *VAR_4 = VAR_2->runtime;
 int VAR_5;

 VAR_5 = FUNC_2(VAR_4, 0,
      VAR_0);
 if (VAR_5 < 0)
  goto _error;

 VAR_3->substream = VAR_2;

 VAR_4->hw = VAR_1;
 FUNC_1(VAR_4, VAR_0);

 return 0;
_error:
 FUNC_0(1, "Error opening PCM!\n");
 return VAR_5;
}
