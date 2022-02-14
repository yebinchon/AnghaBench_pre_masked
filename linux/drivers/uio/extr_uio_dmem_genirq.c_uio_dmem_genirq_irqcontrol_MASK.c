
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio_info {int irq; struct uio_dmem_genirq_platdata* priv; } ;
struct uio_dmem_genirq_platdata {int lock; int flags; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct uio_info *VAR_0, s32 VAR_1)
{
 struct uio_dmem_genirq_platdata *VAR_2 = VAR_0->priv;
 unsigned long VAR_3;
 FUNC_2(&VAR_2->lock, VAR_3);
 if (VAR_1) {
  if (FUNC_4(0, &VAR_2->flags))
   FUNC_1(VAR_0->irq);
 } else {
  if (!FUNC_5(0, &VAR_2->flags))
   FUNC_0(VAR_0->irq);
 }
 FUNC_3(&VAR_2->lock, VAR_3);

 return 0;
}
