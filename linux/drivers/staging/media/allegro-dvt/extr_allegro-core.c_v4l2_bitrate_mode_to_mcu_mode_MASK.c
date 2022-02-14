
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum v4l2_mpeg_video_bitrate_mode { ____Placeholder_v4l2_mpeg_video_bitrate_mode } v4l2_mpeg_video_bitrate_mode ;





__attribute__((used)) static u32
FUNC_0(enum v4l2_mpeg_video_bitrate_mode VAR_0)
{
 switch (VAR_0) {
 case 128:
  return 2;
 case 129:
 default:
  return 1;
 }
}
