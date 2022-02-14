
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int yres; } ;
struct TYPE_6__ {TYPE_1__ var; } ;
struct matroxfb_dh_fb_info {TYPE_2__ fbcon; struct matrox_fb_info* primary_dev; } ;
struct TYPE_7__ {int cnt; } ;
struct TYPE_8__ {TYPE_3__ vsync; } ;
struct matrox_fb_info {TYPE_4__ crtc2; int irq_flags; } ;
struct fb_vblank {int flags; int vcount; int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct matrox_fb_info*,int ) ;
 int FUNC_1 (struct fb_vblank*,int ,int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(const struct matroxfb_dh_fb_info* VAR_4, struct fb_vblank* VAR_5) {
 struct matrox_fb_info *VAR_6 = VAR_4->primary_dev;

 FUNC_0(VAR_6, 0);
 FUNC_1(VAR_5, 0, sizeof(*VAR_5));
 VAR_5->flags = VAR_2 | VAR_1;

 VAR_5->vcount = FUNC_2(0x3C48) & 0x000007FF;

 if (VAR_5->vcount >= VAR_4->fbcon.var.yres)
  VAR_5->flags |= VAR_3;
 if (FUNC_3(0, &VAR_6->irq_flags)) {
                VAR_5->flags |= VAR_0;


  VAR_5->count = VAR_6->crtc2.vsync.cnt;
        }
 return 0;
}
