
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bcm2835_vchi_ctx {int vchi_instance; } ;
struct bcm2835_audio_instance {int peer_version; int max_packet; int vchi_handle; struct bcm2835_alsa_stream* alsa_stream; int dev; int vchi_mutex; } ;
struct bcm2835_alsa_stream {struct bcm2835_audio_instance* instance; TYPE_1__* chip; } ;
struct TYPE_2__ {int dev; struct bcm2835_vchi_ctx* vchi_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bcm2835_audio_instance*) ;
 int FUNC_1 (struct bcm2835_audio_instance*,int ,int) ;
 int FUNC_2 (struct bcm2835_audio_instance*) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct bcm2835_audio_instance*) ;
 struct bcm2835_audio_instance* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct bcm2835_audio_instance*) ;
 int FUNC_7 (int ,struct bcm2835_audio_instance*) ;
 int FUNC_8 (int ,int*) ;

int FUNC_9(struct bcm2835_alsa_stream *VAR_4)
{
 struct bcm2835_vchi_ctx *VAR_5 = VAR_4->chip->vchi_ctx;
 struct bcm2835_audio_instance *VAR_6;
 int VAR_7;


 VAR_6 = FUNC_4(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;
 FUNC_5(&VAR_6->vchi_mutex);
 VAR_6->dev = VAR_4->chip->dev;
 VAR_6->alsa_stream = VAR_4;
 VAR_4->instance = VAR_6;

 VAR_7 = FUNC_7(VAR_5->vchi_instance,
     VAR_6);
 if (VAR_7 < 0)
  goto free_instance;

 VAR_7 = FUNC_1(VAR_6, VAR_2,
     0);
 if (VAR_7 < 0)
  goto deinit;

 FUNC_0(VAR_6);
 FUNC_8(VAR_6->vchi_handle, &VAR_6->peer_version);
 FUNC_2(VAR_6);
 if (VAR_6->peer_version < 2 || VAR_3)
  VAR_6->max_packet = 0;
 else
  VAR_6->max_packet = 4000;

 return 0;

 deinit:
 FUNC_6(VAR_6);
 free_instance:
 VAR_4->instance = ((void*)0);
 FUNC_3(VAR_6);
 return VAR_7;
}
