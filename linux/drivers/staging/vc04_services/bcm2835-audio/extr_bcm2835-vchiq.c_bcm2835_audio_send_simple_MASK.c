
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_audio_msg {int type; } ;
struct bcm2835_audio_instance {int dummy; } ;


 int FUNC_0 (struct bcm2835_audio_instance*,struct vc_audio_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct bcm2835_audio_instance *VAR_0,
         int VAR_1, bool VAR_2)
{
 struct vc_audio_msg VAR_3 = { .type = VAR_1 };

 return FUNC_0(VAR_0, &VAR_3, VAR_2);
}
