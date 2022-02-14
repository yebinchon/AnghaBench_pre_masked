
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct grvga_par {int clk_sel; TYPE_1__* regs; } ;
struct TYPE_6__ {int yres; int xres; int lower_margin; int right_margin; int vsync_len; int hsync_len; int upper_margin; int left_margin; int bits_per_pixel; int xres_virtual; } ;
struct TYPE_5__ {int line_length; void* visual; } ;
struct fb_info {TYPE_3__ var; TYPE_2__ fix; struct grvga_par* par; } ;
struct TYPE_4__ {int status; int line_length; int sync_length; int front_porch; int video_length; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int,int *) ;

__attribute__((used)) static int FUNC_1(struct fb_info *VAR_3)
{

 u32 VAR_4 = 0;
 struct grvga_par *VAR_5 = VAR_3->par;

 FUNC_0(((VAR_3->var.yres - 1) << 16) | (VAR_3->var.xres - 1),
       &VAR_5->regs->video_length);

 FUNC_0((VAR_3->var.lower_margin << 16) | (VAR_3->var.right_margin),
       &VAR_5->regs->front_porch);

 FUNC_0((VAR_3->var.vsync_len << 16) | (VAR_3->var.hsync_len),
       &VAR_5->regs->sync_length);

 FUNC_0(((VAR_3->var.yres + VAR_3->var.lower_margin + VAR_3->var.upper_margin + VAR_3->var.vsync_len - 1) << 16) |
       (VAR_3->var.xres + VAR_3->var.right_margin + VAR_3->var.left_margin + VAR_3->var.hsync_len - 1),
       &VAR_5->regs->line_length);

 switch (VAR_3->var.bits_per_pixel) {
 case 8:
  VAR_3->fix.visual = VAR_1;
  VAR_4 = 1;
  break;
 case 16:
  VAR_3->fix.visual = VAR_2;
  VAR_4 = 2;
  break;
 case 24:
 case 32:
  VAR_3->fix.visual = VAR_2;
  VAR_4 = 3;
  break;
 default:
  return -VAR_0;
 }

 FUNC_0((VAR_5->clk_sel << 6) | (VAR_4 << 4) | 1,
       &VAR_5->regs->status);

 VAR_3->fix.line_length = (VAR_3->var.xres_virtual*VAR_3->var.bits_per_pixel)/8;
 return 0;
}
