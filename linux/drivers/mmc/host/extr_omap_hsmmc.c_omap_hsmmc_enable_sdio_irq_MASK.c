
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_hsmmc_host {int irq_lock; int base; int req_in_progress; int flags; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 struct omap_hsmmc_host* FUNC_2 (struct mmc_host*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct mmc_host *VAR_7, int VAR_8)
{
 struct omap_hsmmc_host *VAR_9 = FUNC_2(VAR_7);
 u32 VAR_10, VAR_11;
 unsigned long VAR_12;

 FUNC_3(&VAR_9->irq_lock, VAR_12);

 VAR_11 = FUNC_0(VAR_9->base, VAR_2);
 VAR_10 = FUNC_0(VAR_9->base, VAR_6);
 if (VAR_8) {
  VAR_9->flags |= VAR_4;
  VAR_10 |= VAR_0;
  VAR_11 |= VAR_3 | VAR_1;
 } else {
  VAR_9->flags &= ~VAR_4;
  VAR_10 &= ~VAR_0;
  VAR_11 &= ~(VAR_3 | VAR_1);
 }
 FUNC_1(VAR_9->base, VAR_2, VAR_11);
 FUNC_1(VAR_9->base, VAR_5, VAR_10);





 if (!VAR_9->req_in_progress || !VAR_8)
  FUNC_1(VAR_9->base, VAR_6, VAR_10);


 FUNC_0(VAR_9->base, VAR_5);

 FUNC_4(&VAR_9->irq_lock, VAR_12);
}
