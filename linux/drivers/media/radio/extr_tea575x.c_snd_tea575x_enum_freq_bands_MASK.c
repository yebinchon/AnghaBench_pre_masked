
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency_band {scalar_t__ tuner; int index; int capability; } ;
struct snd_tea575x {int cannot_read_data; int has_am; int tea5759; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct v4l2_frequency_band* VAR_5 ;

int FUNC_0(struct snd_tea575x *VAR_6,
     struct v4l2_frequency_band *VAR_7)
{
 int VAR_8;

 if (VAR_7->tuner != 0)
  return -VAR_3;

 switch (VAR_7->index) {
 case 0:
  if (VAR_6->tea5759)
   VAR_8 = VAR_2;
  else
   VAR_8 = VAR_1;
  break;
 case 1:
  if (VAR_6->has_am) {
   VAR_8 = VAR_0;
   break;
  }

 default:
  return -VAR_3;
 }

 *VAR_7 = VAR_5[VAR_8];
 if (!VAR_6->cannot_read_data)
  VAR_7->capability |= VAR_4;

 return 0;
}
