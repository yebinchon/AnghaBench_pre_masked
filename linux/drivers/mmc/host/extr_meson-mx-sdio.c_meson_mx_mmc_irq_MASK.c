
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct meson_mx_mmc_host {int irq_lock; scalar_t__ base; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct meson_mx_mmc_host*,int,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 struct meson_mx_mmc_host *VAR_6 = (void *) VAR_5;
 u32 VAR_7, VAR_8;
 unsigned long VAR_9;
 irqreturn_t VAR_10;

 FUNC_2(&VAR_6->irq_lock, VAR_9);

 VAR_7 = FUNC_1(VAR_6->base + VAR_1);
 VAR_8 = FUNC_1(VAR_6->base + VAR_3);

 if (VAR_7 & VAR_2)
  VAR_10 = FUNC_0(VAR_6, VAR_7, VAR_8);
 else
  VAR_10 = VAR_0;


 FUNC_4(VAR_7, VAR_6->base + VAR_1);

 FUNC_3(&VAR_6->irq_lock, VAR_9);

 return VAR_10;
}
