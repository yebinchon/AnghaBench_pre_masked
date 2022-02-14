
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int release; int * parent; int * bus; } ;
struct ntb_dev {TYPE_2__ dev; int ctx_lock; int * ctx_ops; int * ctx; TYPE_1__* pdev; int released; int ops; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct ntb_dev *VAR_3)
{
 if (!VAR_3)
  return -VAR_0;
 if (!VAR_3->pdev)
  return -VAR_0;
 if (!VAR_3->ops)
  return -VAR_0;
 if (!FUNC_3(VAR_3->ops))
  return -VAR_0;

 FUNC_2(&VAR_3->released);

 VAR_3->dev.bus = &VAR_1;
 VAR_3->dev.parent = &VAR_3->pdev->dev;
 VAR_3->dev.release = VAR_2;
 FUNC_0(&VAR_3->dev, "%s", FUNC_4(VAR_3->pdev));

 VAR_3->ctx = ((void*)0);
 VAR_3->ctx_ops = ((void*)0);
 FUNC_5(&VAR_3->ctx_lock);

 return FUNC_1(&VAR_3->dev);
}
