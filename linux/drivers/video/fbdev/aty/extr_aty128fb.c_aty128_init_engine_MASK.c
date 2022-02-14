
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int pitch; int bpp; int depth; } ;
struct aty128fb_par {TYPE_1__ crtc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (struct aty128fb_par*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,struct aty128fb_par*) ;
 int FUNC_4 (struct aty128fb_par*) ;

__attribute__((used)) static void FUNC_5(struct aty128fb_par *VAR_27)
{
 u32 VAR_28;

 FUNC_4(VAR_27);


 FUNC_3(1, VAR_27);
 FUNC_1(VAR_26, 0x00000000);

 FUNC_0(VAR_27);

 VAR_28 = VAR_27->crtc.pitch;
 if (VAR_27->crtc.bpp == 24) {
  VAR_28 = VAR_28 * 3;
 }

 FUNC_3(4, VAR_27);

 FUNC_1(VAR_0, 0x00000000);


 FUNC_1(VAR_1, VAR_28);


 FUNC_1(VAR_2, (0x1FFF << 16) | 0x1FFF);


 FUNC_1(VAR_5,
      VAR_23 |
      VAR_20 |
      VAR_21 |
      VAR_18 |
      VAR_14 |
      (FUNC_2(VAR_27->crtc.depth) << 8) |
      VAR_22 |
      VAR_15 |
      VAR_16 |
      VAR_25 |
      VAR_17 |
      VAR_12 |
      VAR_19 |
      VAR_13 |
      VAR_24);

 FUNC_3(8, VAR_27);

 FUNC_1(VAR_10, 0);
 FUNC_1(VAR_11, 0);
 FUNC_1(VAR_9, 0);


 FUNC_1(VAR_4, 0xFFFFFFFF);
 FUNC_1(VAR_3, 0x00000000);


 FUNC_1(VAR_7, 0xFFFFFFFF);
 FUNC_1(VAR_6, 0x00000000);


 FUNC_1(VAR_8, 0xFFFFFFFF);


 FUNC_4(VAR_27);
}
