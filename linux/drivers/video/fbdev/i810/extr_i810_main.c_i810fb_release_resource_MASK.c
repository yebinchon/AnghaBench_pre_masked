
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; int physical; scalar_t__ virtual; } ;
struct gtt_data {scalar_t__ i810_fb_memory; scalar_t__ i810_cursor_memory; } ;
struct i810fb_par {int res_flags; int mmio_start_phys; TYPE_1__ aperture; int edid; scalar_t__ mmio_start_virtual; struct gtt_data i810_gtt; int wc_cookie; } ;
struct fb_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct fb_info*) ;
 int FUNC_3 (struct i810fb_par*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct fb_info *VAR_3,
        struct i810fb_par *VAR_4)
{
 struct gtt_data *VAR_5 = &VAR_4->i810_gtt;
 FUNC_1(VAR_4->wc_cookie);

 FUNC_3(VAR_4);

 if (VAR_4->i810_gtt.i810_cursor_memory)
  FUNC_0(VAR_5->i810_cursor_memory);
 if (VAR_4->i810_gtt.i810_fb_memory)
  FUNC_0(VAR_5->i810_fb_memory);

 if (VAR_4->mmio_start_virtual)
  FUNC_4(VAR_4->mmio_start_virtual);
 if (VAR_4->aperture.virtual)
  FUNC_4(VAR_4->aperture.virtual);
 FUNC_5(VAR_4->edid);
 if (VAR_4->res_flags & VAR_0)
  FUNC_6(VAR_4->aperture.physical,
       VAR_4->aperture.size);
 if (VAR_4->res_flags & VAR_1)
  FUNC_6(VAR_4->mmio_start_phys, VAR_2);

 FUNC_2(VAR_3);

}
