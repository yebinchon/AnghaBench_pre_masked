
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_2__* runtime; } ;
struct TYPE_3__ {int wq_trigger; int stream_started; int users; } ;
struct em28xx {int mute; int ref; int lock; TYPE_1__ adev; } ;
struct TYPE_4__ {int * dma_area; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct em28xx*) ;
 int VAR_0 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct em28xx* FUNC_8 (struct snd_pcm_substream*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream *VAR_1)
{
 struct em28xx *VAR_2 = FUNC_8(VAR_1);

 FUNC_2("closing device\n");

 VAR_2->mute = 1;
 FUNC_5(&VAR_2->lock);
 VAR_2->adev.users--;
 if (FUNC_0(&VAR_2->adev.stream_started) > 0) {
  FUNC_1(&VAR_2->adev.stream_started, 0);
  FUNC_7(&VAR_2->adev.wq_trigger);
 }

 FUNC_3(VAR_2);
 if (VAR_1->runtime->dma_area) {
  FUNC_2("freeing\n");
  FUNC_9(VAR_1->runtime->dma_area);
  VAR_1->runtime->dma_area = ((void*)0);
 }
 FUNC_6(&VAR_2->lock);
 FUNC_4(&VAR_2->ref, VAR_0);

 return 0;
}
