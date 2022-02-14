
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct smtcfb_info {TYPE_2__* fb; } ;
struct TYPE_6__ {scalar_t__ lfb_width; int lfb_depth; int lfb_height; } ;
struct TYPE_4__ {scalar_t__ xres; int bits_per_pixel; int yres; } ;
struct TYPE_5__ {TYPE_1__ var; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 TYPE_3__ VAR_4 ;

__attribute__((used)) static void FUNC_1(struct smtcfb_info *VAR_5)
{

 if (VAR_4.lfb_width != 0) {
  VAR_5->fb->var.xres = VAR_4.lfb_width;
  VAR_5->fb->var.yres = VAR_4.lfb_height;
  VAR_5->fb->var.bits_per_pixel = VAR_4.lfb_depth;
  goto final;
 }







 VAR_5->fb->var.xres = VAR_1;
 VAR_5->fb->var.yres = VAR_3;
 VAR_5->fb->var.bits_per_pixel = VAR_0;
final:
 FUNC_0(VAR_5->fb->var.bits_per_pixel, VAR_4.lfb_depth);
}
