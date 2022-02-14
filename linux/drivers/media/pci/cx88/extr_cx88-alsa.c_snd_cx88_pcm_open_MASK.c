
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_3__ {unsigned int period_bytes_min; unsigned int period_bytes_max; } ;
struct snd_pcm_runtime {TYPE_1__ hw; } ;
struct cx88_audio_dev {struct snd_pcm_substream* substream; } ;
struct TYPE_4__ {int fifo_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*) ;
 TYPE_1__ VAR_5 ;
 int FUNC_2 (struct snd_pcm_runtime*,int ,int ) ;
 struct cx88_audio_dev* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_6)
{
 struct cx88_audio_dev *VAR_7 = FUNC_3(VAR_6);
 struct snd_pcm_runtime *VAR_8 = VAR_6->runtime;
 int VAR_9;

 if (!VAR_7) {
  FUNC_1("BUG: cx88 can't find device struct. Can't proceed with open\n");
  return -VAR_1;
 }

 VAR_9 = FUNC_2(VAR_8, 0,
      VAR_2);
 if (VAR_9 < 0)
  goto _error;

 VAR_7->substream = VAR_6;

 VAR_8->hw = VAR_5;

 if (VAR_4[VAR_3].fifo_size != VAR_0) {
  unsigned int VAR_10 = VAR_4[VAR_3].fifo_size / 4;

  VAR_10 &= ~7;
  VAR_8->hw.period_bytes_min = VAR_10;
  VAR_8->hw.period_bytes_max = VAR_10;
 }

 return 0;
_error:
 FUNC_0(1, "Error opening PCM!\n");
 return VAR_9;
}
