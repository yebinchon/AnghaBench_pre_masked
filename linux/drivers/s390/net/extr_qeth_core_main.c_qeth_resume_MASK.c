
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qeth_card {TYPE_2__* gdev; TYPE_1__* discipline; } ;
struct ccwgroup_device {int dev; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int (* set_online ) (struct ccwgroup_device*) ;} ;


 struct qeth_card* FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct qeth_card*,int,int ) ;
 int FUNC_3 (struct ccwgroup_device*) ;

__attribute__((used)) static int FUNC_4(struct ccwgroup_device *VAR_0)
{
 struct qeth_card *VAR_1 = FUNC_0(&VAR_0->dev);
 int VAR_2;

 VAR_2 = VAR_1->discipline->set_online(VAR_0);

 FUNC_2(VAR_1, 0xffffffff, 0);
 if (VAR_2)
  FUNC_1(&VAR_1->gdev->dev, "The qeth device driver failed to recover an error on the device\n");
 return VAR_2;
}
