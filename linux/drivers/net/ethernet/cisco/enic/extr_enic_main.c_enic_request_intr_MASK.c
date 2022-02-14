
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct net_device {char* name; unsigned int rq_count; unsigned int wq_count; unsigned int intr_count; TYPE_3__* msix; TYPE_2__* msix_entry; struct net_device* napi; TYPE_1__* pdev; int vdev; struct net_device* netdev; } ;
struct enic {char* name; unsigned int rq_count; unsigned int wq_count; unsigned int intr_count; TYPE_3__* msix; TYPE_2__* msix_entry; struct enic* napi; TYPE_1__* pdev; int vdev; struct enic* netdev; } ;
struct TYPE_6__ {char* devname; int requested; struct net_device* devid; void* isr; } ;
struct TYPE_5__ {int vector; } ;
struct TYPE_4__ {int irq; } ;


 unsigned int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;



 int FUNC_1 (struct net_device*,unsigned int) ;
 int FUNC_2 (struct net_device*) ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 unsigned int FUNC_3 (struct net_device*) ;
 unsigned int FUNC_4 (struct net_device*) ;
 unsigned int FUNC_5 (struct net_device*,unsigned int) ;
 unsigned int FUNC_6 (struct net_device*,unsigned int) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ,void*,int ,char*,struct net_device*) ;
 int FUNC_9 (char*,int,char*,char*,...) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct enic *VAR_6)
{
 struct net_device *VAR_7 = VAR_6->netdev;
 unsigned int VAR_8, VAR_9;
 int VAR_10 = 0;

 FUNC_7(VAR_6);
 switch (FUNC_10(VAR_6->vdev)) {

 case 130:

  VAR_10 = FUNC_8(VAR_6->pdev->irq, VAR_1,
   VAR_0, VAR_7->name, VAR_7);
  break;

 case 129:

  VAR_10 = FUNC_8(VAR_6->pdev->irq, VAR_2,
   0, VAR_7->name, VAR_6);
  break;

 case 128:

  for (VAR_8 = 0; VAR_8 < VAR_6->rq_count; VAR_8++) {
   VAR_9 = FUNC_5(VAR_6, VAR_8);
   FUNC_9(VAR_6->msix[VAR_9].devname,
    sizeof(VAR_6->msix[VAR_9].devname),
    "%s-rx-%u", VAR_7->name, VAR_8);
   VAR_6->msix[VAR_9].isr = VAR_3;
   VAR_6->msix[VAR_9].devid = &VAR_6->napi[VAR_8];
  }

  for (VAR_8 = 0; VAR_8 < VAR_6->wq_count; VAR_8++) {
   int VAR_11 = FUNC_1(VAR_6, VAR_8);

   VAR_9 = FUNC_6(VAR_6, VAR_8);
   FUNC_9(VAR_6->msix[VAR_9].devname,
    sizeof(VAR_6->msix[VAR_9].devname),
    "%s-tx-%u", VAR_7->name, VAR_8);
   VAR_6->msix[VAR_9].isr = VAR_3;
   VAR_6->msix[VAR_9].devid = &VAR_6->napi[VAR_11];
  }

  VAR_9 = FUNC_3(VAR_6);
  FUNC_9(VAR_6->msix[VAR_9].devname,
   sizeof(VAR_6->msix[VAR_9].devname),
   "%s-err", VAR_7->name);
  VAR_6->msix[VAR_9].isr = VAR_4;
  VAR_6->msix[VAR_9].devid = VAR_6;

  VAR_9 = FUNC_4(VAR_6);
  FUNC_9(VAR_6->msix[VAR_9].devname,
   sizeof(VAR_6->msix[VAR_9].devname),
   "%s-notify", VAR_7->name);
  VAR_6->msix[VAR_9].isr = VAR_5;
  VAR_6->msix[VAR_9].devid = VAR_6;

  for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_6->msix); VAR_8++)
   VAR_6->msix[VAR_8].requested = 0;

  for (VAR_8 = 0; VAR_8 < VAR_6->intr_count; VAR_8++) {
   VAR_10 = FUNC_8(VAR_6->msix_entry[VAR_8].vector,
    VAR_6->msix[VAR_8].isr, 0,
    VAR_6->msix[VAR_8].devname,
    VAR_6->msix[VAR_8].devid);
   if (VAR_10) {
    FUNC_2(VAR_6);
    break;
   }
   VAR_6->msix[VAR_8].requested = 1;
  }

  break;

 default:
  break;
 }

 return VAR_10;
}
