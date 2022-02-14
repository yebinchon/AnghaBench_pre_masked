
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_int32_t ;
struct my_timming {int VDisplay; int VSyncStart; int VSyncEnd; int VTotal; int HTotal; int HDisplay; int HSyncEnd; int HSyncStart; int sync; scalar_t__ interlaced; } ;
struct TYPE_9__ {int xres_virtual; int bits_per_pixel; } ;
struct TYPE_10__ {TYPE_3__ var; } ;
struct matroxfb_dh_fb_info {int interlaced; TYPE_4__ fbcon; struct matrox_fb_info* primary_dev; } ;
struct TYPE_11__ {int ctl; } ;
struct TYPE_12__ {TYPE_5__ crtc2; } ;
struct TYPE_7__ {scalar_t__ g450dac; } ;
struct matrox_fb_info {TYPE_6__ hw; TYPE_2__* outputs; TYPE_1__ devflags; } ;
struct TYPE_8__ {scalar_t__ src; scalar_t__ mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct matroxfb_dh_fb_info* VAR_4,
  struct my_timming* VAR_5,
  int VAR_6,
  unsigned int VAR_7) {
 u_int32_t VAR_8;
 u_int32_t VAR_9;
 struct matrox_fb_info *VAR_10 = VAR_4->primary_dev;

 switch (VAR_6) {
  case 15:
   VAR_8 = 0x00200000;
   break;
  case 16:
   VAR_8 = 0x00400000;
   break;

  default:
   VAR_8 = 0x00800000;
   break;
 }
 VAR_8 |= 0x00000001;
 VAR_9 = 0;
 if (VAR_10->outputs[1].src == VAR_3) {
  if (VAR_10->devflags.g450dac) {
   VAR_8 |= 0x00000006;

   if (VAR_10->outputs[1].mode != VAR_2) {
    VAR_8 |= 0xC0001000;
   }
  } else {
   VAR_8 |= 0x00000002;
   VAR_8 |= 0xC0000000;

  }
 } else if (VAR_10->outputs[0].src == VAR_3) {
  VAR_8 |= 0x00000004;

 }
 if (VAR_10->outputs[0].src == VAR_3) {
  VAR_8 |= 0x00100000;
 }
 if (VAR_5->interlaced) {
  VAR_8 |= 0x02000000;
  VAR_5->VDisplay >>= 1;
  VAR_5->VSyncStart >>= 1;
  VAR_5->VSyncEnd >>= 1;
  VAR_5->VTotal >>= 1;
 }
 if ((VAR_5->HTotal & 7) == 2) {
  VAR_9 |= 0x00000010;
  VAR_5->HTotal &= ~7;
 }
 VAR_8 |= 0x10000000;
 FUNC_1(0x3C14, ((VAR_5->HDisplay - 8) << 16) | (VAR_5->HTotal - 8));
 FUNC_1(0x3C18, ((VAR_5->HSyncEnd - 8) << 16) | (VAR_5->HSyncStart - 8));
 FUNC_1(0x3C1C, ((VAR_5->VDisplay - 1) << 16) | (VAR_5->VTotal - 1));
 FUNC_1(0x3C20, ((VAR_5->VSyncEnd - 1) << 16) | (VAR_5->VSyncStart - 1));
 FUNC_1(0x3C24, ((VAR_5->VSyncStart) << 16) | (VAR_5->HSyncStart));
 {
  u_int32_t VAR_11 = VAR_4->fbcon.var.xres_virtual * (VAR_4->fbcon.var.bits_per_pixel >> 3);
  if (VAR_8 & 0x02000000) {

   FUNC_1(0x3C2C, VAR_7);
   FUNC_1(0x3C28, VAR_7 + VAR_11);
   VAR_11 <<= 1;
   VAR_4->interlaced = 1;
  } else {
   FUNC_1(0x3C28, VAR_7);
   VAR_4->interlaced = 0;
  }
  FUNC_1(0x3C40, VAR_11);
 }
 FUNC_1(0x3C4C, VAR_9);
 if (VAR_8 & 0x02000000) {
  int VAR_12;

  FUNC_1(0x3C10, VAR_8 & ~0x02000000);
  for (VAR_12 = 0; VAR_12 < 2; VAR_12++) {
   unsigned int VAR_13;
   unsigned int VAR_14 = 0;

   while ((VAR_13 = FUNC_0(0x3C48) & 0xFFF) >= VAR_14) {
    VAR_14 = VAR_13;
   }
  }
 }
 FUNC_1(0x3C10, VAR_8);
 VAR_10->hw.crtc2.ctl = VAR_8;

 VAR_8 = VAR_5->VDisplay << 16;
 if (VAR_5->sync & VAR_0)
  VAR_8 |= 0x00000100;
 if (VAR_5->sync & VAR_1)
  VAR_8 |= 0x00000200;
 FUNC_1(0x3C44, VAR_8);
}
