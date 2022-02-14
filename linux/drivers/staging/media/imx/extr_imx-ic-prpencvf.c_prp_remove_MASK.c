
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prp_priv {int vdev; int lock; } ;
struct imx_ic_priv {struct prp_priv* task_priv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct imx_ic_priv *VAR_0)
{
 struct prp_priv *VAR_1 = VAR_0->task_priv;

 FUNC_1(&VAR_1->lock);
 FUNC_0(VAR_1->vdev);
}
