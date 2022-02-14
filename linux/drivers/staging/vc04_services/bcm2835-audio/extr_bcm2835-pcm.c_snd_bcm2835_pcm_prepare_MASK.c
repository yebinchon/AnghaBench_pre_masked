
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int channels; int format; int rate; struct bcm2835_alsa_stream* private_data; } ;
struct bcm2835_chip {int spdif_status; } ;
struct TYPE_2__ {void* sw_buffer_size; void* hw_buffer_size; } ;
struct bcm2835_alsa_stream {int draining; int interpolate_start; scalar_t__ period_offset; int pos; int period_size; void* buffer_size; TYPE_1__ pcm_indirect; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct bcm2835_alsa_stream*,int,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (struct snd_pcm_substream*) ;
 int FUNC_6 (struct snd_pcm_substream*) ;
 struct bcm2835_chip* FUNC_7 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_1)
{
 struct bcm2835_chip *VAR_2 = FUNC_7(VAR_1);
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;
 struct bcm2835_alsa_stream *VAR_4 = VAR_3->private_data;
 int VAR_5;
 int VAR_6;





 if (VAR_2->spdif_status & VAR_0)
  VAR_5 = 0;
 else
  VAR_5 = VAR_3->channels;

 VAR_6 = FUNC_1(VAR_4, VAR_5,
           VAR_3->rate,
           FUNC_4(VAR_3->format));
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_3(&VAR_4->pcm_indirect, 0, sizeof(VAR_4->pcm_indirect));

 VAR_4->pcm_indirect.hw_buffer_size =
  VAR_4->pcm_indirect.sw_buffer_size =
  FUNC_5(VAR_1);

 VAR_4->buffer_size = FUNC_5(VAR_1);
 VAR_4->period_size = FUNC_6(VAR_1);
 FUNC_0(&VAR_4->pos, 0);
 VAR_4->period_offset = 0;
 VAR_4->draining = 0;
 VAR_4->interpolate_start = FUNC_2();

 return 0;
}
