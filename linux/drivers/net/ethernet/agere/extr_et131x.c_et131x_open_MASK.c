
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {unsigned int irq; int dev; } ;
struct net_device {int name; } ;
struct TYPE_3__ {scalar_t__ expires; } ;
struct et131x_adapter {int napi; int flags; TYPE_1__ error_timer; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,char*,unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 struct et131x_adapter* FUNC_5 (struct net_device*) ;
 int FUNC_6 (unsigned int,int ,int ,int ,struct net_device*) ;
 int FUNC_7 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_6)
{
 struct et131x_adapter *VAR_7 = FUNC_5(VAR_6);
 struct pci_dev *VAR_8 = VAR_7->pdev;
 unsigned int VAR_9 = VAR_8->irq;
 int VAR_10;


 FUNC_7(&VAR_7->error_timer, VAR_3, 0);
 VAR_7->error_timer.expires = VAR_5 +
  FUNC_3(VAR_2);
 FUNC_0(&VAR_7->error_timer);

 VAR_10 = FUNC_6(VAR_9, VAR_4,
        VAR_1, VAR_6->name, VAR_6);
 if (VAR_10) {
  FUNC_1(&VAR_8->dev, "could not register IRQ %d\n", VAR_9);
  return VAR_10;
 }

 VAR_7->flags |= VAR_0;

 FUNC_4(&VAR_7->napi);

 FUNC_2(VAR_6);

 return VAR_10;
}
