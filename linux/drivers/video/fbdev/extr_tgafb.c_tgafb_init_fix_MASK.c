
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct tga_par {int tga_type; scalar_t__ tga_regs_base; scalar_t__ tga_fb_base; int dev; } ;
struct TYPE_9__ {int length; scalar_t__ offset; } ;
struct TYPE_8__ {int length; int offset; } ;
struct TYPE_7__ {int length; int offset; } ;
struct TYPE_10__ {TYPE_4__ blue; TYPE_3__ green; TYPE_2__ red; } ;
struct TYPE_6__ {size_t smem_start; unsigned int smem_len; size_t mmio_start; int mmio_len; int accel; scalar_t__ ywrapstep; scalar_t__ ypanstep; scalar_t__ xpanstep; int visual; scalar_t__ type_aux; int type; int id; } ;
struct fb_info {TYPE_5__ var; TYPE_1__ fix; scalar_t__ par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;



 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char const*,int) ;

__attribute__((used)) static void
FUNC_3(struct fb_info *VAR_4)
{
 struct tga_par *VAR_5 = (struct tga_par *)VAR_4->par;
 int VAR_6 = FUNC_1(VAR_5->dev);
 int VAR_7 = FUNC_0(VAR_5->dev);
 u8 VAR_8 = VAR_5->tga_type;
 const char *VAR_9 = ((void*)0);
 unsigned VAR_10;

 switch (VAR_8) {
 case 128:
  if (VAR_6)
   VAR_9 = "Digital ZLXp-E1";
  if (VAR_7)
   VAR_9 = "Digital ZLX-E1";
  VAR_10 = 2097152;
  break;
 case 130:
  if (VAR_6)
   VAR_9 = "Digital ZLXp-E2";
  if (VAR_7)
   VAR_9 = "Digital ZLX-E2";
  VAR_10 = 8388608;
  break;
 case 129:
  if (VAR_6)
   VAR_9 = "Digital ZLXp-E3";
  if (VAR_7)
   VAR_9 = "Digital ZLX-E3";
  VAR_10 = 16777216;
  break;
 }
 if (!VAR_9) {
  VAR_9 = "Unknown";
  VAR_10 = 16777216;
 }

 FUNC_2(VAR_4->fix.id, VAR_9, sizeof(VAR_4->fix.id));

 VAR_4->fix.type = VAR_1;
 VAR_4->fix.type_aux = 0;
 VAR_4->fix.visual = (VAR_8 == 128
       ? VAR_3
       : VAR_2);

 VAR_4->fix.smem_start = (size_t) VAR_5->tga_fb_base;
 VAR_4->fix.smem_len = VAR_10;
 VAR_4->fix.mmio_start = (size_t) VAR_5->tga_regs_base;
 VAR_4->fix.mmio_len = 512;

 VAR_4->fix.xpanstep = 0;
 VAR_4->fix.ypanstep = 0;
 VAR_4->fix.ywrapstep = 0;

 VAR_4->fix.accel = VAR_0;





 if (VAR_8 != 128) {
  VAR_4->var.red.length = 8;
  VAR_4->var.green.length = 8;
  VAR_4->var.blue.length = 8;
  VAR_4->var.red.offset = 16;
  VAR_4->var.green.offset = 8;
  VAR_4->var.blue.offset = 0;
 }
}
