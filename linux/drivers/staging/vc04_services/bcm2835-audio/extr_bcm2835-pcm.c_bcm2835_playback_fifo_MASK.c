
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct bcm2835_alsa_stream {unsigned int period_size; unsigned int buffer_size; unsigned int period_offset; int interpolate_start; int pos; scalar_t__ draining; struct snd_pcm_substream* substream; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned int) ;
 int FUNC_2 () ;
 int FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (struct snd_pcm_substream*,int ) ;
 int FUNC_5 (struct snd_pcm_substream*) ;
 int FUNC_6 (struct snd_pcm_substream*) ;

void FUNC_7(struct bcm2835_alsa_stream *VAR_2,
      unsigned int VAR_3)
{
 struct snd_pcm_substream *VAR_4 = VAR_2->substream;
 unsigned int VAR_5;

 if (!VAR_2->period_size)
  return;

 if (VAR_3 >= VAR_2->buffer_size) {
  FUNC_5(VAR_4);
  FUNC_4(VAR_4,
        VAR_2->draining ?
        VAR_0 :
        VAR_1);
  FUNC_6(VAR_4);
  return;
 }

 VAR_5 = FUNC_0(&VAR_2->pos);
 VAR_5 += VAR_3;
 VAR_5 %= VAR_2->buffer_size;
 FUNC_1(&VAR_2->pos, VAR_5);

 VAR_2->period_offset += VAR_3;
 VAR_2->interpolate_start = FUNC_2();
 if (VAR_2->period_offset >= VAR_2->period_size) {
  VAR_2->period_offset %= VAR_2->period_size;
  FUNC_3(VAR_4);
 }
}
