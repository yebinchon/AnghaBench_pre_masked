
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct MPT3SAS_ADAPTER {TYPE_1__* pcie_sg_lookup; } ;
struct TYPE_2__ {scalar_t__ pcie_sgl; } ;



void *
FUNC_0(struct MPT3SAS_ADAPTER *VAR_0, u16 VAR_1)
{
 return (void *)(VAR_0->pcie_sg_lookup[VAR_1 - 1].pcie_sgl);
}
