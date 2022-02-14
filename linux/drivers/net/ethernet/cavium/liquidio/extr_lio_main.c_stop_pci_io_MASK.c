
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int (* disable_interrupt ) (struct octeon_device*,int ) ;} ;
struct octeon_device {int flags; TYPE_2__* pci_dev; int status; TYPE_1__ fn_list; } ;
struct TYPE_6__ {int dev; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int ,struct octeon_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (struct octeon_device*) ;
 int FUNC_8 (struct octeon_device*,int ) ;

__attribute__((used)) static void FUNC_9(struct octeon_device *VAR_3)
{

 FUNC_0(&VAR_3->status, VAR_2);

 FUNC_5(VAR_3->pci_dev);


 VAR_3->fn_list.disable_interrupt(VAR_3, VAR_1);

 FUNC_7(VAR_3);


 FUNC_3(VAR_3->pci_dev->irq, VAR_3);

 if (VAR_3->flags & VAR_0)
  FUNC_6(VAR_3->pci_dev);

 FUNC_2(&VAR_3->pci_dev->dev, "Device state is now %s\n",
  FUNC_4(&VAR_3->status));


 FUNC_1(VAR_3->pci_dev);
}
