
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int oq; } ;
struct octeon_device {TYPE_2__** droq; TYPE_1__ io_qmask; } ;
struct TYPE_4__ {int pkts_pending; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct octeon_device*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int) ;

int FUNC_4(struct octeon_device *VAR_0)
{
 int VAR_1 = 100, VAR_2 = 0;
 int VAR_3;

 do {
  VAR_2 = 0;

  for (VAR_3 = 0; VAR_3 < FUNC_1(VAR_0); VAR_3++) {
   if (!(VAR_0->io_qmask.oq & FUNC_0(VAR_3)))
    continue;
   VAR_2 +=
    FUNC_2(&VAR_0->droq[VAR_3]->pkts_pending);
  }

  if (VAR_2 > 0)
   FUNC_3(1);

 } while (VAR_1-- && VAR_2);

 return VAR_2;
}
