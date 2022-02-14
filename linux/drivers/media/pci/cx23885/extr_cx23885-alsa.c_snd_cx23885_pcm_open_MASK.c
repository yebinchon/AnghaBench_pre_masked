
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_6__ {unsigned int period_bytes_min; unsigned int period_bytes_max; } ;
struct snd_pcm_runtime {TYPE_3__ hw; } ;
struct cx23885_audio_dev {TYPE_2__* dev; struct snd_pcm_substream* substream; } ;
struct TYPE_5__ {TYPE_1__* sram_channels; } ;
struct TYPE_4__ {int fifo_size; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*) ;
 TYPE_3__ VAR_4 ;
 int FUNC_2 (struct snd_pcm_runtime*,int ,int ) ;
 struct cx23885_audio_dev* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_5)
{
 struct cx23885_audio_dev *VAR_6 = FUNC_3(VAR_5);
 struct snd_pcm_runtime *VAR_7 = VAR_5->runtime;
 int VAR_8;

 if (!VAR_6) {
  FUNC_1("BUG: cx23885 can't find device struct. Can't proceed with open\n");
  return -VAR_2;
 }

 VAR_8 = FUNC_2(VAR_7, 0,
  VAR_3);
 if (VAR_8 < 0)
  goto _error;

 VAR_6->substream = VAR_5;

 VAR_7->hw = VAR_4;

 if (VAR_6->dev->sram_channels[VAR_0].fifo_size !=
  VAR_1) {
  unsigned int VAR_9 = VAR_6->dev->
   sram_channels[VAR_0].fifo_size / 4;
  VAR_9 &= ~7;
  VAR_7->hw.period_bytes_min = VAR_9;
  VAR_7->hw.period_bytes_max = VAR_9;
 }

 return 0;
_error:
 FUNC_0(1, "Error opening PCM!\n");
 return VAR_8;
}
