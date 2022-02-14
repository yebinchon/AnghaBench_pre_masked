
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm2835_audio_instance {int dummy; } ;
struct bcm2835_alsa_stream {struct bcm2835_audio_instance* instance; } ;


 int VAR_0 ;
 int FUNC_0 (struct bcm2835_audio_instance*,int ,int) ;
 int FUNC_1 (struct bcm2835_audio_instance*) ;
 int FUNC_2 (struct bcm2835_audio_instance*) ;

int FUNC_3(struct bcm2835_alsa_stream *VAR_1)
{
 struct bcm2835_audio_instance *VAR_2 = VAR_1->instance;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1->instance,
     VAR_0, 1);


 FUNC_2(VAR_2);
 VAR_1->instance = ((void*)0);
 FUNC_1(VAR_2);

 return VAR_3;
}
