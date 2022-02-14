
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_var_screeninfo {int xres; int left_margin; int right_margin; int hsync_len; int yres; int upper_margin; int lower_margin; int vsync_len; } ;
struct SiS_Private {int dummy; } ;



void
FUNC_0(struct SiS_Private *VAR_0, unsigned char *VAR_1,
   int VAR_2, int VAR_3,
   struct fb_var_screeninfo *VAR_4, bool VAR_5
)
{
   unsigned short VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
   unsigned short VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
   unsigned char VAR_18, VAR_19, VAR_20;
   int VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;

   VAR_18 = VAR_1[14];


   VAR_11 = VAR_1[0] | ((unsigned short)(VAR_18 & 0x03) << 8);
   VAR_21 = VAR_11 + 5;


   VAR_10 = VAR_1[1] | ((unsigned short)(VAR_18 & 0x0C) << 6);
   VAR_25 = VAR_10 + 1;


   VAR_8 = VAR_1[4] | ((unsigned short)(VAR_18 & 0xC0) << 2);
   VAR_26 = VAR_8 - VAR_25 - 3;


   VAR_9 = VAR_1[2] | ((unsigned short)(VAR_18 & 0x30) << 4);

   VAR_18 = VAR_1[15];
   VAR_19 = VAR_1[5];


   VAR_7 = (VAR_1[3] & 0x1f) |
         ((unsigned short)(VAR_19 & 0x80) >> 2) |
         ((unsigned short)(VAR_18 & 0x03) << 6);


   VAR_6 = (VAR_19 & 0x1f) | ((VAR_18 & 0x04) << 3);

   VAR_27 = VAR_7 - ((VAR_25 - 1) & 255);
   VAR_22 = (VAR_27 > 0) ? VAR_27 : (VAR_27 + 256);

   VAR_27 = VAR_6 - ((VAR_25 + VAR_26 + 3) & 63);
   VAR_23 = (VAR_27 > 0) ? VAR_27 : (VAR_27 + 64);

   VAR_24 = VAR_22 - VAR_26 - VAR_23;

   if(VAR_5) VAR_4->xres = VAR_2 = VAR_25 * 8;
   VAR_4->left_margin = VAR_24 * 8;
   VAR_4->right_margin = VAR_26 * 8;
   VAR_4->hsync_len = VAR_23 * 8;


   VAR_18 = VAR_1[13];
   VAR_19 = VAR_1[7];


   VAR_17 = VAR_1[6] |
  ((unsigned short)(VAR_19 & 0x01) << 8) |
  ((unsigned short)(VAR_19 & 0x20) << 4) |
  ((unsigned short)(VAR_18 & 0x01) << 10);
   VAR_21 = VAR_17 + 2;


   VAR_16 = VAR_1[10] |
  ((unsigned short)(VAR_19 & 0x02) << 7) |
  ((unsigned short)(VAR_19 & 0x40) << 3) |
  ((unsigned short)(VAR_18 & 0x02) << 9);
   VAR_25 = VAR_16 + 1;


   VAR_14 = VAR_1[8] |
  ((unsigned short)(VAR_19 & 0x04) << 6) |
  ((unsigned short)(VAR_19 & 0x80) << 2) |
  ((unsigned short)(VAR_18 & 0x08) << 7);
   VAR_26 = VAR_14 + 1 - VAR_25;

   VAR_20 = (VAR_1[16] & 0x01) << 5;


   VAR_15 = VAR_1[11] |
  ((unsigned short)(VAR_19 & 0x08) << 5) |
  ((unsigned short)(VAR_20 & 0x20) << 4) |
  ((unsigned short)(VAR_18 & 0x04) << 8);


   VAR_13 = VAR_1[12] | ((unsigned short)(VAR_18 & 0x10) << 4);
   VAR_27 = VAR_13 - ((VAR_25 - 1) & 511);
   VAR_22 = (VAR_27 > 0) ? VAR_27 : (VAR_27 + 512);


   VAR_12 = (VAR_1[9] & 0x0f) | ((VAR_18 & 0x20) >> 1);
   VAR_27 = VAR_12 - ((VAR_25 + VAR_26 - 1) & 31);
   VAR_23 = (VAR_27 > 0) ? VAR_27 : (VAR_27 + 32);

   VAR_24 = VAR_22 - VAR_26 - VAR_23;

   if(VAR_5) VAR_4->yres = VAR_3 = VAR_25;
   VAR_4->upper_margin = VAR_24;
   VAR_4->lower_margin = VAR_26;
   VAR_4->vsync_len = VAR_23;

   if((VAR_2 == 320) && ((VAR_3 == 200) || (VAR_3 == 240))) {






      VAR_4->left_margin = (400 - 376);
      VAR_4->right_margin = (328 - 320);
      VAR_4->hsync_len = (376 - 328);

   }

}
