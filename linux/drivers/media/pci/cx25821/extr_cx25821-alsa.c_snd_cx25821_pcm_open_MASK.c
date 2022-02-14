
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_3__ {unsigned int period_bytes_min; unsigned int period_bytes_max; } ;
struct snd_pcm_runtime {TYPE_1__ hw; } ;
struct cx25821_audio_dev {struct snd_pcm_substream* substream; } ;
struct TYPE_4__ {int fifo_size; } ;


 unsigned int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*) ;
 TYPE_1__ VAR_6 ;
 int FUNC_2 (struct snd_pcm_runtime*,int ,int ) ;
 struct cx25821_audio_dev* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_7)
{
 struct cx25821_audio_dev *VAR_8 = FUNC_3(VAR_7);
 struct snd_pcm_runtime *VAR_9 = VAR_7->runtime;
 int VAR_10;
 unsigned int VAR_11 = 0;

 if (!VAR_8) {
  FUNC_1("DEBUG: cx25821 can't find device struct. Can't proceed with open\n");
  return -VAR_3;
 }

 VAR_10 = FUNC_2(VAR_9, 0,
      VAR_4);
 if (VAR_10 < 0)
  goto _error;

 VAR_8->substream = VAR_7;

 VAR_9->hw = VAR_6;

 if (VAR_5[VAR_1].fifo_size !=
     VAR_2) {

  VAR_11 = VAR_5[VAR_1].fifo_size / 3;
  VAR_11 &= ~7;

  if (VAR_11 > VAR_0)
   VAR_11 = VAR_0;

  VAR_9->hw.period_bytes_min = VAR_11;
  VAR_9->hw.period_bytes_max = VAR_11;
 }

 return 0;
_error:
 FUNC_0(1, "Error opening PCM!\n");
 return VAR_10;
}
