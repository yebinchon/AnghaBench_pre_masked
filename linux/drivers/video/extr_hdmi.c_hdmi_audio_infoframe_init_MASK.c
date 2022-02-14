
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_audio_infoframe {int version; int length; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hdmi_audio_infoframe*,int ,int) ;

int FUNC_1(struct hdmi_audio_infoframe *VAR_2)
{
 FUNC_0(VAR_2, 0, sizeof(*VAR_2));

 VAR_2->type = VAR_1;
 VAR_2->version = 1;
 VAR_2->length = VAR_0;

 return 0;
}
