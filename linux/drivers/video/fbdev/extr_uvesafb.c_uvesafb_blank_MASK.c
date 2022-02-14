
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int capabilities; } ;
struct uvesafb_par {TYPE_1__ vbe_ib; } ;
struct TYPE_5__ {int eax; int ebx; } ;
struct TYPE_6__ {TYPE_2__ regs; } ;
struct uvesafb_ktask {TYPE_3__ t; } ;
struct fb_info {struct uvesafb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int FUNC_0 (struct uvesafb_ktask*) ;
 int FUNC_1 (struct uvesafb_ktask*) ;
 struct uvesafb_ktask* FUNC_2 () ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,int,int) ;

__attribute__((used)) static int FUNC_7(int VAR_3, struct fb_info *VAR_4)
{
 struct uvesafb_ktask *VAR_5;
 int VAR_6 = 1;
 {
  VAR_5 = FUNC_2();
  if (!VAR_5)
   return -VAR_1;

  VAR_5->t.regs.eax = 0x4f10;
  switch (VAR_3) {
  case 128:
   VAR_5->t.regs.ebx = 0x0001;
   break;
  case 130:
   VAR_5->t.regs.ebx = 0x0101;
   break;
  case 129:
   VAR_5->t.regs.ebx = 0x0401;
   break;
  default:
   goto out;
  }

  VAR_6 = FUNC_0(VAR_5);
  if (VAR_6 || (VAR_5->t.regs.eax & 0xffff) != 0x004f)
   VAR_6 = 1;
out: FUNC_1(VAR_5);
 }
 return VAR_6;
}
