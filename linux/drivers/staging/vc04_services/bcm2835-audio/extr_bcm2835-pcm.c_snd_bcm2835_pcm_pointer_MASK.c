
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int rate; int delay; struct bcm2835_alsa_stream* private_data; } ;
struct bcm2835_alsa_stream {int pos; int pcm_indirect; int interpolate_start; } ;
typedef int snd_pcm_uframes_t ;
typedef int snd_pcm_sframes_t ;
typedef int ktime_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct snd_pcm_substream*,int *,int ) ;

__attribute__((used)) static snd_pcm_uframes_t
FUNC_7(struct snd_pcm_substream *VAR_0)
{
 struct snd_pcm_runtime *VAR_1 = VAR_0->runtime;
 struct bcm2835_alsa_stream *VAR_2 = VAR_1->private_data;
 ktime_t VAR_3 = FUNC_3();






 if ((FUNC_5(VAR_2->interpolate_start)) &&
     (FUNC_2(VAR_2->interpolate_start, VAR_3) < 0)) {
  u64 VAR_4 =
   (FUNC_5(FUNC_4(VAR_3,
    VAR_2->interpolate_start)));
  u64 VAR_5 =
   FUNC_1((VAR_4 * VAR_1->rate), 1000000000);
  snd_pcm_sframes_t VAR_6 =
   -VAR_5;
  VAR_1->delay = VAR_6;
 }

 return FUNC_6(VAR_0,
  &VAR_2->pcm_indirect,
  FUNC_0(&VAR_2->pos));
}
