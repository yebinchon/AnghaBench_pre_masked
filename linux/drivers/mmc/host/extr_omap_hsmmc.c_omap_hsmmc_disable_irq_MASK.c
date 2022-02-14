
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_hsmmc_host {int flags; int irq_lock; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct omap_hsmmc_host *VAR_6)
{
 u32 VAR_7 = 0;
 unsigned long VAR_8;

 FUNC_1(&VAR_6->irq_lock, VAR_8);

 if (VAR_6->flags & VAR_1)
  VAR_7 |= VAR_0;
 FUNC_0(VAR_6->base, VAR_3, VAR_7);
 FUNC_0(VAR_6->base, VAR_2, VAR_7);
 FUNC_0(VAR_6->base, VAR_4, VAR_5);
 FUNC_2(&VAR_6->irq_lock, VAR_8);
}
