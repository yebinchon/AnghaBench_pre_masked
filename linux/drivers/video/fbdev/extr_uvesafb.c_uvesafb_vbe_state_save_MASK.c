
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct uvesafb_par {scalar_t__ vbe_state_size; } ;
struct TYPE_3__ {int eax; int ecx; int edx; } ;
struct TYPE_4__ {int flags; TYPE_1__ regs; scalar_t__ buf_len; } ;
struct uvesafb_ktask {TYPE_2__ t; int * buf; } ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (char*,int,int) ;
 int FUNC_4 (struct uvesafb_ktask*) ;
 int FUNC_5 (struct uvesafb_ktask*) ;
 struct uvesafb_ktask* FUNC_6 () ;

__attribute__((used)) static u8 *FUNC_7(struct uvesafb_par *VAR_4)
{
 struct uvesafb_ktask *VAR_5;
 u8 *VAR_6;
 int VAR_7;

 if (!VAR_4->vbe_state_size)
  return ((void*)0);

 VAR_6 = FUNC_2(VAR_4->vbe_state_size, VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_5 = FUNC_6();
 if (!VAR_5) {
  FUNC_1(VAR_6);
  return ((void*)0);
 }

 VAR_5->t.regs.eax = 0x4f04;
 VAR_5->t.regs.ecx = 0x000f;
 VAR_5->t.regs.edx = 0x0001;
 VAR_5->t.flags = VAR_3 | VAR_2;
 VAR_5->t.buf_len = VAR_4->vbe_state_size;
 VAR_5->buf = VAR_6;
 VAR_7 = FUNC_4(VAR_5);

 if (VAR_7 || (VAR_5->t.regs.eax & 0xffff) != 0x004f) {
  FUNC_3("VBE get state call failed (eax=0x%x, err=%d)\n",
   VAR_5->t.regs.eax, VAR_7);
  FUNC_1(VAR_6);
  VAR_6 = ((void*)0);
 }

 FUNC_5(VAR_5);
 return VAR_6;
}
