
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct vga16fb_par {int clkdiv; int mode; int* crtc; int misc; int pel_msk; scalar_t__ isVGA; } ;
struct TYPE_2__ {int xoffset; } ;
struct fb_info {TYPE_1__ var; struct vga16fb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 int VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 int VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 size_t VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 size_t VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 size_t VAR_31 ;
 size_t VAR_32 ;
 size_t VAR_33 ;
 size_t VAR_34 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct fb_info*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (size_t,int) ;

__attribute__((used)) static int FUNC_8(struct fb_info *VAR_35)
{
 struct vga16fb_par *VAR_36 = VAR_35->par;
 u8 VAR_37[VAR_17];
 u8 VAR_38[VAR_30];
 u8 VAR_39[VAR_11];
 int VAR_40, VAR_41;

 VAR_38[VAR_32] = 0x01 | VAR_36->clkdiv;
 if (VAR_36->mode & VAR_5)
  VAR_38[VAR_34] = 0x03;
 else
  VAR_38[VAR_34] = 0x0F;
 VAR_38[VAR_31] = 0x00;
 if (VAR_36->mode & VAR_5)
  VAR_38[VAR_33] = 0x03;
 else if (VAR_36->mode & VAR_4)
  VAR_38[VAR_33] = 0x0E;
 else
  VAR_38[VAR_33] = 0x06;

 VAR_37[VAR_25] = 0x00;
 VAR_37[VAR_24] = 0x00;
 VAR_37[VAR_19] = 0x00;
 VAR_37[VAR_20] = 0x00;
 VAR_37[VAR_23] = 0;
 if (VAR_36->mode & VAR_5) {
  VAR_37[VAR_22] = 0x10;
  VAR_37[VAR_21] = 0x06;
 } else {
  if (VAR_36->mode & VAR_3)
   VAR_37[VAR_22] = 0x40;
  else
   VAR_37[VAR_22] = 0x00;
  VAR_37[VAR_21] = 0x05;
 }
 VAR_37[VAR_18] = 0x0F;
 VAR_37[VAR_16] = 0xFF;

 for (VAR_41 = 0x00; VAR_41 < 0x10; VAR_41++)
  VAR_39[VAR_41] = VAR_41;
 if (VAR_36->mode & VAR_5)
  VAR_39[VAR_7] = 0x04;
 else if (VAR_36->mode & VAR_2)
  VAR_39[VAR_7] = 0x41;
 else
  VAR_39[VAR_7] = 0x81;
 VAR_39[VAR_8] = 0x00;
 VAR_39[VAR_10] = 0x0F;
 if (VAR_36->mode & VAR_2)
  VAR_39[VAR_9] = (VAR_35->var.xoffset & 3) << 1;
 else
  VAR_39[VAR_9] = VAR_35->var.xoffset & 7;
 VAR_39[VAR_6] = 0x00;

 if (VAR_36->mode & VAR_5) {
  VAR_40 = 16;
  VAR_36->crtc[VAR_13] = (VAR_36->crtc[VAR_13]
            & ~0x1F) | (VAR_40 - 1);
 }

 FUNC_3(VAR_28, FUNC_2(VAR_27) | 0x01);


 if (!VAR_36->isVGA) {
  FUNC_3(VAR_0, 0x00);
  FUNC_3(VAR_1, 0x01);
 }


 FUNC_3(VAR_28, VAR_36->misc);


 FUNC_7(0x00, 0x01);

 if (VAR_36->isVGA)
  FUNC_3(VAR_29, VAR_36->pel_msk);


 FUNC_7(VAR_32, VAR_38[VAR_32] | 0x20);
 for (VAR_41 = 2; VAR_41 < VAR_30; VAR_41++) {
  FUNC_7(VAR_41, VAR_38[VAR_41]);
 }


 FUNC_7(0x00, 0x03);


 FUNC_5(VAR_15, VAR_36->crtc[VAR_15]);


 for (VAR_41 = 0; VAR_41 < VAR_14; VAR_41++) {
  FUNC_5(VAR_41, VAR_36->crtc[VAR_41]);
 }


 for (VAR_41 = 0; VAR_41 < VAR_17; VAR_41++) {
  FUNC_6(VAR_41, VAR_37[VAR_41]);
 }


 for (VAR_41 = 0; VAR_41 < VAR_11; VAR_41++) {
  FUNC_2(VAR_26);
  FUNC_4(VAR_41, VAR_39[VAR_41]);
 }


 FUNC_0(50);

 FUNC_7(VAR_32, VAR_38[VAR_32]);

 FUNC_2(VAR_26);
 FUNC_3(VAR_12, 0x20);

 FUNC_1(VAR_35);
 return 0;
}
