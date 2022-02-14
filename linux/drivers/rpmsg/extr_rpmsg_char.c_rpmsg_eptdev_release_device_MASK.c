
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int devt; } ;
struct rpmsg_eptdev {int cdev; TYPE_1__ dev; } ;
struct device {int id; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct rpmsg_eptdev* FUNC_2 (struct device*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct rpmsg_eptdev*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(struct device *VAR_2)
{
 struct rpmsg_eptdev *VAR_3 = FUNC_2(VAR_2);

 FUNC_3(&VAR_0, VAR_2->id);
 FUNC_3(&VAR_1, FUNC_0(VAR_3->dev.devt));
 FUNC_1(&VAR_3->cdev);
 FUNC_4(VAR_3);
}
