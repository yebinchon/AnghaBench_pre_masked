
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int (* disable_interrupt ) (struct octeon_device*,int ) ;} ;
struct octeon_device {int ifcount; int num_msix_irqs; TYPE_3__* pci_dev; int status; int * msix_entries; int * ioq_vector; scalar_t__ msix_on; TYPE_2__ fn_list; TYPE_1__* props; } ;
struct msix_entry {int vector; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_6__ {int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct octeon_device*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (struct octeon_device*) ;
 int FUNC_12 (struct octeon_device*,int ) ;

__attribute__((used)) static void FUNC_13(struct octeon_device *VAR_2)
{
 struct msix_entry *VAR_3;
 int VAR_4;


 FUNC_0(&VAR_2->status, VAR_1);

 for (VAR_4 = 0; VAR_4 < VAR_2->ifcount; VAR_4++)
  FUNC_7(VAR_2->props[VAR_4].netdev);


 VAR_2->fn_list.disable_interrupt(VAR_2, VAR_0);

 FUNC_11(VAR_2);
 if (VAR_2->msix_on) {
  VAR_3 = (struct msix_entry *)VAR_2->msix_entries;
  for (VAR_4 = 0; VAR_4 < VAR_2->num_msix_irqs; VAR_4++) {

   FUNC_4(VAR_3[VAR_4].vector,
           ((void*)0));
   FUNC_3(VAR_3[VAR_4].vector,
     &VAR_2->ioq_vector[VAR_4]);
  }
  FUNC_10(VAR_2->pci_dev);
  FUNC_5(VAR_2->msix_entries);
  VAR_2->msix_entries = ((void*)0);
  FUNC_8(VAR_2);
 }
 FUNC_2(&VAR_2->pci_dev->dev, "Device state is now %s\n",
  FUNC_6(&VAR_2->status));


 FUNC_1(VAR_2->pci_dev);

 FUNC_9(VAR_2->pci_dev);
}
