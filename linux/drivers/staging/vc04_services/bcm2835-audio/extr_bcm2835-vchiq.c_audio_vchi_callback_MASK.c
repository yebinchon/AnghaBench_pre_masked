
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ cookie1; scalar_t__ cookie2; int count; } ;
struct TYPE_3__ {int success; } ;
struct vc_audio_msg {scalar_t__ type; TYPE_2__ complete; TYPE_1__ result; } ;
struct bcm2835_audio_instance {int dev; int alsa_stream; int msg_avail_comp; int result; int vchi_handle; } ;
typedef int m ;
typedef scalar_t__ VCHI_CALLBACK_REASON_T ;


 scalar_t__ const VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,struct vc_audio_msg*,int,int*,int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_6,
    const VCHI_CALLBACK_REASON_T VAR_7,
    void *VAR_8)
{
 struct bcm2835_audio_instance *VAR_9 = VAR_6;
 struct vc_audio_msg VAR_10;
 int VAR_11;
 int VAR_12;

 if (VAR_7 != VAR_0)
  return;

 VAR_12 = FUNC_3(VAR_9->vchi_handle,
      &VAR_10, sizeof(VAR_10), &VAR_11, VAR_1);
 if (VAR_10.type == VAR_3) {
  VAR_9->result = VAR_10.result.success;
  FUNC_1(&VAR_9->msg_avail_comp);
 } else if (VAR_10.type == VAR_2) {
  if (VAR_10.complete.cookie1 != VAR_4 ||
      VAR_10.complete.cookie2 != VAR_5)
   FUNC_2(VAR_9->dev, "invalid cookie\n");
  else
   FUNC_0(VAR_9->alsa_stream,
           VAR_10.complete.count);
 } else {
  FUNC_2(VAR_9->dev, "unexpected callback type=%d\n", VAR_10.type);
 }
}
