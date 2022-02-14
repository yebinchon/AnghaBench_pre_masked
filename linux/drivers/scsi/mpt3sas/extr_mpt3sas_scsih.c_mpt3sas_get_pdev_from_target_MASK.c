
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _pcie_device {int dummy; } ;
struct MPT3SAS_TARGET {int dummy; } ;
struct MPT3SAS_ADAPTER {int pcie_device_lock; } ;


 struct _pcie_device* FUNC_0 (struct MPT3SAS_ADAPTER*,struct MPT3SAS_TARGET*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static struct _pcie_device *
FUNC_3(struct MPT3SAS_ADAPTER *VAR_0,
 struct MPT3SAS_TARGET *VAR_1)
{
 struct _pcie_device *VAR_2;
 unsigned long VAR_3;

 FUNC_1(&VAR_0->pcie_device_lock, VAR_3);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->pcie_device_lock, VAR_3);

 return VAR_2;
}
