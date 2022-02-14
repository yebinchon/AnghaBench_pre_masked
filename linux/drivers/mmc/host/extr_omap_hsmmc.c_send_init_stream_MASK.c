
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_hsmmc_host {int irq; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 unsigned long VAR_10 ;
 unsigned long FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct omap_hsmmc_host *VAR_11)
{
 int VAR_12 = 0;
 unsigned long VAR_13;

 FUNC_2(VAR_11->irq);

 FUNC_1(VAR_11->base, VAR_3, VAR_6);
 FUNC_1(VAR_11->base, VAR_2,
  FUNC_0(VAR_11->base, VAR_2) | VAR_4);
 FUNC_1(VAR_11->base, VAR_1, VAR_5);

 VAR_13 = VAR_10 + FUNC_4(VAR_7);
 while ((VAR_12 != VAR_0) && FUNC_5(VAR_10, VAR_13))
  VAR_12 = FUNC_0(VAR_11->base, VAR_8) & VAR_0;

 FUNC_1(VAR_11->base, VAR_2,
  FUNC_0(VAR_11->base, VAR_2) & ~VAR_4);

 FUNC_1(VAR_11->base, VAR_8, VAR_9);
 FUNC_0(VAR_11->base, VAR_8);

 FUNC_3(VAR_11->irq);
}
