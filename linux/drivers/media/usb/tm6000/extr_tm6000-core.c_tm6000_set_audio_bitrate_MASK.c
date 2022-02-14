
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tm6000_core {int audio_bitrate; scalar_t__ dev_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct tm6000_core*,int ,int) ;
 int FUNC_1 (struct tm6000_core*,int ,int,int) ;

int FUNC_2(struct tm6000_core *VAR_5, int VAR_6)
{
 int VAR_7 = 0;
 u8 VAR_8 = 0x60;
 u8 VAR_9 = 0x91;

 switch (VAR_6) {
 case 48000:
  VAR_8 = 0x60;
  VAR_9 = 0x91;
  VAR_5->audio_bitrate = VAR_6;
  break;
 case 32000:
  VAR_8 = 0x00;
  VAR_9 = 0x90;
  VAR_5->audio_bitrate = VAR_6;
  break;
 default:
  return -VAR_0;
 }



 if (VAR_5->dev_type == VAR_2) {
  VAR_7 = FUNC_0(VAR_5, VAR_3, VAR_9);
  if (VAR_7 < 0)
   return VAR_7;

  VAR_7 = FUNC_1(VAR_5, VAR_4,
       VAR_8, 0xf0);
  if (VAR_7 < 0)
   return VAR_7;
 } else {
  VAR_7 = FUNC_1(VAR_5, VAR_1,
       VAR_8, 0xf0);
  if (VAR_7 < 0)
   return VAR_7;
 }
 return 0;
}
