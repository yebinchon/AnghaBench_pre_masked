
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct matroxfb_dh_fb_info {struct matrox_fb_info* primary_dev; } ;
struct TYPE_3__ {int ctl; } ;
struct TYPE_4__ {TYPE_1__ crtc2; } ;
struct matrox_fb_info {TYPE_2__ hw; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(struct matroxfb_dh_fb_info* VAR_0) {
 struct matrox_fb_info *VAR_1 = VAR_0->primary_dev;

 FUNC_0(0x3C10, 0x00000004);
 VAR_1->hw.crtc2.ctl = 0x00000004;
}
