
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct octeon_device_priv {int droq_tasklet; } ;
struct TYPE_2__ {int oq; } ;
struct octeon_device {int * droq; TYPE_1__ io_qmask; scalar_t__ priv; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct octeon_device*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct octeon_device *VAR_1)
{
 struct octeon_device_priv *VAR_2 =
     (struct octeon_device_priv *)VAR_1->priv;
 int VAR_3 = VAR_0;
 int VAR_4 = 0, VAR_5;
 int VAR_6;

 do {
  VAR_5 = 0;

  for (VAR_6 = 0; VAR_6 < FUNC_1(VAR_1); VAR_6++) {
   if (!(VAR_1->io_qmask.oq & FUNC_0(VAR_6)))
    continue;
   VAR_4 += FUNC_2(VAR_1->droq[VAR_6]);
  }
  if (VAR_4 > 0) {
   VAR_5 += VAR_4;
   FUNC_4(&VAR_2->droq_tasklet);
  }
  VAR_4 = 0;
  FUNC_3(1);

 } while (VAR_3-- && VAR_5);

 return VAR_4;
}
