
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_audio_msg {int type; } ;
struct bcm2835_audio_instance {int result; int dev; int msg_avail_comp; int vchi_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,struct vc_audio_msg*,int) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int FUNC_5(struct bcm2835_audio_instance *VAR_2,
      struct vc_audio_msg *VAR_3, bool VAR_4)
{
 int VAR_5;

 if (VAR_4) {
  VAR_2->result = -1;
  FUNC_1(&VAR_2->msg_avail_comp);
 }

 VAR_5 = FUNC_3(VAR_2->vchi_handle,
        VAR_3, sizeof(*VAR_3));
 if (VAR_5) {
  FUNC_0(VAR_2->dev,
   "vchi message queue failed: %d, msg=%d\n",
   VAR_5, VAR_3->type);
  return -VAR_0;
 }

 if (VAR_4) {
  if (!FUNC_4(&VAR_2->msg_avail_comp,
       FUNC_2(10 * 1000))) {
   FUNC_0(VAR_2->dev,
    "vchi message timeout, msg=%d\n", VAR_3->type);
   return -VAR_1;
  } else if (VAR_2->result) {
   FUNC_0(VAR_2->dev,
    "vchi message response error:%d, msg=%d\n",
    VAR_2->result, VAR_3->type);
   return -VAR_0;
  }
 }

 return 0;
}
