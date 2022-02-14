
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uvesafb_par {int vbe_state_size; } ;
struct TYPE_3__ {int eax; int ecx; int edx; int ebx; } ;
struct TYPE_4__ {TYPE_1__ regs; scalar_t__ flags; } ;
struct uvesafb_ktask {TYPE_2__ t; } ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (struct uvesafb_ktask*) ;
 int FUNC_2 (struct uvesafb_ktask*) ;

__attribute__((used)) static void FUNC_3(struct uvesafb_ktask *VAR_0,
         struct uvesafb_par *VAR_1)
{
 int VAR_2;

 FUNC_2(VAR_0);





 VAR_0->t.regs.eax = 0x4f04;
 VAR_0->t.regs.ecx = 0x000f;
 VAR_0->t.regs.edx = 0x0000;
 VAR_0->t.flags = 0;

 VAR_2 = FUNC_1(VAR_0);

 if (VAR_2 || (VAR_0->t.regs.eax & 0xffff) != 0x004f) {
  FUNC_0("VBE state buffer size cannot be determined (eax=0x%x, err=%d)\n",
   VAR_0->t.regs.eax, VAR_2);
  VAR_1->vbe_state_size = 0;
  return;
 }

 VAR_1->vbe_state_size = 64 * (VAR_0->t.regs.ebx & 0xffff);
}
