
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio_pdrv_genirq_platdata {int lock; int flags; } ;
struct uio_info {struct uio_pdrv_genirq_platdata* priv; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_2, struct uio_info *VAR_3)
{
 struct uio_pdrv_genirq_platdata *VAR_4 = VAR_3->priv;





 FUNC_2(&VAR_4->lock);
 if (!FUNC_0(VAR_1, &VAR_4->flags))
  FUNC_1(VAR_2);
 FUNC_3(&VAR_4->lock);

 return VAR_0;
}
