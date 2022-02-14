
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct osd_state {int dummy; } ;
typedef enum osd_win_layer { ____Placeholder_osd_win_layer } osd_win_layer ;
typedef enum osd_pix_format { ____Placeholder_osd_pix_format } osd_pix_format ;




 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct osd_state*,int,unsigned char,int) ;

__attribute__((used)) static void FUNC_1(struct osd_state *VAR_2,
     enum osd_win_layer VAR_3,
     unsigned char VAR_4,
     unsigned char VAR_5,
     enum osd_pix_format VAR_6)
{
 static const int VAR_7[] = { 0, 5, 10, 15 };
 static const int VAR_8[] = { 0, 15 };
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;

 switch (VAR_6) {
 case 130:
  VAR_12 = VAR_8[VAR_4 & 0x1];
  break;
 case 129:
  VAR_12 = VAR_7[VAR_4 & 0x3];
  break;
 case 128:
  VAR_12 = VAR_4 & 0xf;
  break;
 default:
  return;
 }

 switch (VAR_3) {
 case 132:
  VAR_9 = VAR_0 + (VAR_12 >> 1) * sizeof(u32);
  break;
 case 131:
  VAR_9 = VAR_1 + (VAR_12 >> 1) * sizeof(u32);
  break;
 default:
  return;
 }

 if (VAR_12 & 1) {
  VAR_10 = 8;
  VAR_11 = 0xff << 8;
 } else {
  VAR_10 = 0;
  VAR_11 = 0xff;
 }

 FUNC_0(VAR_2, VAR_11, VAR_5 << VAR_10, VAR_9);
}
