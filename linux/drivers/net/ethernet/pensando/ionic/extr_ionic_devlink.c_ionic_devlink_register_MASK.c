
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ionic {TYPE_1__* master_lif; int dl_port; int dev; } ;
struct devlink {int dummy; } ;
struct TYPE_2__ {int netdev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *,int ,int ,int,int ,int *,int ) ;
 int FUNC_3 (struct devlink*,int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct devlink*,int ) ;
 struct devlink* FUNC_6 (struct ionic*) ;

int FUNC_7(struct ionic *VAR_1)
{
 struct devlink *VAR_2 = FUNC_6(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_5(VAR_2, VAR_1->dev);
 if (VAR_3) {
  FUNC_1(VAR_1->dev, "devlink_register failed: %d\n", VAR_3);
  return VAR_3;
 }

 FUNC_2(&VAR_1->dl_port, VAR_0,
          0, 0, 0, ((void*)0), 0);
 VAR_3 = FUNC_3(VAR_2, &VAR_1->dl_port, 0);
 if (VAR_3)
  FUNC_0(VAR_1->dev, "devlink_port_register failed: %d\n", VAR_3);
 else
  FUNC_4(&VAR_1->dl_port,
       VAR_1->master_lif->netdev);

 return VAR_3;
}
