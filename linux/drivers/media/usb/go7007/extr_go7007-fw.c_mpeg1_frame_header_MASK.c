
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct go7007 {int height; scalar_t__ format; int width; scalar_t__ interlace_coding; scalar_t__ dvd_mode; } ;
typedef enum mpeg_frame_type { ____Placeholder_mpeg_frame_type } mpeg_frame_type ;





 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,unsigned char*) ;
 int FUNC_2 (int ) ;

 scalar_t__ VAR_0 ;
 int** VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct go7007 *VAR_3, unsigned char *VAR_4,
  int VAR_5, int VAR_6, enum mpeg_frame_type VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12 = VAR_3->interlace_coding ? VAR_3->height / 32 : VAR_3->height / 16;
 FUNC_1(VAR_2, VAR_4 + 6);

 switch (VAR_7) {
 case 128:
  VAR_10 = 0x1;
  VAR_11 = 3;
  break;
 case 129:
  VAR_10 = 0x2;
  VAR_11 = 4;
  break;
 case 130:
  VAR_10 = 0x2;
  VAR_11 = 3;
  break;
 case 131:
  VAR_10 = 0x2;
  VAR_11 = 2;
  break;
 default:
  VAR_10 = VAR_11 = 0;
  break;
 }

 FUNC_0(VAR_2, VAR_7 == 128 ? 0x2 : 0x3, 13);
 FUNC_0(VAR_2, 0xffff, 16);
 FUNC_0(VAR_2, VAR_3->format == VAR_0 ? 0x7 : 0x4, 4);
 if (VAR_7 != 128)
  FUNC_0(VAR_2, VAR_3->format == VAR_0 ? 0x7 : 0x4, 4);
 else
  FUNC_0(VAR_2, 0, 4);
 FUNC_0(VAR_2, 0, 3);

 VAR_9 = 8 - (FUNC_2(VAR_2) % 8);
 if (VAR_9 != 8)
  FUNC_0(VAR_2, 0, VAR_9);

 if (VAR_3->format == VAR_0) {
  FUNC_0(VAR_2, 0x1, 24);
  FUNC_0(VAR_2, 0xb5, 8);
  FUNC_0(VAR_2, 0x844, 12);
  FUNC_0(VAR_2, VAR_7 == 128 ? 0xff : 0x44, 8);
  if (VAR_3->interlace_coding) {
   FUNC_0(VAR_2, VAR_6, 4);
   if (VAR_3->dvd_mode)
    FUNC_0(VAR_2, 0x000, 11);
   else
    FUNC_0(VAR_2, 0x200, 11);
  } else {
   FUNC_0(VAR_2, 0x3, 4);
   FUNC_0(VAR_2, 0x20c, 11);
  }

  VAR_9 = 8 - (FUNC_2(VAR_2) % 8);
  if (VAR_9 != 8)
   FUNC_0(VAR_2, 0, VAR_9);
 }

 for (VAR_8 = 0; VAR_8 < VAR_12; ++VAR_8) {
  FUNC_0(VAR_2, 1, 24);
  FUNC_0(VAR_2, VAR_8 + 1, 8);
  FUNC_0(VAR_2, 0x2, 6);
  FUNC_0(VAR_2, 0x1, 1);
  FUNC_0(VAR_2, VAR_10, VAR_11);
  if (VAR_3->interlace_coding) {
   FUNC_0(VAR_2, 0x1, 2);
   FUNC_0(VAR_2, VAR_6 == 1 ? 0x0 : 0x1, 1);
  }
  if (VAR_7 == 131) {
   FUNC_0(VAR_2, 0x3, 2);
   if (VAR_3->interlace_coding)
    FUNC_0(VAR_2, VAR_6 == 1 ? 0x0 : 0x1, 1);
  }
  FUNC_0(VAR_2, 0x3, 2);
  for (VAR_9 = (VAR_3->width >> 4) - 2; VAR_9 >= 33; VAR_9 -= 33)
   FUNC_0(VAR_2, 0x8, 11);
  FUNC_0(VAR_2, VAR_1[VAR_9][0], VAR_1[VAR_9][1]);
  FUNC_0(VAR_2, VAR_10, VAR_11);
  if (VAR_3->interlace_coding) {
   FUNC_0(VAR_2, 0x1, 2);
   FUNC_0(VAR_2, VAR_6 == 1 ? 0x0 : 0x1, 1);
  }
  if (VAR_7 == 131) {
   FUNC_0(VAR_2, 0x3, 2);
   if (VAR_3->interlace_coding)
    FUNC_0(VAR_2, VAR_6 == 1 ? 0x0 : 0x1, 1);
  }
  FUNC_0(VAR_2, 0x3, 2);


  VAR_9 = 8 - (FUNC_2(VAR_2) % 8);
  if (VAR_9 != 8)
   FUNC_0(VAR_2, 0, VAR_9);
 }

 VAR_8 = FUNC_2(VAR_2) + 4 * 8;
 VAR_4[2] = 0x00;
 VAR_4[3] = 0x00;
 VAR_4[4] = 0x01;
 VAR_4[5] = 0x00;
 return VAR_8;
}
