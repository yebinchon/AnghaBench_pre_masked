
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {TYPE_1__* status; } ;
struct gaudio_snd_dev {struct snd_pcm_substream* substream; } ;
struct gaudio {struct gaudio_snd_dev playback; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ snd_pcm_sframes_t ;
struct TYPE_2__ {scalar_t__ state; } ;


 int FUNC_0 (struct gaudio*,char*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct snd_pcm_runtime*,size_t) ;
 scalar_t__ FUNC_2 (struct snd_pcm_substream*,int ,int *) ;
 scalar_t__ FUNC_3 (struct snd_pcm_substream*,void*,scalar_t__) ;

size_t FUNC_4(struct gaudio *VAR_3, void *VAR_4, size_t VAR_5)
{
 struct gaudio_snd_dev *VAR_6 = &VAR_3->playback;
 struct snd_pcm_substream *VAR_7 = VAR_6->substream;
 struct snd_pcm_runtime *VAR_8 = VAR_7->runtime;
 ssize_t VAR_9;
 snd_pcm_sframes_t VAR_10;

try_again:
 if (VAR_8->status->state == VAR_2 ||
  VAR_8->status->state == VAR_1) {
  VAR_9 = FUNC_2(VAR_7,
    VAR_0, ((void*)0));
  if (VAR_9 < 0) {
   FUNC_0(VAR_3, "Preparing sound card failed: %d\n",
     (int)VAR_9);
   return VAR_9;
  }
 }

 VAR_10 = FUNC_1(VAR_8, VAR_5);
 VAR_9 = FUNC_3(VAR_6->substream, VAR_4, VAR_10);
 if (VAR_9 != VAR_10) {
  FUNC_0(VAR_3, "Playback error: %d\n", (int)VAR_9);
  goto try_again;
 }

 return 0;
}
