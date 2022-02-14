
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prp_priv {int lock; int vdev; int eof_timeout_timer; int irqlock; struct imx_ic_priv* ic_priv; } ;
struct imx_ic_priv {int sd; int ipu_dev; struct prp_priv* task_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 struct prp_priv* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct imx_ic_priv *VAR_4)
{
 struct prp_priv *VAR_5;

 VAR_5 = FUNC_2(VAR_4->ipu_dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_4->task_priv = VAR_5;
 VAR_5->ic_priv = VAR_4;

 FUNC_5(&VAR_5->irqlock);
 FUNC_6(&VAR_5->eof_timeout_timer, VAR_3, 0);

 VAR_5->vdev = FUNC_3(VAR_4->ipu_dev,
         &VAR_4->sd,
         VAR_2);
 if (FUNC_0(VAR_5->vdev))
  return FUNC_1(VAR_5->vdev);

 FUNC_4(&VAR_5->lock);

 return 0;
}
