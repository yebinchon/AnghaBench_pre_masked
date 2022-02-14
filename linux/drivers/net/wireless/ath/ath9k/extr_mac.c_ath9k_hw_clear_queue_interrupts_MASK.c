
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ath_hw {int txok_interrupt_mask; int txerr_interrupt_mask; int txdesc_interrupt_mask; int txeol_interrupt_mask; int txurn_interrupt_mask; } ;



__attribute__((used)) static void FUNC_0(struct ath_hw *VAR_0, u32 VAR_1)
{
 VAR_0->txok_interrupt_mask &= ~(1 << VAR_1);
 VAR_0->txerr_interrupt_mask &= ~(1 << VAR_1);
 VAR_0->txdesc_interrupt_mask &= ~(1 << VAR_1);
 VAR_0->txeol_interrupt_mask &= ~(1 << VAR_1);
 VAR_0->txurn_interrupt_mask &= ~(1 << VAR_1);
}
