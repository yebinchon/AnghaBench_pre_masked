
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct uvesafb_par {int vbe_state_size; } ;
struct TYPE_3__ {int eax; int ecx; int edx; } ;
struct TYPE_4__ {TYPE_1__ regs; int flags; int buf_len; } ;
struct uvesafb_ktask {TYPE_2__ t; int * buf; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (struct uvesafb_ktask*) ;
 int FUNC_2 (struct uvesafb_ktask*) ;
 struct uvesafb_ktask* FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct uvesafb_par *VAR_1, u8 *VAR_2)
{
 struct uvesafb_ktask *VAR_3;
 int VAR_4;

 if (!VAR_2)
  return;

 VAR_3 = FUNC_3();
 if (!VAR_3)
  return;

 VAR_3->t.regs.eax = 0x4f04;
 VAR_3->t.regs.ecx = 0x000f;
 VAR_3->t.regs.edx = 0x0002;
 VAR_3->t.buf_len = VAR_1->vbe_state_size;
 VAR_3->t.flags = VAR_0;
 VAR_3->buf = VAR_2;

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4 || (VAR_3->t.regs.eax & 0xffff) != 0x004f)
  FUNC_0("VBE state restore call failed (eax=0x%x, err=%d)\n",
   VAR_3->t.regs.eax, VAR_4);

 FUNC_2(VAR_3);
}
