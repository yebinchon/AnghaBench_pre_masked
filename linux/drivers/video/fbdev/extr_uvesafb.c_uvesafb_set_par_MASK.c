
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct vbe_mode_ib {int mode_id; int bits_per_pixel; int bytes_per_scan_line; } ;
struct vbe_crtc_ib {int horiz_start; int horiz_end; int horiz_total; int vert_start; int vert_end; int vert_total; int pixel_clock; int flags; scalar_t__ refresh_rate; } ;
struct TYPE_13__ {int vbe_version; int capabilities; } ;
struct uvesafb_par {int mode_idx; TYPE_5__ vbe_ib; int crtc; int nocrtc; struct vbe_mode_ib* vbe_modes; } ;
struct TYPE_14__ {int eax; int ebx; } ;
struct TYPE_16__ {int buf_len; TYPE_6__ regs; int flags; } ;
struct uvesafb_ktask {TYPE_8__ t; int * buf; } ;
struct TYPE_9__ {int line_length; int visual; } ;
struct TYPE_12__ {int length; } ;
struct TYPE_11__ {int length; } ;
struct TYPE_10__ {int length; } ;
struct TYPE_15__ {int bits_per_pixel; int xres; int yres; scalar_t__ pixclock; int right_margin; int hsync_len; int left_margin; int lower_margin; int vsync_len; int upper_margin; int vmode; int sync; TYPE_4__ blue; TYPE_3__ green; TYPE_2__ red; } ;
struct fb_info {TYPE_1__ fix; TYPE_7__ var; struct uvesafb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct vbe_crtc_ib*) ;
 struct vbe_crtc_ib* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,struct vbe_crtc_ib*,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (char*,int,int) ;
 int FUNC_6 (char*,int,int) ;
 int FUNC_7 (struct uvesafb_ktask*) ;
 int FUNC_8 (struct uvesafb_ktask*) ;
 struct uvesafb_ktask* FUNC_9 () ;
 int FUNC_10 (struct uvesafb_ktask*) ;
 int FUNC_11 (struct uvesafb_par*,int,int,int,int) ;

__attribute__((used)) static int FUNC_12(struct fb_info *VAR_14)
{
 struct uvesafb_par *VAR_15 = VAR_14->par;
 struct uvesafb_ktask *VAR_16 = ((void*)0);
 struct vbe_crtc_ib *VAR_17 = ((void*)0);
 struct vbe_mode_ib *VAR_18 = ((void*)0);
 int VAR_19, VAR_20 = 0, VAR_21 = VAR_14->var.bits_per_pixel;

 if (VAR_21 > 8 && VAR_21 != 32)
  VAR_21 = VAR_14->var.red.length + VAR_14->var.green.length +
   VAR_14->var.blue.length;

 VAR_19 = FUNC_11(VAR_15, VAR_14->var.xres, VAR_14->var.yres, VAR_21,
     VAR_11 | VAR_10);
 if (VAR_19 >= 0)
  VAR_18 = &VAR_15->vbe_modes[VAR_19];
 else
  return -VAR_0;

 VAR_16 = FUNC_9();
 if (!VAR_16)
  return -VAR_1;
setmode:
 VAR_16->t.regs.eax = 0x4f02;
 VAR_16->t.regs.ebx = VAR_18->mode_id | 0x4000;

 if (VAR_15->vbe_ib.vbe_version >= 0x0300 && !VAR_15->nocrtc &&
     VAR_14->var.pixclock != 0) {
  VAR_16->t.regs.ebx |= 0x0800;
  VAR_16->t.flags = VAR_9;
  VAR_17 = FUNC_2(sizeof(struct vbe_crtc_ib), VAR_8);
  if (!VAR_17) {
   VAR_20 = -VAR_1;
   goto out;
  }
  VAR_17->horiz_start = VAR_14->var.xres + VAR_14->var.right_margin;
  VAR_17->horiz_end = VAR_17->horiz_start + VAR_14->var.hsync_len;
  VAR_17->horiz_total = VAR_17->horiz_end + VAR_14->var.left_margin;

  VAR_17->vert_start = VAR_14->var.yres + VAR_14->var.lower_margin;
  VAR_17->vert_end = VAR_17->vert_start + VAR_14->var.vsync_len;
  VAR_17->vert_total = VAR_17->vert_end + VAR_14->var.upper_margin;

  VAR_17->pixel_clock = FUNC_0(VAR_14->var.pixclock) * 1000;
  VAR_17->refresh_rate = (u16)(100 * (VAR_17->pixel_clock /
    (VAR_17->vert_total * VAR_17->horiz_total)));

  if (VAR_14->var.vmode & VAR_6)
   VAR_17->flags |= 0x1;
  if (VAR_14->var.vmode & VAR_7)
   VAR_17->flags |= 0x2;
  if (!(VAR_14->var.sync & VAR_2))
   VAR_17->flags |= 0x4;
  if (!(VAR_14->var.sync & VAR_3))
   VAR_17->flags |= 0x8;
  FUNC_3(&VAR_15->crtc, VAR_17, sizeof(*VAR_17));
 } else {
  FUNC_4(&VAR_15->crtc, 0, sizeof(*VAR_17));
 }

 VAR_16->t.buf_len = sizeof(struct vbe_crtc_ib);
 VAR_16->buf = &VAR_15->crtc;

 VAR_20 = FUNC_7(VAR_16);
 if (VAR_20 || (VAR_16->t.regs.eax & 0xffff) != 0x004f) {




  if (VAR_17 != ((void*)0)) {
   FUNC_6("mode switch failed (eax=0x%x, err=%d) - trying again with default timings\n",
    VAR_16->t.regs.eax, VAR_20);
   FUNC_10(VAR_16);
   FUNC_1(VAR_17);
   VAR_17 = ((void*)0);
   VAR_14->var.pixclock = 0;
   goto setmode;
  } else {
   FUNC_5("mode switch failed (eax=0x%x, err=%d)\n",
          VAR_16->t.regs.eax, VAR_20);
   VAR_20 = -VAR_0;
   goto out;
  }
 }
 VAR_15->mode_idx = VAR_19;


 if (VAR_15->vbe_ib.capabilities & VAR_12 &&
     VAR_18->bits_per_pixel <= 8) {
  FUNC_10(VAR_16);
  VAR_16->t.regs.eax = 0x4f08;
  VAR_16->t.regs.ebx = 0x0800;

  VAR_20 = FUNC_7(VAR_16);
  if (VAR_20 || (VAR_16->t.regs.eax & 0xffff) != 0x004f ||
      ((VAR_16->t.regs.ebx & 0xff00) >> 8) != 8) {
   VAR_13 = 6;
  } else {
   VAR_13 = 8;
  }
 }

 VAR_14->fix.visual = (VAR_14->var.bits_per_pixel == 8) ?
    VAR_4 : VAR_5;
 VAR_14->fix.line_length = VAR_18->bytes_per_scan_line;

out:
 FUNC_1(VAR_17);
 FUNC_8(VAR_16);

 return VAR_20;
}
