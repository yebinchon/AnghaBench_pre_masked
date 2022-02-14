
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uvesafb_par {int mode_idx; int vbe_modes_cnt; scalar_t__ pmi_setpal; TYPE_1__* vbe_modes; } ;
struct uvesafb_pal_entry {int red; int green; int blue; } ;
struct TYPE_5__ {int eax; int ebx; int ecx; int edx; } ;
struct TYPE_6__ {int buf_len; TYPE_2__ regs; int flags; } ;
struct uvesafb_ktask {TYPE_3__ t; struct uvesafb_pal_entry* buf; } ;
struct fb_info {struct uvesafb_par* par; } ;
struct TYPE_4__ {int mode_attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct uvesafb_ktask*) ;
 int FUNC_2 (struct uvesafb_ktask*) ;
 struct uvesafb_ktask* FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct uvesafb_pal_entry *VAR_6, int VAR_7,
  int VAR_8, struct fb_info *VAR_9)
{
 struct uvesafb_ktask *VAR_10;




 int VAR_11 = 0;





 if (VAR_8 + VAR_7 > 256)
  return -VAR_0;
 {
  VAR_10 = FUNC_3();
  if (!VAR_10)
   return -VAR_1;

  VAR_10->t.regs.eax = 0x4f09;
  VAR_10->t.regs.ebx = 0x0;
  VAR_10->t.regs.ecx = VAR_7;
  VAR_10->t.regs.edx = VAR_8;
  VAR_10->t.flags = VAR_2;
  VAR_10->t.buf_len = sizeof(struct uvesafb_pal_entry) * VAR_7;
  VAR_10->buf = VAR_6;

  VAR_11 = FUNC_1(VAR_10);
  if ((VAR_10->t.regs.eax & 0xffff) != 0x004f)
   VAR_11 = 1;

  FUNC_2(VAR_10);
 }
 return VAR_11;
}
