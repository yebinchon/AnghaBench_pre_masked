
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int oq; int iq; } ;
struct octeon_device {int octeon_id; struct octeon_device** instr_queue; TYPE_1__ io_qmask; struct octeon_device** droq; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct octeon_device*) ;
 int FUNC_2 (struct octeon_device*) ;
 int ** VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct octeon_device*) ;

void FUNC_4(struct octeon_device *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_2(VAR_2); VAR_3++) {
  if (VAR_2->io_qmask.oq & FUNC_0(VAR_3))
   FUNC_3(VAR_2->droq[VAR_3]);
 }

 for (VAR_3 = 0; VAR_3 < FUNC_1(VAR_2); VAR_3++) {
  if (VAR_2->io_qmask.iq & FUNC_0(VAR_3))
   FUNC_3(VAR_2->instr_queue[VAR_3]);
 }

 VAR_3 = VAR_2->octeon_id;
 FUNC_3(VAR_2);

 VAR_0[VAR_3] = ((void*)0);
 VAR_1--;
}
