
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct aspeed_sdhci {int width_mask; } ;
struct aspeed_sdc {int lock; scalar_t__ regs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct aspeed_sdc *VAR_1,
        struct aspeed_sdhci *VAR_2,
        bool VAR_3)
{
 u32 VAR_4;


 FUNC_1(&VAR_1->lock);
 VAR_4 = FUNC_0(VAR_1->regs + VAR_0);
 if (VAR_3)
  VAR_4 |= VAR_2->width_mask;
 else
  VAR_4 &= ~VAR_2->width_mask;
 FUNC_3(VAR_4, VAR_1->regs + VAR_0);
 FUNC_2(&VAR_1->lock);
}
