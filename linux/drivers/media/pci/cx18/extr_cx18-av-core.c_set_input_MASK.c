
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct cx18_av_state {int vid_input; int aud_input; struct v4l2_subdev sd; } ;
struct cx18 {struct cx18_av_state av_state; } ;
typedef enum cx18_av_video_input { ____Placeholder_cx18_av_video_input } cx18_av_video_input ;
typedef enum cx18_av_audio_input { ____Placeholder_cx18_av_audio_input } cx18_av_audio_input ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct v4l2_subdev*,char*,int,int) ;
 int FUNC_1 (struct v4l2_subdev*,char*,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct cx18*,int,int,int) ;
 int FUNC_3 (struct cx18*) ;
 int FUNC_4 (struct cx18*,int) ;
 int FUNC_5 (struct cx18*,int ) ;
 int FUNC_6 (struct cx18*,int ,int) ;
 int FUNC_7 (struct cx18*,int,int,int,int) ;
 int FUNC_8 (struct cx18*) ;

__attribute__((used)) static int FUNC_9(struct cx18 *VAR_15, enum cx18_av_video_input VAR_16,
     enum cx18_av_audio_input VAR_17)
{
 struct cx18_av_state *VAR_18 = &VAR_15->av_state;
 struct v4l2_subdev *VAR_19 = &VAR_18->sd;

 enum analog_signal_type {
  NONE, CVBS, Y, C, SIF, Pb, Pr
 } VAR_20[3] = {NONE, NONE, NONE};

 u8 VAR_21;
 u8 VAR_22;
 u8 VAR_23;
 u32 VAR_24;
 int VAR_25;

 FUNC_0(VAR_19, "decoder set video input %d, audio input %d\n",
       VAR_16, VAR_17);

 if (VAR_16 >= VAR_6 &&
     VAR_16 <= VAR_7) {
  VAR_21 = 0xf0 + (VAR_16 - VAR_6);
  VAR_20[0] = CVBS;
  VAR_23 = 0x0;
 } else if (VAR_16 >= VAR_2) {
  int VAR_26 = VAR_16 & 0xf000;
  int VAR_27 = VAR_16 & 0xf0000;
  int VAR_28 = VAR_16 & 0xf00000;

  if ((VAR_16 & ~0xfff000) ||
      VAR_26 < VAR_2 ||
      VAR_26 > VAR_3 ||
      VAR_27 < VAR_4 ||
      VAR_27 > VAR_5 ||
      VAR_28 < VAR_0 ||
      VAR_28 > VAR_1) {
   FUNC_1(VAR_19, "0x%06x is not a valid video input!\n",
         VAR_16);
   return -VAR_14;
  }
  VAR_21 = (VAR_26 - VAR_2) >> 12;
  VAR_20[0] = Y;
  VAR_21 |= (VAR_27 - VAR_4) >> 12;
  VAR_20[1] = Pr;
  VAR_21 |= (VAR_28 - VAR_0) >> 14;
  VAR_20[2] = Pb;
  VAR_23 = 0x6;
 } else {
  int VAR_29 = VAR_16 & 0xf0;
  int VAR_30 = VAR_16 & 0xf00;

  if ((VAR_16 & ~0xff0) ||
      VAR_29 < VAR_11 ||
      VAR_29 > VAR_12 ||
      VAR_30 < VAR_8 ||
      VAR_30 > VAR_10) {
   FUNC_1(VAR_19, "0x%06x is not a valid video input!\n",
         VAR_16);
   return -VAR_14;
  }
  VAR_21 = 0xf0 + ((VAR_29 - VAR_11) >> 4);
  VAR_20[0] = Y;
  if (VAR_30 >= VAR_9) {
   VAR_21 &= 0x3f;
   VAR_21 |= (VAR_30 - VAR_9) >> 2;
   VAR_20[2] = C;
  } else {
   VAR_21 &= 0xcf;
   VAR_21 |= (VAR_30 - VAR_8) >> 4;
   VAR_20[1] = C;
  }
  VAR_23 = 0x2;
 }

 switch (VAR_17) {
 case 129:
 case 128:

  break;
 case 134:
  VAR_21 &= ~0x30;
  VAR_20[1] = SIF;
  break;
 case 133:
  VAR_21 = (VAR_21 & ~0x30) | 0x10;
  VAR_20[1] = SIF;
  break;
 case 132:
  VAR_21 = (VAR_21 & ~0x30) | 0x20;
  VAR_20[1] = SIF;
  break;
 case 131:
  VAR_21 &= ~0xc0;
  VAR_20[2] = SIF;
  break;
 case 130:
  VAR_21 = (VAR_21 & ~0xc0) | 0x40;
  VAR_20[2] = SIF;
  break;

 default:
  FUNC_1(VAR_19, "0x%04x is not a valid audio input!\n",
        VAR_17);
  return -VAR_14;
 }


 FUNC_7(VAR_15, 0x103, VAR_21, VAR_21, 0xf7);

 FUNC_2(VAR_15, 0x401, ~0x6, VAR_23);


 VAR_22 = FUNC_4(VAR_15, 0x102);
 if (VAR_20[2] == NONE)
  VAR_22 &= ~0x2;
 else
  VAR_22 |= 0x2;


 if (VAR_20[1] != NONE && VAR_20[2] != NONE)
  VAR_22 |= 0x4;
 else
  VAR_22 &= ~0x4;
 FUNC_7(VAR_15, 0x102, VAR_22, VAR_22, 0x17);


 VAR_24 = FUNC_5(VAR_15, VAR_13);
 VAR_24 &= 0xff000000;
 VAR_24 |= 0x00005000;
 if (VAR_20[1] != NONE && VAR_20[2] != NONE)
  VAR_24 |= 0x00000030;

 for (VAR_25 = 0; VAR_25 < 3; VAR_25++) {
  switch (VAR_20[VAR_25]) {
  default:
  case NONE:

   VAR_24 |= (0x00000200 << VAR_25);
   break;
  case CVBS:
  case Y:
   if (VAR_25 > 0)
    VAR_24 |= 0x00002000;
   break;
  case C:
  case Pb:
  case Pr:

   VAR_24 |= (0x00000200 << VAR_25);
   if (VAR_25 == 0 && VAR_20[VAR_25] == C)
    VAR_24 &= ~0x00001000;
   break;
  case SIF:




   VAR_24 |= (0x00000240 << VAR_25);
   if (VAR_25 == 0)
    VAR_24 &= ~0x00004000;
   break;
  }
 }

 FUNC_6(VAR_15, VAR_13, VAR_24);

 VAR_18->vid_input = VAR_16;
 VAR_18->aud_input = VAR_17;
 FUNC_3(VAR_15);
 FUNC_8(VAR_15);
 return 0;
}
