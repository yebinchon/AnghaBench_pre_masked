
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int len; int base; } ;
struct TYPE_4__ {int len_usable; int base; } ;
struct fb_fix_screeninfo {int ypanstep; int xpanstep; scalar_t__ accel; int mmio_len; int mmio_start; scalar_t__ ywrapstep; int smem_len; int smem_start; int id; } ;
struct TYPE_6__ {struct fb_fix_screeninfo fix; } ;
struct matroxfb_dh_fb_info {TYPE_2__ mmio; TYPE_1__ video; TYPE_3__ fbcon; } ;


 int FUNC_0 (int ,char*) ;

__attribute__((used)) static void FUNC_1(struct matroxfb_dh_fb_info *VAR_0)
{
 struct fb_fix_screeninfo *VAR_1 = &VAR_0->fbcon.fix;

 FUNC_0(VAR_1->id, "MATROX DH");

 VAR_1->smem_start = VAR_0->video.base;
 VAR_1->smem_len = VAR_0->video.len_usable;
 VAR_1->ypanstep = 1;
 VAR_1->ywrapstep = 0;
 VAR_1->xpanstep = 8;
 VAR_1->mmio_start = VAR_0->mmio.base;
 VAR_1->mmio_len = VAR_0->mmio.len;
 VAR_1->accel = 0;
}
