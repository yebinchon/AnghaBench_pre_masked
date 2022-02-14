
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _pcie_device {int list; } ;
struct MPT3SAS_ADAPTER {int pcie_device_lock; int pcie_device_list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct _pcie_device*) ;
 int FUNC_4 (struct _pcie_device*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct MPT3SAS_ADAPTER *VAR_0,
  struct _pcie_device *VAR_1)
{
 unsigned long VAR_2;

 FUNC_5(&VAR_0->pcie_device_lock, VAR_2);

 if (!FUNC_2(&VAR_1->list)) {
  FUNC_1(&VAR_1->list);
  FUNC_4(VAR_1);
 }
 FUNC_3(VAR_1);
 FUNC_0(&VAR_1->list, &VAR_0->pcie_device_list);

 FUNC_6(&VAR_0->pcie_device_lock, VAR_2);
}
