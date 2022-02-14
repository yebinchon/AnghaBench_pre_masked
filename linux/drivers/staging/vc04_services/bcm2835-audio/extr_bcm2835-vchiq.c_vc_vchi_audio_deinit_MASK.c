
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm2835_audio_instance {int vchi_mutex; int dev; int vchi_handle; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct bcm2835_audio_instance *VAR_0)
{
 int VAR_1;

 FUNC_1(&VAR_0->vchi_mutex);
 FUNC_4(VAR_0->vchi_handle);


 VAR_1 = FUNC_3(VAR_0->vchi_handle);
 if (VAR_1) {
  FUNC_0(VAR_0->dev,
   "failed to close VCHI service connection (status=%d)\n",
   VAR_1);
 }

 FUNC_2(&VAR_0->vchi_mutex);
}
