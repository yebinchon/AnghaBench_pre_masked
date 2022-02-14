
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ctcm_priv {TYPE_1__** channel; } ;
struct ccwgroup_device {scalar_t__ state; int * cdev; int dev; } ;
struct TYPE_2__ {int netdev; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct ctcm_priv* FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ccwgroup_device *VAR_2)
{
 struct ctcm_priv *VAR_3 = FUNC_2(&VAR_2->dev);
 int VAR_4;

 if (VAR_2->state == VAR_0)
  return 0;
 VAR_4 = FUNC_0(VAR_2->cdev[1]);
 if (VAR_4)
  goto err_out;
 VAR_4 = FUNC_0(VAR_2->cdev[0]);
 if (VAR_4)
  goto err_out;
 FUNC_1(VAR_3->channel[VAR_1]->netdev);
err_out:
 FUNC_3(VAR_3->channel[VAR_1]->netdev);
 return VAR_4;
}
