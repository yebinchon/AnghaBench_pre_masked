
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; TYPE_1__* resource; int irq; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct net_device* FUNC_0 (int ,int ,int ,int *,int *,int *) ;
 int FUNC_1 (struct pci_dev*) ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,struct net_device*) ;
 int FUNC_4 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_5(struct pci_dev *VAR_2,
         const struct pci_device_id *VAR_3)
{
 struct net_device *VAR_4;

 if (FUNC_2(VAR_2))
  return -VAR_1;

 FUNC_4(VAR_2);

 VAR_4 = FUNC_0(VAR_2->irq, VAR_2->resource[1].start,
         VAR_0,
         &VAR_2->dev, ((void*)0), ((void*)0));
 if (!VAR_4) {
  FUNC_1(VAR_2);
  return -VAR_1;
 }

 FUNC_3(VAR_2, VAR_4);
 return 0;
}
