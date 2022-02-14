
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xtimings {int sync; int HTotal; int HDisplay; int HSyncStart; int HSyncEnd; int VTotal; int VDisplay; int VSyncStart; int VSyncEnd; scalar_t__ dblscan; } ;
struct savagefb_par {int dummy; } ;
struct savage_reg {int MiscOutReg; int* Sequencer; int* CRTC; int* Graphics; int* Attribute; } ;
struct fb_var_screeninfo {int xres_virtual; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct fb_var_screeninfo *VAR_2,
        struct savagefb_par *VAR_3,
        struct xtimings *VAR_4,
        struct savage_reg *VAR_5)
{
 VAR_5->MiscOutReg = 0x23;

 if (!(VAR_4->sync & VAR_0))
  VAR_5->MiscOutReg |= 0x40;

 if (!(VAR_4->sync & VAR_1))
  VAR_5->MiscOutReg |= 0x80;




 VAR_5->Sequencer[0x00] = 0x00;
 VAR_5->Sequencer[0x01] = 0x01;
 VAR_5->Sequencer[0x02] = 0x0F;
 VAR_5->Sequencer[0x03] = 0x00;
 VAR_5->Sequencer[0x04] = 0x0E;




 VAR_5->CRTC[0x00] = (VAR_4->HTotal >> 3) - 5;
 VAR_5->CRTC[0x01] = (VAR_4->HDisplay >> 3) - 1;
 VAR_5->CRTC[0x02] = (VAR_4->HSyncStart >> 3) - 1;
 VAR_5->CRTC[0x03] = (((VAR_4->HSyncEnd >> 3) - 1) & 0x1f) | 0x80;
 VAR_5->CRTC[0x04] = (VAR_4->HSyncStart >> 3);
 VAR_5->CRTC[0x05] = ((((VAR_4->HSyncEnd >> 3) - 1) & 0x20) << 2) |
  (((VAR_4->HSyncEnd >> 3)) & 0x1f);
 VAR_5->CRTC[0x06] = (VAR_4->VTotal - 2) & 0xFF;
 VAR_5->CRTC[0x07] = (((VAR_4->VTotal - 2) & 0x100) >> 8) |
  (((VAR_4->VDisplay - 1) & 0x100) >> 7) |
  ((VAR_4->VSyncStart & 0x100) >> 6) |
  (((VAR_4->VSyncStart - 1) & 0x100) >> 5) |
  0x10 |
  (((VAR_4->VTotal - 2) & 0x200) >> 4) |
  (((VAR_4->VDisplay - 1) & 0x200) >> 3) |
  ((VAR_4->VSyncStart & 0x200) >> 2);
 VAR_5->CRTC[0x08] = 0x00;
 VAR_5->CRTC[0x09] = (((VAR_4->VSyncStart - 1) & 0x200) >> 4) | 0x40;

 if (VAR_4->dblscan)
  VAR_5->CRTC[0x09] |= 0x80;

 VAR_5->CRTC[0x0a] = 0x00;
 VAR_5->CRTC[0x0b] = 0x00;
 VAR_5->CRTC[0x0c] = 0x00;
 VAR_5->CRTC[0x0d] = 0x00;
 VAR_5->CRTC[0x0e] = 0x00;
 VAR_5->CRTC[0x0f] = 0x00;
 VAR_5->CRTC[0x10] = VAR_4->VSyncStart & 0xff;
 VAR_5->CRTC[0x11] = (VAR_4->VSyncEnd & 0x0f) | 0x20;
 VAR_5->CRTC[0x12] = (VAR_4->VDisplay - 1) & 0xff;
 VAR_5->CRTC[0x13] = VAR_2->xres_virtual >> 4;
 VAR_5->CRTC[0x14] = 0x00;
 VAR_5->CRTC[0x15] = (VAR_4->VSyncStart - 1) & 0xff;
 VAR_5->CRTC[0x16] = (VAR_4->VSyncEnd - 1) & 0xff;
 VAR_5->CRTC[0x17] = 0xc3;
 VAR_5->CRTC[0x18] = 0xff;
 VAR_5->Graphics[0x00] = 0x00;
 VAR_5->Graphics[0x01] = 0x00;
 VAR_5->Graphics[0x02] = 0x00;
 VAR_5->Graphics[0x03] = 0x00;
 VAR_5->Graphics[0x04] = 0x00;
 VAR_5->Graphics[0x05] = 0x40;
 VAR_5->Graphics[0x06] = 0x05;
 VAR_5->Graphics[0x07] = 0x0F;
 VAR_5->Graphics[0x08] = 0xFF;


 VAR_5->Attribute[0x00] = 0x00;
 VAR_5->Attribute[0x01] = 0x01;
 VAR_5->Attribute[0x02] = 0x02;
 VAR_5->Attribute[0x03] = 0x03;
 VAR_5->Attribute[0x04] = 0x04;
 VAR_5->Attribute[0x05] = 0x05;
 VAR_5->Attribute[0x06] = 0x06;
 VAR_5->Attribute[0x07] = 0x07;
 VAR_5->Attribute[0x08] = 0x08;
 VAR_5->Attribute[0x09] = 0x09;
 VAR_5->Attribute[0x0a] = 0x0A;
 VAR_5->Attribute[0x0b] = 0x0B;
 VAR_5->Attribute[0x0c] = 0x0C;
 VAR_5->Attribute[0x0d] = 0x0D;
 VAR_5->Attribute[0x0e] = 0x0E;
 VAR_5->Attribute[0x0f] = 0x0F;
 VAR_5->Attribute[0x10] = 0x41;
 VAR_5->Attribute[0x11] = 0xFF;
 VAR_5->Attribute[0x12] = 0x0F;
 VAR_5->Attribute[0x13] = 0x00;
 VAR_5->Attribute[0x14] = 0x00;
}
