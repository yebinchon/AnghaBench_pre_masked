
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ucb1x00_dev {TYPE_1__* ucb; struct platform_device* priv; } ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct platform_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct platform_device*) ;

__attribute__((used)) static void FUNC_3(struct ucb1x00_dev *VAR_3)
{
 struct platform_device *VAR_4 = VAR_3->priv;

 if (!FUNC_0(VAR_4))
  FUNC_2(VAR_4);

 FUNC_1(&VAR_3->ucb->dev, &VAR_0);
 FUNC_1(&VAR_3->ucb->dev, &VAR_2);
 FUNC_1(&VAR_3->ucb->dev, &VAR_1);
}
