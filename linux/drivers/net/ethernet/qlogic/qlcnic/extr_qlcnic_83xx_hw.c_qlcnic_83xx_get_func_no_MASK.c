
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct TYPE_2__ {int pci_func; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;

void FUNC_1(struct qlcnic_adapter *VAR_1)
{
 u32 VAR_2 = FUNC_0(VAR_1->ahw, VAR_0);
 VAR_1->ahw->pci_func = (VAR_2 >> 24) & 0xff;
}
