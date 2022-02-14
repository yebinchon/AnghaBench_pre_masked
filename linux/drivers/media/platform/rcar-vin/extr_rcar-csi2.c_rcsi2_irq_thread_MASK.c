
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_csi2 {int lock; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct rcar_csi2*) ;
 int FUNC_4 (struct rcar_csi2*) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_1, void *VAR_2)
{
 struct rcar_csi2 *VAR_3 = VAR_2;

 FUNC_1(&VAR_3->lock);
 FUNC_4(VAR_3);
 FUNC_5(1000, 2000);
 if (FUNC_3(VAR_3))
  FUNC_0(VAR_3->dev, "Failed to restart CSI-2 receiver\n");
 FUNC_2(&VAR_3->lock);

 return VAR_0;
}
