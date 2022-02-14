
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ath10k_ce {int vaddr_rri; int paddr_rri; } ;
struct ath10k {TYPE_3__* hw_ce_regs; int dev; } ;
struct TYPE_6__ {int ce_rri_low; int ce_rri_high; TYPE_2__* upd; TYPE_1__* ctrl1_regs; } ;
struct TYPE_5__ {int mask; } ;
struct TYPE_4__ {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ath10k*,int) ;
 struct ath10k_ce* FUNC_1 (struct ath10k*) ;
 int FUNC_2 (struct ath10k*,int) ;
 int FUNC_3 (struct ath10k*,int,int) ;
 int FUNC_4 (int ,int,int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ) ;

void FUNC_8(struct ath10k *VAR_3)
{
 int VAR_4;
 u32 VAR_5;
 u32 VAR_6;
 u32 VAR_7;
 struct ath10k_ce *VAR_8 = FUNC_1(VAR_3);

 VAR_8->vaddr_rri = FUNC_4(VAR_3->dev,
        (VAR_0 * sizeof(u32)),
        &VAR_8->paddr_rri, VAR_2);

 if (!VAR_8->vaddr_rri)
  return;

 FUNC_3(VAR_3, VAR_3->hw_ce_regs->ce_rri_low,
     FUNC_5(VAR_8->paddr_rri));
 FUNC_3(VAR_3, VAR_3->hw_ce_regs->ce_rri_high,
     (FUNC_7(VAR_8->paddr_rri) &
     VAR_1));

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_6 = VAR_3->hw_ce_regs->ctrl1_regs->addr;
  VAR_7 = FUNC_0(VAR_3, VAR_4);
  VAR_5 = FUNC_2(VAR_3, VAR_7 + VAR_6);
  VAR_5 |= VAR_3->hw_ce_regs->upd->mask;
  FUNC_3(VAR_3, VAR_7 + VAR_6, VAR_5);
 }

 FUNC_6(VAR_8->vaddr_rri, 0, VAR_0 * sizeof(u32));
}
