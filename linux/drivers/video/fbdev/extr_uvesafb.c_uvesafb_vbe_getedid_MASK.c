
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int vbe_version; } ;
struct uvesafb_par {TYPE_1__ vbe_ib; } ;
struct TYPE_6__ {int eax; int ebx; scalar_t__ edx; scalar_t__ ecx; } ;
struct TYPE_7__ {int flags; TYPE_2__ regs; scalar_t__ buf_len; } ;
struct uvesafb_ktask {int buf; TYPE_3__ t; } ;
struct TYPE_8__ {int dclkmax; int gtf; scalar_t__ hfmax; scalar_t__ vfmax; } ;
struct fb_info {TYPE_4__ monspecs; struct uvesafb_par* par; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,TYPE_4__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct uvesafb_ktask*) ;

__attribute__((used)) static int FUNC_5(struct uvesafb_ktask *VAR_7, struct fb_info *VAR_8)
{
 struct uvesafb_par *VAR_9 = VAR_8->par;
 int VAR_10 = 0;

 if (VAR_6 || VAR_9->vbe_ib.vbe_version < 0x0300)
  return -VAR_1;

 VAR_7->t.regs.eax = 0x4f15;
 VAR_7->t.regs.ebx = 0;
 VAR_7->t.regs.ecx = 0;
 VAR_7->t.buf_len = 0;
 VAR_7->t.flags = 0;

 VAR_10 = FUNC_4(VAR_7);

 if ((VAR_7->t.regs.eax & 0xffff) != 0x004f || VAR_10)
  return -VAR_1;

 if ((VAR_7->t.regs.ebx & 0x3) == 3) {
  FUNC_3("VBIOS/hardware supports both DDC1 and DDC2 transfers\n");
 } else if ((VAR_7->t.regs.ebx & 0x3) == 2) {
  FUNC_3("VBIOS/hardware supports DDC2 transfers\n");
 } else if ((VAR_7->t.regs.ebx & 0x3) == 1) {
  FUNC_3("VBIOS/hardware supports DDC1 transfers\n");
 } else {
  FUNC_3("VBIOS/hardware doesn't support DDC transfers\n");
  return -VAR_1;
 }

 VAR_7->t.regs.eax = 0x4f15;
 VAR_7->t.regs.ebx = 1;
 VAR_7->t.regs.ecx = VAR_7->t.regs.edx = 0;
 VAR_7->t.flags = VAR_5 | VAR_4;
 VAR_7->t.buf_len = VAR_0;
 VAR_7->buf = FUNC_2(VAR_0, VAR_3);
 if (!VAR_7->buf)
  return -VAR_2;

 VAR_10 = FUNC_4(VAR_7);

 if ((VAR_7->t.regs.eax & 0xffff) == 0x004f && !VAR_10) {
  FUNC_0(VAR_7->buf, &VAR_8->monspecs);

  if (VAR_8->monspecs.vfmax && VAR_8->monspecs.hfmax) {




   if (VAR_8->monspecs.dclkmax == 0)
    VAR_8->monspecs.dclkmax = 300 * 1000000;
   VAR_8->monspecs.gtf = 1;
  }
 } else {
  VAR_10 = -VAR_1;
 }

 FUNC_1(VAR_7->buf);
 return VAR_10;
}
