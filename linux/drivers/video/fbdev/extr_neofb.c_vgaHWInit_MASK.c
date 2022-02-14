
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct neofb_par {int MiscOutReg; int* Sequencer; int* CRTC; int* Graphics; int* Attribute; } ;
struct fb_var_screeninfo {int xres; int right_margin; int hsync_len; int left_margin; int yres; int lower_margin; int vsync_len; int upper_margin; int sync; int vmode; int xres_virtual; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(const struct fb_var_screeninfo *VAR_3,
       struct neofb_par *VAR_4)
{
 int VAR_5 = VAR_3->xres + VAR_3->right_margin + VAR_3->hsync_len;
 int VAR_6 = (VAR_5 + VAR_3->left_margin) >> 3;
 int VAR_7 = VAR_3->yres + VAR_3->lower_margin;
 int VAR_8 = VAR_7 + VAR_3->vsync_len;
 int VAR_9 = VAR_8 + VAR_3->upper_margin;

 VAR_4->MiscOutReg = 0x23;

 if (!(VAR_3->sync & VAR_0))
  VAR_4->MiscOutReg |= 0x40;

 if (!(VAR_3->sync & VAR_1))
  VAR_4->MiscOutReg |= 0x80;




 VAR_4->Sequencer[0] = 0x00;
 VAR_4->Sequencer[1] = 0x01;
 VAR_4->Sequencer[2] = 0x0F;
 VAR_4->Sequencer[3] = 0x00;
 VAR_4->Sequencer[4] = 0x0E;




 VAR_4->CRTC[0] = VAR_6 - 5;
 VAR_4->CRTC[1] = (VAR_3->xres >> 3) - 1;
 VAR_4->CRTC[2] = (VAR_3->xres >> 3) - 1;
 VAR_4->CRTC[3] = ((VAR_6 - 1) & 0x1F) | 0x80;
 VAR_4->CRTC[4] = ((VAR_3->xres + VAR_3->right_margin) >> 3);
 VAR_4->CRTC[5] = (((VAR_6 - 1) & 0x20) << 2)
     | (((VAR_5 >> 3)) & 0x1F);
 VAR_4->CRTC[6] = (VAR_9 - 2) & 0xFF;
 VAR_4->CRTC[7] = (((VAR_9 - 2) & 0x100) >> 8)
     | (((VAR_3->yres - 1) & 0x100) >> 7)
     | ((VAR_7 & 0x100) >> 6)
     | (((VAR_3->yres - 1) & 0x100) >> 5)
     | 0x10 | (((VAR_9 - 2) & 0x200) >> 4)
     | (((VAR_3->yres - 1) & 0x200) >> 3)
     | ((VAR_7 & 0x200) >> 2);
 VAR_4->CRTC[8] = 0x00;
 VAR_4->CRTC[9] = (((VAR_3->yres - 1) & 0x200) >> 4) | 0x40;

 if (VAR_3->vmode & VAR_2)
  VAR_4->CRTC[9] |= 0x80;

 VAR_4->CRTC[10] = 0x00;
 VAR_4->CRTC[11] = 0x00;
 VAR_4->CRTC[12] = 0x00;
 VAR_4->CRTC[13] = 0x00;
 VAR_4->CRTC[14] = 0x00;
 VAR_4->CRTC[15] = 0x00;
 VAR_4->CRTC[16] = VAR_7 & 0xFF;
 VAR_4->CRTC[17] = (VAR_8 & 0x0F) | 0x20;
 VAR_4->CRTC[18] = (VAR_3->yres - 1) & 0xFF;
 VAR_4->CRTC[19] = VAR_3->xres_virtual >> 4;
 VAR_4->CRTC[20] = 0x00;
 VAR_4->CRTC[21] = (VAR_3->yres - 1) & 0xFF;
 VAR_4->CRTC[22] = (VAR_9 - 1) & 0xFF;
 VAR_4->CRTC[23] = 0xC3;
 VAR_4->CRTC[24] = 0xFF;
 VAR_4->Graphics[0] = 0x00;
 VAR_4->Graphics[1] = 0x00;
 VAR_4->Graphics[2] = 0x00;
 VAR_4->Graphics[3] = 0x00;
 VAR_4->Graphics[4] = 0x00;
 VAR_4->Graphics[5] = 0x40;
 VAR_4->Graphics[6] = 0x05;
 VAR_4->Graphics[7] = 0x0F;
 VAR_4->Graphics[8] = 0xFF;


 VAR_4->Attribute[0] = 0x00;
 VAR_4->Attribute[1] = 0x01;
 VAR_4->Attribute[2] = 0x02;
 VAR_4->Attribute[3] = 0x03;
 VAR_4->Attribute[4] = 0x04;
 VAR_4->Attribute[5] = 0x05;
 VAR_4->Attribute[6] = 0x06;
 VAR_4->Attribute[7] = 0x07;
 VAR_4->Attribute[8] = 0x08;
 VAR_4->Attribute[9] = 0x09;
 VAR_4->Attribute[10] = 0x0A;
 VAR_4->Attribute[11] = 0x0B;
 VAR_4->Attribute[12] = 0x0C;
 VAR_4->Attribute[13] = 0x0D;
 VAR_4->Attribute[14] = 0x0E;
 VAR_4->Attribute[15] = 0x0F;
 VAR_4->Attribute[16] = 0x41;
 VAR_4->Attribute[17] = 0xFF;
 VAR_4->Attribute[18] = 0x0F;
 VAR_4->Attribute[19] = 0x00;
 VAR_4->Attribute[20] = 0x00;
 return 0;
}
