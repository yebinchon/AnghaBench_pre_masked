
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct cx18_av_state {int vid_input; int audclk_freq; struct v4l2_subdev sd; } ;
struct cx18 {struct cx18_av_state av_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_subdev*,char*,...) ;
 int FUNC_1 (struct cx18*,int) ;

__attribute__((used)) static void FUNC_2(struct cx18 *VAR_2)
{
 static const char *const VAR_3[] = {
  "0x0",
  "NTSC-M", "NTSC-J", "NTSC-4.43",
  "PAL-BDGHI", "PAL-M", "PAL-N", "PAL-Nc", "PAL-60",
  "0x9", "0xA", "0xB",
  "SECAM",
  "0xD", "0xE", "0xF"
 };

 struct cx18_av_state *VAR_4 = &VAR_2->av_state;
 struct v4l2_subdev *VAR_5 = &VAR_4->sd;
 u8 VAR_6 = FUNC_1(VAR_2, 0x400) & 0xf;
 u8 VAR_7 = FUNC_1(VAR_2, 0x40d);
 u8 VAR_8 = FUNC_1(VAR_2, 0x40e);
 int VAR_9 = VAR_4->vid_input;

 FUNC_0(VAR_5, "Video signal:              %spresent\n",
        (VAR_8 & 0x20) ? "" : "not ");
 FUNC_0(VAR_5, "Detected format:           %s\n",
        VAR_3[VAR_7 & 0xf]);

 FUNC_0(VAR_5, "Specified standard:        %s\n",
        VAR_6 ? VAR_3[VAR_6]
     : "automatic detection");

 if (VAR_9 >= VAR_0 &&
     VAR_9 <= VAR_1) {
  FUNC_0(VAR_5, "Specified video input:     Composite %d\n",
         VAR_9 - VAR_0 + 1);
 } else {
  FUNC_0(VAR_5, "Specified video input:     S-Video (Luma In%d, Chroma In%d)\n",
         (VAR_9 & 0xf0) >> 4,
         (VAR_9 & 0xf00) >> 8);
 }

 FUNC_0(VAR_5, "Specified audioclock freq: %d Hz\n",
        VAR_4->audclk_freq);
}
