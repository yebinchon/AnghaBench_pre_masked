
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {TYPE_3__* msix; TYPE_1__* msix_entry; TYPE_2__* pdev; int vdev; struct net_device* netdev; } ;
struct enic {TYPE_3__* msix; TYPE_1__* msix_entry; TYPE_2__* pdev; int vdev; struct enic* netdev; } ;
struct TYPE_6__ {struct net_device* devid; int requested; } ;
struct TYPE_5__ {int irq; } ;
struct TYPE_4__ {int vector; } ;


 unsigned int FUNC_0 (TYPE_3__*) ;



 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,struct net_device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct enic *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->netdev;
 unsigned int VAR_2;

 FUNC_1(VAR_0);
 switch (FUNC_3(VAR_0->vdev)) {
 case 130:
  FUNC_2(VAR_0->pdev->irq, VAR_1);
  break;
 case 129:
  FUNC_2(VAR_0->pdev->irq, VAR_0);
  break;
 case 128:
  for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->msix); VAR_2++)
   if (VAR_0->msix[VAR_2].requested)
    FUNC_2(VAR_0->msix_entry[VAR_2].vector,
     VAR_0->msix[VAR_2].devid);
  break;
 default:
  break;
 }
}
