
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uac_rtd_params {int hw_ptr; } ;
struct snd_uac_chip {struct uac_rtd_params c_prm; struct uac_rtd_params p_prm; } ;
struct snd_pcm_substream {scalar_t__ stream; int runtime; } ;
typedef int snd_pcm_uframes_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct snd_uac_chip* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_2(struct snd_pcm_substream *VAR_1)
{
 struct snd_uac_chip *VAR_2 = FUNC_1(VAR_1);
 struct uac_rtd_params *VAR_3;

 if (VAR_1->stream == VAR_0)
  VAR_3 = &VAR_2->p_prm;
 else
  VAR_3 = &VAR_2->c_prm;

 return FUNC_0(VAR_1->runtime, VAR_3->hw_ptr);
}
