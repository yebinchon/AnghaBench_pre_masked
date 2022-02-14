
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct service_creation {struct bcm2835_audio_instance* callback_param; int callback; int service_id; int version; } ;
struct bcm2835_audio_instance {int vchi_handle; int dev; } ;
typedef int VCHI_INSTANCE_T ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,struct service_creation*,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(VCHI_INSTANCE_T VAR_5,
     struct bcm2835_audio_instance *VAR_6)
{
 struct service_creation VAR_7 = {
  .version = FUNC_0(VAR_2, VAR_1),
  .service_id = VAR_3,
  .callback = VAR_4,
  .callback_param = VAR_6,
 };
 int VAR_8;


 VAR_8 = FUNC_2(VAR_5, &VAR_7,
       &VAR_6->vchi_handle);

 if (VAR_8) {
  FUNC_1(VAR_6->dev,
   "failed to open VCHI service connection (status=%d)\n",
   VAR_8);
  return -VAR_0;
 }


 FUNC_3(VAR_6->vchi_handle);

 return 0;
}
