
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fnic {TYPE_1__* msix; int pdev; int vdev; } ;
struct TYPE_2__ {struct fnic* devid; int requested; } ;


 int FUNC_0 (TYPE_1__*) ;



 int FUNC_1 (int ,struct fnic*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct fnic *VAR_0)
{
 int VAR_1;

 switch (FUNC_3(VAR_0->vdev)) {
 case 130:
 case 129:
  FUNC_1(FUNC_2(VAR_0->pdev, 0), VAR_0);
  break;

 case 128:
  for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->msix); VAR_1++)
   if (VAR_0->msix[VAR_1].requested)
    FUNC_1(FUNC_2(VAR_0->pdev, VAR_1),
      VAR_0->msix[VAR_1].devid);
  break;

 default:
  break;
 }
}
