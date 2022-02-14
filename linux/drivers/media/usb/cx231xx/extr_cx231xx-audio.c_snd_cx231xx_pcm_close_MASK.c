
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct TYPE_4__ {scalar_t__ users; int shutdown; } ;
struct cx231xx {int wq_trigger; int stream_started; int dev; TYPE_2__ adev; int lock; } ;
struct TYPE_3__ {int * dma_area; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct cx231xx*,int ,int ) ;
 int FUNC_3 (struct cx231xx*,int ,int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct cx231xx* FUNC_9 (struct snd_pcm_substream*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct snd_pcm_substream *VAR_2)
{
 int VAR_3;
 struct cx231xx *VAR_4 = FUNC_9(VAR_2);

 FUNC_4(VAR_4->dev, "closing device\n");


 FUNC_6(&VAR_4->lock);
 VAR_3 = FUNC_2(VAR_4, 0, VAR_0);



 VAR_3 = FUNC_3(VAR_4, VAR_1, 0);
 if (VAR_3 < 0) {
  FUNC_5(VAR_4->dev,
   "failed to set alternate setting !\n");

  FUNC_7(&VAR_4->lock);
  return VAR_3;
 }

 VAR_4->adev.users--;
 if (VAR_2->runtime->dma_area) {
  FUNC_4(VAR_4->dev, "freeing\n");
  FUNC_10(VAR_2->runtime->dma_area);
  VAR_2->runtime->dma_area = ((void*)0);
 }
 FUNC_7(&VAR_4->lock);

 if (VAR_4->adev.users == 0 && VAR_4->adev.shutdown == 1) {
  FUNC_4(VAR_4->dev, "audio users: %d\n", VAR_4->adev.users);
  FUNC_4(VAR_4->dev, "disabling audio stream!\n");
  VAR_4->adev.shutdown = 0;
  FUNC_4(VAR_4->dev, "released lock\n");
  if (FUNC_0(&VAR_4->stream_started) > 0) {
   FUNC_1(&VAR_4->stream_started, 0);
   FUNC_8(&VAR_4->wq_trigger);
  }
 }
 return 0;
}
