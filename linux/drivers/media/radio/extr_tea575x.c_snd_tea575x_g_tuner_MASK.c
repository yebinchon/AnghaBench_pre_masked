
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_tuner {scalar_t__ index; int signal; int audmode; int rxsubchans; int rangehigh; int rangelow; int capability; int type; int name; } ;
struct v4l2_frequency_band {int rangehigh; int rangelow; int capability; int member_0; } ;
struct snd_tea575x {int val; scalar_t__ tuned; scalar_t__ stereo; scalar_t__ has_am; } ;
struct TYPE_2__ {int rangelow; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_0 (struct v4l2_tuner*,int ,int) ;
 int FUNC_1 (struct snd_tea575x*,struct v4l2_frequency_band*) ;
 int FUNC_2 (struct snd_tea575x*) ;
 int FUNC_3 (int ,char*,int) ;

int FUNC_4(struct snd_tea575x *VAR_9, struct v4l2_tuner *VAR_10)
{
 struct v4l2_frequency_band VAR_11 = { 0, };

 if (VAR_10->index > 0)
  return -VAR_1;

 FUNC_2(VAR_9);
 FUNC_1(VAR_9, &VAR_11);

 FUNC_0(VAR_10, 0, sizeof(*VAR_10));
 FUNC_3(VAR_10->name, VAR_9->has_am ? "FM/AM" : "FM", sizeof(VAR_10->name));
 VAR_10->type = VAR_5;
 VAR_10->capability = VAR_11.capability;
 VAR_10->rangelow = VAR_9->has_am ? VAR_8[VAR_0].rangelow : VAR_11.rangelow;
 VAR_10->rangehigh = VAR_11.rangehigh;
 VAR_10->rxsubchans = VAR_9->stereo ? VAR_7 : VAR_6;
 VAR_10->audmode = (VAR_9->val & VAR_2) ?
  VAR_3 : VAR_4;
 VAR_10->signal = VAR_9->tuned ? 0xffff : 0;
 return 0;
}
