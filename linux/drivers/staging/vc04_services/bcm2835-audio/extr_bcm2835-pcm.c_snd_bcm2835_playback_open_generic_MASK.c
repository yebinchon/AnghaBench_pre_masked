
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int number; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int hw; int private_free; struct bcm2835_alsa_stream* private_data; } ;
struct bcm2835_chip {int opened; int audio_mutex; struct bcm2835_alsa_stream** alsa_stream; scalar_t__ spdif_status; int dev; } ;
struct bcm2835_alsa_stream {int idx; struct snd_pcm_substream* substream; struct bcm2835_chip* chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct bcm2835_alsa_stream*) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (struct bcm2835_alsa_stream*) ;
 struct bcm2835_alsa_stream* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (struct snd_pcm_runtime*,int ,int,int ) ;
 int FUNC_7 (struct snd_pcm_runtime*,int ,int ,int) ;
 struct bcm2835_chip* FUNC_8 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_9(
 struct snd_pcm_substream *VAR_11, int VAR_12)
{
 struct bcm2835_chip *VAR_13 = FUNC_8(VAR_11);
 struct snd_pcm_runtime *VAR_14 = VAR_11->runtime;
 struct bcm2835_alsa_stream *VAR_15;
 int VAR_16;
 int VAR_17;

 FUNC_4(&VAR_13->audio_mutex);
 VAR_16 = VAR_11->number;

 if (VAR_12 && VAR_13->opened) {
  VAR_17 = -VAR_0;
  goto out;
 } else if (!VAR_12 && (VAR_13->opened & (1 << VAR_16))) {
  VAR_17 = -VAR_0;
  goto out;
 }
 if (VAR_16 >= VAR_4) {
  FUNC_1(VAR_13->dev,
   "substream(%d) device doesn't exist max(%d) substreams allowed\n",
   VAR_16, VAR_4);
  VAR_17 = -VAR_1;
  goto out;
 }

 VAR_15 = FUNC_3(sizeof(*VAR_15), VAR_3);
 if (!VAR_15) {
  VAR_17 = -VAR_2;
  goto out;
 }


 VAR_15->chip = VAR_13;
 VAR_15->substream = VAR_11;
 VAR_15->idx = VAR_16;

 VAR_17 = FUNC_0(VAR_15);
 if (VAR_17) {
  FUNC_2(VAR_15);
  goto out;
 }
 VAR_14->private_data = VAR_15;
 VAR_14->private_free = VAR_8;
 if (VAR_12) {
  VAR_14->hw = VAR_10;
 } else {

  VAR_13->spdif_status = 0;
  VAR_14->hw = VAR_9;
 }

 FUNC_7(VAR_14,
       0,
       VAR_5,
       16);


 FUNC_6(VAR_14,
         VAR_6,
         10 * 1000, VAR_7);

 VAR_13->alsa_stream[VAR_16] = VAR_15;

 VAR_13->opened |= (1 << VAR_16);

out:
 FUNC_5(&VAR_13->audio_mutex);

 return VAR_17;
}
