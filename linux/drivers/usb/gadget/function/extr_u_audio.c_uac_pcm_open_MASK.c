
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uac_params {int p_ssize; int c_ssize; int p_srate; int c_srate; int p_chmask; int c_chmask; } ;
struct TYPE_5__ {int max_psize; int lock; } ;
struct TYPE_4__ {int max_psize; int lock; } ;
struct snd_uac_chip {TYPE_2__ c_prm; TYPE_1__ p_prm; scalar_t__ p_residue; struct g_audio* audio_dev; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct TYPE_6__ {int rate_min; int period_bytes_min; int periods_min; int rate_max; void* channels_min; void* channels_max; void* formats; } ;
struct snd_pcm_runtime {TYPE_3__ hw; } ;
struct g_audio {struct uac_params params; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct snd_pcm_runtime*,int ) ;
 struct snd_uac_chip* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int *) ;
 TYPE_3__ VAR_5 ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_6)
{
 struct snd_uac_chip *VAR_7 = FUNC_2(VAR_6);
 struct snd_pcm_runtime *VAR_8 = VAR_6->runtime;
 struct g_audio *VAR_9;
 struct uac_params *VAR_10;
 int VAR_11, VAR_12;
 int VAR_13, VAR_14;
 int VAR_15, VAR_16;

 VAR_9 = VAR_7->audio_dev;
 VAR_10 = &VAR_9->params;
 VAR_11 = VAR_10->p_ssize;
 VAR_12 = VAR_10->c_ssize;
 VAR_13 = VAR_10->p_srate;
 VAR_14 = VAR_10->c_srate;
 VAR_15 = VAR_10->p_chmask;
 VAR_16 = VAR_10->c_chmask;
 VAR_7->p_residue = 0;

 VAR_8->hw = VAR_5;

 if (VAR_6->stream == VAR_4) {
  FUNC_3(&VAR_7->p_prm.lock);
  VAR_8->hw.rate_min = VAR_13;
  switch (VAR_11) {
  case 3:
   VAR_8->hw.formats = VAR_1;
   break;
  case 4:
   VAR_8->hw.formats = VAR_2;
   break;
  default:
   VAR_8->hw.formats = VAR_0;
   break;
  }
  VAR_8->hw.channels_min = FUNC_0(VAR_15);
  VAR_8->hw.period_bytes_min = 2 * VAR_7->p_prm.max_psize
      / VAR_8->hw.periods_min;
 } else {
  FUNC_3(&VAR_7->c_prm.lock);
  VAR_8->hw.rate_min = VAR_14;
  switch (VAR_12) {
  case 3:
   VAR_8->hw.formats = VAR_1;
   break;
  case 4:
   VAR_8->hw.formats = VAR_2;
   break;
  default:
   VAR_8->hw.formats = VAR_0;
   break;
  }
  VAR_8->hw.channels_min = FUNC_0(VAR_16);
  VAR_8->hw.period_bytes_min = 2 * VAR_7->c_prm.max_psize
      / VAR_8->hw.periods_min;
 }

 VAR_8->hw.rate_max = VAR_8->hw.rate_min;
 VAR_8->hw.channels_max = VAR_8->hw.channels_min;

 FUNC_1(VAR_8, VAR_3);

 return 0;
}
