
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qlcnic_adapter {TYPE_2__* ahw; } ;
struct TYPE_3__ {scalar_t__ prev_state; } ;
struct TYPE_4__ {scalar_t__ pci_func; TYPE_1__ idc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qlcnic_adapter*,int) ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*,int) ;

__attribute__((used)) static int FUNC_3(struct qlcnic_adapter *VAR_2)
{
 int VAR_3, VAR_4 = 0;
 u32 VAR_5;

 VAR_3 = VAR_1;
 if (VAR_2->ahw->idc.prev_state == VAR_0) {
  VAR_5 = FUNC_1(VAR_2);
  if (VAR_2->ahw->pci_func == VAR_5)
   VAR_4 = FUNC_2(VAR_2, 1);
 } else {
  VAR_4 = FUNC_0(VAR_2, VAR_3);
 }

 return VAR_4;
}
