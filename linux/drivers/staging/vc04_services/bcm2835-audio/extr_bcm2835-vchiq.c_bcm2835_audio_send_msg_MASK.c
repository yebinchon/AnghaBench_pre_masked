
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_audio_msg {int dummy; } ;
struct bcm2835_audio_instance {int dummy; } ;


 int FUNC_0 (struct bcm2835_audio_instance*) ;
 int FUNC_1 (struct bcm2835_audio_instance*,struct vc_audio_msg*,int) ;
 int FUNC_2 (struct bcm2835_audio_instance*) ;

__attribute__((used)) static int FUNC_3(struct bcm2835_audio_instance *VAR_0,
      struct vc_audio_msg *VAR_1, bool VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_0);
 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 FUNC_2(VAR_0);
 return VAR_3;
}
