
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio_pdrv_genirq_platdata {int lock; int flags; } ;
struct uio_info {int irq; struct uio_pdrv_genirq_platdata* priv; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct uio_info *VAR_1, s32 VAR_2)
{
 struct uio_pdrv_genirq_platdata *VAR_3 = VAR_1->priv;
 unsigned long VAR_4;
 FUNC_4(&VAR_3->lock, VAR_4);
 if (VAR_2) {
  if (FUNC_0(VAR_0, &VAR_3->flags))
   FUNC_3(VAR_1->irq);
 } else {
  if (!FUNC_1(VAR_0, &VAR_3->flags))
   FUNC_2(VAR_1->irq);
 }
 FUNC_5(&VAR_3->lock, VAR_4);

 return 0;
}
