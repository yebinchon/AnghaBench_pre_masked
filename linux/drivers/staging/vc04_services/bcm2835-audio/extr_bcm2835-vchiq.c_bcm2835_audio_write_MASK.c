
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int count; int cookie2; int cookie1; int max_packet; } ;
struct vc_audio_msg {TYPE_1__ write; int type; } ;
struct bcm2835_audio_instance {int dev; int vchi_handle; int max_packet; } ;
struct bcm2835_alsa_stream {struct bcm2835_audio_instance* instance; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bcm2835_audio_instance*) ;
 int FUNC_1 (struct bcm2835_audio_instance*,struct vc_audio_msg*,int) ;
 int FUNC_2 (struct bcm2835_audio_instance*) ;
 int FUNC_3 (int ,char*,unsigned int,int) ;
 int FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (int ,void*,unsigned int,int ,int *) ;
 int FUNC_6 (int ,void*,int) ;

int FUNC_7(struct bcm2835_alsa_stream *VAR_5,
   unsigned int VAR_6, void *VAR_7)
{
 struct bcm2835_audio_instance *VAR_8 = VAR_5->instance;
 struct vc_audio_msg VAR_9 = {
  .type = VAR_2,
  .write.count = VAR_6,
  .write.max_packet = VAR_8->max_packet,
  .write.cookie1 = VAR_3,
  .write.cookie2 = VAR_4,
 };
 unsigned int VAR_10;
 int VAR_11, VAR_12;

 if (!VAR_6)
  return 0;

 FUNC_0(VAR_8);
 VAR_11 = FUNC_1(VAR_8, &VAR_9, 0);
 if (VAR_11 < 0)
  goto unlock;

 VAR_10 = VAR_6;
 if (!VAR_8->max_packet) {

  VAR_12 = FUNC_5(VAR_8->vchi_handle,
        VAR_7, VAR_10,
        VAR_1,
        ((void*)0));
 } else {
  while (VAR_10 > 0) {
   int VAR_13 = FUNC_4(VAR_8->max_packet, VAR_10);

   VAR_12 = FUNC_6(VAR_8->vchi_handle,
          VAR_7, VAR_13);
   VAR_7 += VAR_13;
   VAR_10 -= VAR_13;
  }
 }

 if (VAR_12) {
  FUNC_3(VAR_8->dev,
   "failed on %d bytes transfer (status=%d)\n",
   VAR_6, VAR_12);
  VAR_11 = -VAR_0;
 }

 unlock:
 FUNC_2(VAR_8);
 return VAR_11;
}
