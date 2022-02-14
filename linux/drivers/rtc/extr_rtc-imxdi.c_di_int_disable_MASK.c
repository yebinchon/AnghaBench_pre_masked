
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct imxdi_dev {int irq_lock; scalar_t__ ioaddr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct imxdi_dev *VAR_1, u32 VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(&VAR_1->irq_lock, VAR_3);
 FUNC_3(FUNC_0(VAR_1->ioaddr + VAR_0) & ~VAR_2,
        VAR_1->ioaddr + VAR_0);
 FUNC_2(&VAR_1->irq_lock, VAR_3);
}
