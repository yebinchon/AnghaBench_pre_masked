
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct TYPE_2__ {scalar_t__ pci_base0; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(struct qlcnic_adapter
          *VAR_1)
{
 u32 VAR_2;






 VAR_2 = FUNC_0(VAR_1->ahw, VAR_0);
 FUNC_1(0, VAR_1->ahw->pci_base0 + VAR_2);
}
