
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_ivtv_card {int dummy; } ;


 int FUNC_0 (struct snd_ivtv_card*) ;
 int FUNC_1 (struct snd_ivtv_card*) ;
 int FUNC_2 (struct snd_pcm_substream*,unsigned int,void*) ;
 struct snd_ivtv_card* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_0,
       unsigned int VAR_1, void *VAR_2)
{
 struct snd_ivtv_card *VAR_3 = FUNC_3(VAR_0);
 int VAR_4;

 FUNC_0(VAR_3);
 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2);
 FUNC_1(VAR_3);
 return VAR_4;
}
