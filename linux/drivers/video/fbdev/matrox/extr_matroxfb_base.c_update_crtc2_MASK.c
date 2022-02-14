
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ length; } ;
struct TYPE_10__ {scalar_t__ bits_per_pixel; scalar_t__ xres_virtual; TYPE_2__ green; } ;
struct TYPE_11__ {TYPE_3__ var; } ;
struct matroxfb_dh_fb_info {int interlaced; TYPE_4__ fbcon; } ;
struct TYPE_12__ {scalar_t__ length; } ;
struct TYPE_13__ {scalar_t__ bits_per_pixel; scalar_t__ xres_virtual; TYPE_5__ green; } ;
struct TYPE_14__ {TYPE_6__ var; } ;
struct TYPE_8__ {struct matroxfb_dh_fb_info* info; } ;
struct matrox_fb_info {TYPE_7__ fbcon; TYPE_1__ crtc2; } ;


 int FUNC_0 (int,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct matrox_fb_info *VAR_0, unsigned int VAR_1)
{
 struct matroxfb_dh_fb_info *VAR_2 = VAR_0->crtc2.info;


 if (VAR_2 && (VAR_2->fbcon.var.bits_per_pixel == VAR_0->fbcon.var.bits_per_pixel)
   && (VAR_2->fbcon.var.xres_virtual == VAR_0->fbcon.var.xres_virtual)
   && (VAR_2->fbcon.var.green.length == VAR_0->fbcon.var.green.length)
   ) {
  switch (VAR_0->fbcon.var.bits_per_pixel) {
   case 16:
   case 32:
    VAR_1 = VAR_1 * 8;
    if (VAR_2->interlaced) {
     FUNC_0(0x3C2C, VAR_1);
     FUNC_0(0x3C28, VAR_1 + VAR_0->fbcon.var.xres_virtual * VAR_0->fbcon.var.bits_per_pixel / 8);
    } else {
     FUNC_0(0x3C28, VAR_1);
    }
    break;
  }
 }
}
