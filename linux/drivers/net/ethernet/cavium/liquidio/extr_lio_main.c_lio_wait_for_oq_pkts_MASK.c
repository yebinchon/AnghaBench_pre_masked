
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct octeon_device_priv {int droq_tasklet; } ;
struct TYPE_2__ {int oq; } ;
struct octeon_device {int * droq; TYPE_1__ io_qmask; scalar_t__ priv; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct octeon_device*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct octeon_device *VAR_0)
{
 struct octeon_device_priv *VAR_1 =
  (struct octeon_device_priv *)VAR_0->priv;
 int VAR_2 = 100, VAR_3 = 0, VAR_4 = 0;
 int VAR_5;

 do {
  VAR_4 = 0;

  for (VAR_5 = 0; VAR_5 < FUNC_1(VAR_0); VAR_5++) {
   if (!(VAR_0->io_qmask.oq & FUNC_0(VAR_5)))
    continue;
   VAR_3 += FUNC_2(VAR_0->droq[VAR_5]);
  }
  if (VAR_3 > 0) {
   VAR_4 += VAR_3;
   FUNC_4(&VAR_1->droq_tasklet);
  }
  VAR_3 = 0;
  FUNC_3(1);

 } while (VAR_2-- && VAR_4);

 return VAR_3;
}
