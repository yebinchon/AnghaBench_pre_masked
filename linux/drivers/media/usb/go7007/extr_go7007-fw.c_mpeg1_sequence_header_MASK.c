
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct go7007 {scalar_t__ format; int aspect_ratio; scalar_t__ standard; int sensor_framerate; int width; int height; scalar_t__ interlace_coding; } ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,unsigned char*) ;
 int FUNC_2 (int ) ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct go7007 *VAR_4, unsigned char *VAR_5, int VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 FUNC_1(VAR_3, VAR_5 + 6);

 if (VAR_4->format == VAR_1) {
  switch (VAR_4->aspect_ratio) {
  case 128:
   VAR_8 = VAR_4->standard == VAR_0 ? 3 : 2;
   break;
  case 129:
   VAR_8 = VAR_4->standard == VAR_0 ? 5 : 4;
   break;
  default:
   VAR_8 = 1;
   break;
  }
 } else {
  switch (VAR_4->aspect_ratio) {
  case 128:
   VAR_8 = 2;
   break;
  case 129:
   VAR_8 = 3;
   break;
  default:
   VAR_8 = 1;
   break;
  }
 }
 switch (VAR_4->sensor_framerate) {
 case 24000:
  VAR_9 = 1;
  break;
 case 24024:
  VAR_9 = 2;
  break;
 case 25025:
  VAR_9 = VAR_4->interlace_coding ? 6 : 3;
  break;
 case 30000:
  VAR_9 = VAR_4->interlace_coding ? 7 : 4;
  break;
 case 30030:
  VAR_9 = VAR_4->interlace_coding ? 8 : 5;
  break;
 default:
  VAR_9 = 5;
  break;
 }

 FUNC_0(VAR_3, VAR_4->width, 12);
 FUNC_0(VAR_3, VAR_4->height, 12);
 FUNC_0(VAR_3, VAR_8, 4);
 FUNC_0(VAR_3, VAR_9, 4);
 FUNC_0(VAR_3, VAR_4->format == VAR_2 ? 20000 : 0x3ffff, 18);
 FUNC_0(VAR_3, 1, 1);
 FUNC_0(VAR_3, VAR_4->format == VAR_2 ? 112 : 20, 10);
 FUNC_0(VAR_3, 0, 3);


 VAR_7 = 8 - (FUNC_2(VAR_3) % 8);
 if (VAR_7 != 8)
  FUNC_0(VAR_3, 0, VAR_7);

 if (VAR_4->format == VAR_2) {
  FUNC_0(VAR_3, 0x1, 24);
  FUNC_0(VAR_3, 0xb5, 8);
  FUNC_0(VAR_3, 0x148, 12);
  if (VAR_4->interlace_coding)
   FUNC_0(VAR_3, 0x20001, 20);
  else
   FUNC_0(VAR_3, 0xa0001, 20);
  FUNC_0(VAR_3, 0, 16);


  VAR_7 = 8 - (FUNC_2(VAR_3) % 8);
  if (VAR_7 != 8)
   FUNC_0(VAR_3, 0, VAR_7);

  if (VAR_6) {
   FUNC_0(VAR_3, 0x1, 24);
   FUNC_0(VAR_3, 0xb52, 12);
   FUNC_0(VAR_3, VAR_4->standard == VAR_0 ? 2 : 1, 3);
   FUNC_0(VAR_3, 0x105, 9);
   FUNC_0(VAR_3, 0x505, 16);
   FUNC_0(VAR_3, VAR_4->width, 14);
   FUNC_0(VAR_3, 1, 1);
   FUNC_0(VAR_3, VAR_4->height, 14);


   VAR_7 = 8 - (FUNC_2(VAR_3) % 8);
   if (VAR_7 != 8)
    FUNC_0(VAR_3, 0, VAR_7);
  }
 }

 VAR_7 = FUNC_2(VAR_3) + 4 * 8;
 VAR_5[0] = VAR_7 & 0xff;
 VAR_5[1] = VAR_7 >> 8;
 VAR_5[2] = 0x00;
 VAR_5[3] = 0x00;
 VAR_5[4] = 0x01;
 VAR_5[5] = 0xb3;
 return VAR_7;
}
