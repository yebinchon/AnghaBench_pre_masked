
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct cio2_queue {int fbpt; int fbpt_bus_addr; } ;
struct cio2_device {TYPE_1__* pci_dev; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,int ,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct cio2_device *VAR_3, struct cio2_queue *VAR_4)
{
 struct device *VAR_5 = &VAR_3->pci_dev->dev;

 VAR_4->fbpt = FUNC_0(VAR_5, VAR_0, &VAR_4->fbpt_bus_addr,
         VAR_2);
 if (!VAR_4->fbpt)
  return -VAR_1;

 return 0;
}
