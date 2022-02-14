
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ef4_nic {int pci_dev; scalar_t__ membase_phys; TYPE_1__* type; int * membase; int net_dev; } ;
struct TYPE_2__ {int mem_bar; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ef4_nic*,int ,int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct ef4_nic *VAR_1)
{
 int VAR_2;

 FUNC_1(VAR_1, VAR_0, VAR_1->net_dev, "shutting down I/O\n");

 if (VAR_1->membase) {
  FUNC_0(VAR_1->membase);
  VAR_1->membase = ((void*)0);
 }

 if (VAR_1->membase_phys) {
  VAR_2 = VAR_1->type->mem_bar;
  FUNC_3(VAR_1->pci_dev, VAR_2);
  VAR_1->membase_phys = 0;
 }


 if (!FUNC_4(VAR_1->pci_dev))
  FUNC_2(VAR_1->pci_dev);
}
