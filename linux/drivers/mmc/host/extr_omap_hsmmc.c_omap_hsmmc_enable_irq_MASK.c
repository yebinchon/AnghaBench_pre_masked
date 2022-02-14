
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_hsmmc_host {int flags; int irq_lock; int base; scalar_t__ use_dma; } ;
struct mmc_command {scalar_t__ opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct omap_hsmmc_host *VAR_11,
      struct mmc_command *VAR_12)
{
 u32 VAR_13 = VAR_6;
 unsigned long VAR_14;

 if (VAR_11->use_dma)
  VAR_13 &= ~(VAR_0 | VAR_1);


 if (VAR_12->opcode == VAR_8)
  VAR_13 &= ~VAR_3;

 FUNC_1(&VAR_11->irq_lock, VAR_14);
 FUNC_0(VAR_11->base, VAR_9, VAR_10);
 FUNC_0(VAR_11->base, VAR_7, VAR_13);


 if (VAR_11->flags & VAR_4)
  VAR_13 |= VAR_2;
 FUNC_0(VAR_11->base, VAR_5, VAR_13);
 FUNC_2(&VAR_11->irq_lock, VAR_14);
}
