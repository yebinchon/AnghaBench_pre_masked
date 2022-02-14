
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct gaudio_snd_dev {int access; int format; int channels; int rate; int card; struct snd_pcm_substream* substream; } ;
typedef scalar_t__ snd_pcm_sframes_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int,int,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct snd_pcm_hw_params*,int ,int,int ) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 struct snd_pcm_hw_params* FUNC_5 (int,int ) ;
 int FUNC_6 (struct snd_pcm_hw_params*) ;
 int FUNC_7 (struct snd_pcm_hw_params*) ;
 int FUNC_8 (struct snd_pcm_hw_params*) ;
 int FUNC_9 (struct snd_pcm_hw_params*) ;
 scalar_t__ FUNC_10 (struct snd_pcm_substream*,int ,struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_11(struct gaudio_snd_dev *VAR_11)
{
 struct snd_pcm_substream *VAR_12 = VAR_11->substream;
 struct snd_pcm_hw_params *VAR_13;
 snd_pcm_sframes_t VAR_14;







 VAR_11->access = VAR_2;
 VAR_11->format = VAR_3;
 VAR_11->channels = 2;
 VAR_11->rate = 48000;

 VAR_13 = FUNC_5(sizeof(*VAR_13), VAR_1);
 if (!VAR_13)
  return -VAR_0;

 FUNC_3(VAR_13);
 FUNC_2(VAR_13, VAR_4,
   VAR_11->access, 0);
 FUNC_2(VAR_13, VAR_6,
   VAR_11->format, 0);
 FUNC_2(VAR_13, VAR_5,
   VAR_11->channels, 0);
 FUNC_2(VAR_13, VAR_7,
   VAR_11->rate, 0);

 FUNC_10(VAR_12, VAR_8, ((void*)0));
 FUNC_10(VAR_12, VAR_9, VAR_13);

 VAR_14 = FUNC_10(VAR_12, VAR_10, ((void*)0));
 if (VAR_14 < 0) {
  FUNC_0(VAR_11->card,
   "Preparing sound card failed: %d\n", (int)VAR_14);
  FUNC_4(VAR_13);
  return VAR_14;
 }


 VAR_11->access = FUNC_6(VAR_13);
 VAR_11->format = FUNC_8(VAR_13);
 VAR_11->channels = FUNC_7(VAR_13);
 VAR_11->rate = FUNC_9(VAR_13);

 FUNC_4(VAR_13);

 FUNC_1(VAR_11->card,
  "Hardware params: access %x, format %x, channels %d, rate %d\n",
  VAR_11->access, VAR_11->format, VAR_11->channels, VAR_11->rate);

 return 0;
}
