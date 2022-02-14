
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prp_priv {struct imx_ic_priv* ic_priv; int lock; } ;
struct imx_ic_priv {struct prp_priv* task_priv; int ipu_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct prp_priv* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct imx_ic_priv *VAR_2)
{
 struct prp_priv *VAR_3;

 VAR_3 = FUNC_0(VAR_2->ipu_dev, sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 FUNC_1(&VAR_3->lock);
 VAR_2->task_priv = VAR_3;
 VAR_3->ic_priv = VAR_2;

 return 0;
}
