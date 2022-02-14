
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct jmb38x_ms_host {int lock; TYPE_1__* req; scalar_t__ addr; int notify; } ;
struct jmb38x_ms {int host_cnt; TYPE_3__** hosts; TYPE_2__* pdev; } ;
struct TYPE_9__ {int request; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_7__ {int error; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (struct pci_dev*,int ) ;
 int FUNC_4 (struct jmb38x_ms*) ;
 struct jmb38x_ms_host* FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (struct pci_dev*) ;
 struct jmb38x_ms* FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*,int *) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_15(struct pci_dev *VAR_4)
{
 struct jmb38x_ms *VAR_5 = FUNC_8(VAR_4);
 struct jmb38x_ms_host *VAR_6;
 int VAR_7;
 unsigned long VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_5->host_cnt; ++VAR_7) {
  if (!VAR_5->hosts[VAR_7])
   break;

  VAR_6 = FUNC_5(VAR_5->hosts[VAR_7]);

  VAR_5->hosts[VAR_7]->request = VAR_3;
  FUNC_13(&VAR_6->notify);
  FUNC_14(0, VAR_6->addr + VAR_1);
  FUNC_14(0, VAR_6->addr + VAR_2);
  FUNC_0(&VAR_5->pdev->dev, "interrupts off\n");
  FUNC_11(&VAR_6->lock, VAR_8);
  if (VAR_6->req) {
   VAR_6->req->error = -VAR_0;
   FUNC_1(VAR_5->hosts[VAR_7], 1);
  }
  FUNC_12(&VAR_6->lock, VAR_8);

  FUNC_6(VAR_5->hosts[VAR_7]);
  FUNC_0(&VAR_5->pdev->dev, "host removed\n");

  FUNC_2(VAR_5->hosts[VAR_7]);
 }

 FUNC_3(VAR_4, 0);

 FUNC_10(VAR_4, ((void*)0));
 FUNC_9(VAR_4);
 FUNC_7(VAR_4);
 FUNC_4(VAR_5);
}
