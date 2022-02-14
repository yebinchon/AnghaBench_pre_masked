
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct octeon_device_priv {int droq_tasklet; } ;
struct TYPE_4__ {int pf_srn; } ;
struct TYPE_3__ {int oq; } ;
struct octeon_device {TYPE_2__ sriov_info; scalar_t__ msix_on; int * droq; TYPE_1__ io_qmask; scalar_t__ priv; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct octeon_device*) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (struct octeon_device*) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (struct octeon_device*,int ,int ) ;
 int FUNC_7 (struct octeon_device*,int ,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(unsigned long VAR_1)
{
 int VAR_2;
 int VAR_3 = 0;
 struct octeon_device *VAR_4 = (struct octeon_device *)VAR_1;
 struct octeon_device_priv *VAR_5 =
  (struct octeon_device_priv *)VAR_4->priv;

 for (VAR_2 = 0; VAR_2 < FUNC_3(VAR_4); VAR_2++) {
  if (!(VAR_4->io_qmask.oq & FUNC_0(VAR_2)))
   continue;
  VAR_3 |= FUNC_6(VAR_4, VAR_4->droq[VAR_2],
         VAR_0);
  FUNC_5(VAR_4->droq[VAR_2], ((void*)0));

  if (FUNC_4(VAR_4) && VAR_4->msix_on) {



   int VAR_6 = VAR_2 + VAR_4->sriov_info.pf_srn;

   FUNC_7(
       VAR_4, FUNC_2(VAR_6),
       0x5700000040ULL);
   FUNC_7(
       VAR_4, FUNC_1(VAR_6), 0);
  }
 }

 if (VAR_3)
  FUNC_8(&VAR_5->droq_tasklet);
}
