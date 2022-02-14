
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uac_rtd_params {int max_psize; int rbuf; struct snd_pcm_substream* ss; int lock; scalar_t__ hw_ptr; } ;
struct uac_params {int req_number; } ;
struct snd_uac_chip {struct uac_rtd_params c_prm; struct uac_rtd_params p_prm; struct g_audio* audio_dev; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct g_audio {struct uac_params params; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;




 int FUNC_0 (int ,int ,int) ;
 struct snd_uac_chip* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_2, int VAR_3)
{
 struct snd_uac_chip *VAR_4 = FUNC_1(VAR_2);
 struct uac_rtd_params *VAR_5;
 struct g_audio *VAR_6;
 struct uac_params *VAR_7;
 unsigned long VAR_8;
 int VAR_9 = 0;

 VAR_6 = VAR_4->audio_dev;
 VAR_7 = &VAR_6->params;

 if (VAR_2->stream == VAR_1)
  VAR_5 = &VAR_4->p_prm;
 else
  VAR_5 = &VAR_4->c_prm;

 FUNC_2(&VAR_5->lock, VAR_8);


 VAR_5->hw_ptr = 0;

 switch (VAR_3) {
 case 130:
 case 131:
  VAR_5->ss = VAR_2;
  break;
 case 129:
 case 128:
  VAR_5->ss = ((void*)0);
  break;
 default:
  VAR_9 = -VAR_0;
 }

 FUNC_3(&VAR_5->lock, VAR_8);


 if (VAR_2->stream == VAR_1 && !VAR_5->ss)
  FUNC_0(VAR_5->rbuf, 0, VAR_5->max_psize * VAR_7->req_number);

 return VAR_9;
}
