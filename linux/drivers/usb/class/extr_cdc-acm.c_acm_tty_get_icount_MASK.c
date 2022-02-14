
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty_struct {struct acm* driver_data; } ;
struct serial_icounter_struct {int brk; int parity; int overrun; int frame; int dcd; int rng; int dsr; } ;
struct TYPE_2__ {int brk; int parity; int overrun; int frame; int dcd; int rng; int dsr; } ;
struct acm {TYPE_1__ iocount; } ;



__attribute__((used)) static int FUNC_0(struct tty_struct *VAR_0,
     struct serial_icounter_struct *VAR_1)
{
 struct acm *VAR_2 = VAR_0->driver_data;

 VAR_1->dsr = VAR_2->iocount.dsr;
 VAR_1->rng = VAR_2->iocount.rng;
 VAR_1->dcd = VAR_2->iocount.dcd;
 VAR_1->frame = VAR_2->iocount.frame;
 VAR_1->overrun = VAR_2->iocount.overrun;
 VAR_1->parity = VAR_2->iocount.parity;
 VAR_1->brk = VAR_2->iocount.brk;

 return 0;
}
