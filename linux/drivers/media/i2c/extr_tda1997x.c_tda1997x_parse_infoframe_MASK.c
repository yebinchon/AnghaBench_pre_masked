
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int pixel_repeat; int colorspace; } ;
struct TYPE_6__ {int channel_allocation; int channels; int sample_size; int sample_frequency; } ;
struct TYPE_5__ {int type; } ;
union hdmi_infoframe {TYPE_3__ avi; TYPE_2__ audio; TYPE_1__ any; } ;
typedef int u8 ;
typedef int u16 ;
struct v4l2_subdev {int dummy; } ;
struct tda1997x_state {int audio_samplerate; int audio_samplesize; TYPE_3__ avi_infoframe; int audio_ch_alloc; int audio_channels; TYPE_4__* client; struct v4l2_subdev sd; } ;
typedef int buffer ;
struct TYPE_8__ {int dev; } ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int *,union hdmi_infoframe*) ;
 int FUNC_1 (union hdmi_infoframe*,int*,int) ;
 int FUNC_2 (struct v4l2_subdev*,int ) ;
 int FUNC_3 (struct v4l2_subdev*,int ,int,int*) ;
 int FUNC_4 (struct v4l2_subdev*,int ,int) ;
 int FUNC_5 (struct tda1997x_state*) ;
 int FUNC_6 (struct v4l2_subdev*,int ) ;
 int FUNC_7 (struct v4l2_subdev*) ;
 int FUNC_8 (struct v4l2_subdev*,int ,int) ;
 int FUNC_9 (TYPE_4__*,char*,int,int ,int) ;

__attribute__((used)) static unsigned int
FUNC_10(struct tda1997x_state *VAR_8, u16 VAR_9)
{
 struct v4l2_subdev *VAR_10 = &VAR_8->sd;
 union hdmi_infoframe VAR_11;
 u8 VAR_12[40];
 u8 VAR_13;
 int VAR_14, VAR_15;


 VAR_14 = FUNC_3(VAR_10, VAR_9, sizeof(VAR_12), VAR_12);
 VAR_15 = FUNC_1(&VAR_11, VAR_12, sizeof(VAR_12));
 if (VAR_15) {
  FUNC_9(VAR_8->client,
   "failed parsing %d byte infoframe: 0x%04x/0x%02x\n",
   VAR_14, VAR_9, VAR_12[0]);
  return VAR_15;
 }
 FUNC_0(VAR_1, &VAR_8->client->dev, &VAR_11);
 switch (VAR_11.any.type) {

 case 129:

  switch (VAR_11.audio.sample_frequency) {
  case 139:
   VAR_8->audio_samplerate = 32000;
   break;
  case 138:
   VAR_8->audio_samplerate = 44100;
   break;
  case 137:
   VAR_8->audio_samplerate = 48000;
   break;
  case 136:
   VAR_8->audio_samplerate = 88200;
   break;
  case 135:
   VAR_8->audio_samplerate = 96000;
   break;
  case 141:
   VAR_8->audio_samplerate = 176400;
   break;
  case 140:
   VAR_8->audio_samplerate = 192000;
   break;
  default:
  case 134:
   break;
  }


  switch (VAR_11.audio.sample_size) {
  case 133:
   VAR_8->audio_samplesize = 16;
   break;
  case 132:
   VAR_8->audio_samplesize = 20;
   break;
  case 131:
   VAR_8->audio_samplesize = 24;
   break;
  case 130:
  default:
   break;
  }


  VAR_8->audio_channels = VAR_11.audio.channels;
  if (VAR_11.audio.channel_allocation &&
      VAR_11.audio.channel_allocation != VAR_8->audio_ch_alloc) {

   VAR_8->audio_ch_alloc = VAR_11.audio.channel_allocation;
   FUNC_6(VAR_10, VAR_8->audio_ch_alloc);

   FUNC_8(VAR_10, VAR_7, 0);
  }
  break;


 case 128:
  VAR_8->avi_infoframe = VAR_11.avi;
  FUNC_5(VAR_8);


  VAR_13 = FUNC_2(VAR_10, VAR_6);
  VAR_13 &= ~VAR_4;
  if (VAR_11.avi.colorspace == VAR_0)
   VAR_13 |= (VAR_2 << VAR_5);
  FUNC_4(VAR_10, VAR_6, VAR_13);


  VAR_13 = FUNC_2(VAR_10, VAR_6);
  VAR_13 &= ~VAR_3;
  VAR_13 |= VAR_11.avi.pixel_repeat;
  FUNC_4(VAR_10, VAR_6, VAR_13);


  FUNC_7(VAR_10);
  break;
 default:
  break;
 }
 return 0;
}
