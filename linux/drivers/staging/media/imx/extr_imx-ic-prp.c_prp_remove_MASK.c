
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prp_priv {int lock; } ;
struct imx_ic_priv {struct prp_priv* task_priv; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct imx_ic_priv *VAR_0)
{
 struct prp_priv *VAR_1 = VAR_0->task_priv;

 FUNC_0(&VAR_1->lock);
}
