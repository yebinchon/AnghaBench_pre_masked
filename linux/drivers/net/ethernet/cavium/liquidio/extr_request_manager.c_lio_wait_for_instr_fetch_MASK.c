
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int iq; } ;
struct octeon_device {TYPE_1__** instr_queue; TYPE_2__ io_qmask; } ;
struct TYPE_3__ {int instr_pending; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct octeon_device*) ;
 int FUNC_2 (struct octeon_device*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;

int FUNC_5(struct octeon_device *VAR_0)
{
 int VAR_1, VAR_2 = 1000, VAR_3, VAR_4 = 0;

 do {
  VAR_4 = 0;

  for (VAR_1 = 0; VAR_1 < FUNC_1(VAR_0); VAR_1++) {
   if (!(VAR_0->io_qmask.iq & FUNC_0(VAR_1)))
    continue;
   VAR_3 =
       FUNC_3(&VAR_0->instr_queue[VAR_1]->instr_pending);
   if (VAR_3)
    FUNC_2(VAR_0, VAR_1);
   VAR_4 += VAR_3;
  }

  if (VAR_4 == 0)
   break;

  FUNC_4(1);

 } while (VAR_2-- && VAR_4);

 return VAR_4;
}
