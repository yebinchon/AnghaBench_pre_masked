
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbxfb_alphaCtl {int overlay_colorkey_mode; int overlay_blend_mode; int graphics_colorkey_mode; int graphics_blend_mode; int graphics_colorkey_mask; int overlay_colorkey_mask; int graphics_colorkey; int graphics_global_alpha; int overlay_colorkey; int overlay_global_alpha; } ;


 int VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long FUNC_1 (int ) ;
 unsigned long FUNC_2 (int ) ;
 unsigned long FUNC_3 (int ) ;






 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 unsigned long VAR_15 ;
 int VAR_16 ;
 unsigned long VAR_17 ;
 unsigned long VAR_18 ;
 unsigned long VAR_19 ;
 unsigned long VAR_20 ;
 unsigned long FUNC_4 (int ) ;
 unsigned long FUNC_5 (int ) ;
 unsigned long FUNC_6 (int ) ;
 unsigned long FUNC_7 (int ) ;
 int FUNC_8 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_9(struct mbxfb_alphaCtl *VAR_21)
{
 unsigned long VAR_22, VAR_23, VAR_24;
 unsigned long VAR_25, VAR_26, VAR_27;

 VAR_23 = FUNC_5(VAR_21->overlay_global_alpha) |
    FUNC_4(VAR_21->overlay_colorkey);

 VAR_26 = FUNC_2(VAR_21->graphics_global_alpha) |
    FUNC_1(VAR_21->graphics_colorkey);

 VAR_24 = FUNC_7(VAR_12);
 VAR_24 &= ~(FUNC_0(VAR_13));
 VAR_24 |= FUNC_6(VAR_21->overlay_colorkey_mask);

 VAR_27 = FUNC_7(VAR_2);
 VAR_27 &= ~(FUNC_0(VAR_3));
 VAR_27 |= FUNC_3(VAR_21->graphics_colorkey_mask);

 VAR_22 = FUNC_7(VAR_14);
 VAR_22 &= ~(FUNC_0(VAR_16) | VAR_19 | VAR_20);

 VAR_25 = FUNC_7(VAR_4);
 VAR_25 &= ~(FUNC_0(VAR_6) | VAR_10 | VAR_9);

 switch (VAR_21->overlay_colorkey_mode) {
 case 129:
  break;
 case 128:
  VAR_22 |= VAR_20;
  break;
 case 130:
  VAR_22 |= VAR_20 | VAR_19;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_21->overlay_blend_mode) {
 case 132:
  VAR_22 |= VAR_17;
  break;
 case 133:
  VAR_22 |= VAR_15;
  break;
 case 131:
  VAR_22 |= VAR_18;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_21->graphics_colorkey_mode) {
 case 129:
  break;
 case 128:
  VAR_25 |= VAR_10;
  break;
 case 130:
  VAR_25 |= VAR_10 | VAR_9;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_21->graphics_blend_mode) {
 case 132:
  VAR_25 |= VAR_7;
  break;
 case 133:
  VAR_25 |= VAR_5;
  break;
 case 131:
  VAR_25 |= VAR_8;
  break;
 default:
  return -VAR_0;
 }

 FUNC_8(VAR_23, VAR_11);
 FUNC_8(VAR_26, VAR_1);
 FUNC_8(VAR_24, VAR_12);
 FUNC_8(VAR_27, VAR_2);
 FUNC_8(VAR_25, VAR_4);
 FUNC_8(VAR_22, VAR_14);

 return 0;
}
