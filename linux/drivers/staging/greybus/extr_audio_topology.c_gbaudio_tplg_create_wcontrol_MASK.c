
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_kcontrol_new {int dummy; } ;
struct gbaudio_module_info {int dev; } ;
struct TYPE_2__ {int type; } ;
struct gb_audio_control {int iface; int id; int name; TYPE_1__ info; } ;


 int VAR_0 ;


 int FUNC_0 (int ,char*,int ,int ,int) ;
 int FUNC_1 (struct gbaudio_module_info*,struct snd_kcontrol_new*,struct gb_audio_control*) ;
 int FUNC_2 (struct gbaudio_module_info*,struct snd_kcontrol_new*,struct gb_audio_control*) ;

__attribute__((used)) static int FUNC_3(struct gbaudio_module_info *VAR_1,
     struct snd_kcontrol_new *VAR_2,
     struct gb_audio_control *VAR_3)
{
 int VAR_4;

 switch (VAR_3->iface) {
 case 128:
  switch (VAR_3->info.type) {
  case 129:
   VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
   break;
  default:
   VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
   break;
  }
  break;
 default:
  return -VAR_0;
 }

 FUNC_0(VAR_1->dev, "%s:%d DAPM control created, ret:%d\n", VAR_3->name,
  VAR_3->id, VAR_4);
 return VAR_4;
}
