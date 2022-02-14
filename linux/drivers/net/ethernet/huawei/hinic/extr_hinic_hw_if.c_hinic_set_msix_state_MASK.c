
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct hinic_hwif {scalar_t__ intr_regs_base; } ;
typedef enum hinic_msix_state { ____Placeholder_hinic_msix_state } hinic_msix_state ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

void FUNC_2(struct hinic_hwif *VAR_3, u16 VAR_4,
     enum hinic_msix_state VAR_5)
{
 u32 VAR_6 = VAR_4 * VAR_1 +
   VAR_2;
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_3->intr_regs_base + VAR_6);
 VAR_7 &= ~VAR_0;

 if (VAR_5)
  VAR_7 |= VAR_0;

 FUNC_1(VAR_7, VAR_3->intr_regs_base + VAR_6);
}
