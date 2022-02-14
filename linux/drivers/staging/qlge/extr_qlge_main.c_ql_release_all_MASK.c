
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ql_adapter {int mpi_coredump; scalar_t__ doorbell_area; scalar_t__ reg_base; int * workqueue; } ;
struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 struct ql_adapter* FUNC_2 (struct net_device*) ;
 struct net_device* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct pci_dev *VAR_0)
{
 struct net_device *VAR_1 = FUNC_3(VAR_0);
 struct ql_adapter *VAR_2 = FUNC_2(VAR_1);

 if (VAR_2->workqueue) {
  FUNC_0(VAR_2->workqueue);
  VAR_2->workqueue = ((void*)0);
 }

 if (VAR_2->reg_base)
  FUNC_1(VAR_2->reg_base);
 if (VAR_2->doorbell_area)
  FUNC_1(VAR_2->doorbell_area);
 FUNC_5(VAR_2->mpi_coredump);
 FUNC_4(VAR_0);
}
