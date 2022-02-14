
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct _pcie_device {int list; } ;
struct MPT3SAS_ADAPTER {int pcie_device_lock; scalar_t__ shost_recovery; } ;


 struct _pcie_device* FUNC_0 (struct MPT3SAS_ADAPTER*,int ) ;
 int FUNC_1 (struct MPT3SAS_ADAPTER*,struct _pcie_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct _pcie_device*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_7(struct MPT3SAS_ADAPTER *VAR_0, u16 VAR_1)
{
 struct _pcie_device *VAR_2;
 unsigned long VAR_3;
 int VAR_4 = 0;

 if (VAR_0->shost_recovery)
  return;

 FUNC_5(&VAR_0->pcie_device_lock, VAR_3);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2) {
  if (!FUNC_3(&VAR_2->list)) {
   FUNC_2(&VAR_2->list);
   VAR_4 = 1;
   FUNC_4(VAR_2);
  }
 }
 FUNC_6(&VAR_0->pcie_device_lock, VAR_3);
 if (VAR_4) {
  FUNC_1(VAR_0, VAR_2);
  FUNC_4(VAR_2);
 }
}
