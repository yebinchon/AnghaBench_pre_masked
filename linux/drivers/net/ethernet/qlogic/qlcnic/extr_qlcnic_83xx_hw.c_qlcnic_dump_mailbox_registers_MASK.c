
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct qlcnic_hardware_context {scalar_t__ pci_base0; } ;
struct qlcnic_adapter {TYPE_1__* pdev; struct qlcnic_hardware_context* ahw; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct qlcnic_hardware_context*,int ) ;
 int FUNC_1 (int *,char*,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(struct qlcnic_adapter *VAR_4)
{
 struct qlcnic_hardware_context *VAR_5 = VAR_4->ahw;
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_0);
 FUNC_1(&VAR_4->pdev->dev, "Mbx interrupt mask=0x%x, Mbx interrupt enable=0x%x, Host mbx control=0x%x, Fw mbx control=0x%x",
   FUNC_2(VAR_5->pci_base0 + VAR_6),
   FUNC_0(VAR_5, VAR_3),
   FUNC_0(VAR_5, VAR_2),
   FUNC_0(VAR_5, VAR_1));
}
