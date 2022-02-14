
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw686x_dev {int audio_enabled; int lock; int dma_delay_timer; struct tw686x_audio_channel* audio_channels; } ;
struct tw686x_audio_channel {int lock; int ** curr_bufs; scalar_t__ ch; } ;
struct snd_pcm_substream {size_t number; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 struct tw686x_dev* FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct tw686x_dev*,scalar_t__) ;
 int FUNC_6 (struct tw686x_dev*,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_4, int VAR_5)
{
 struct tw686x_dev *VAR_6 = FUNC_2(VAR_4);
 struct tw686x_audio_channel *VAR_7 = &VAR_6->audio_channels[VAR_4->number];
 unsigned long VAR_8;
 int VAR_9 = 0;

 switch (VAR_5) {
 case 129:
  if (VAR_7->curr_bufs[0] && VAR_7->curr_bufs[1]) {
   FUNC_3(&VAR_6->lock, VAR_8);
   VAR_6->audio_enabled = 1;
   FUNC_6(VAR_6,
    VAR_0 + VAR_7->ch);
   FUNC_4(&VAR_6->lock, VAR_8);

   FUNC_0(&VAR_6->dma_delay_timer,
      VAR_3 + FUNC_1(100));
  } else {
   VAR_9 = -VAR_2;
  }
  break;
 case 128:
  FUNC_3(&VAR_6->lock, VAR_8);
  VAR_6->audio_enabled = 0;
  FUNC_5(VAR_6, VAR_0 + VAR_7->ch);
  FUNC_4(&VAR_6->lock, VAR_8);

  FUNC_3(&VAR_7->lock, VAR_8);
  VAR_7->curr_bufs[0] = ((void*)0);
  VAR_7->curr_bufs[1] = ((void*)0);
  FUNC_4(&VAR_7->lock, VAR_8);
  break;
 default:
  VAR_9 = -VAR_1;
 }
 return VAR_9;
}
