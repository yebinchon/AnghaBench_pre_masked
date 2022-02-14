
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snic {TYPE_1__* msix; int pdev; } ;
struct TYPE_2__ {int devid; scalar_t__ requested; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;

void
FUNC_3(struct snic *VAR_0)
{
 int VAR_1;


 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->msix); VAR_1++) {
  if (VAR_0->msix[VAR_1].requested) {
   FUNC_1(FUNC_2(VAR_0->pdev, VAR_1),
     VAR_0->msix[VAR_1].devid);
  }
 }
}
