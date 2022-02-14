
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct qeth_card {int rx_mode_work; int mac_htable; } ;
struct TYPE_3__ {int * type; } ;
struct ccwgroup_device {TYPE_1__ dev; } ;


 int FUNC_0 (int *,int ) ;
 struct qeth_card* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_4 (struct qeth_card*) ;

__attribute__((used)) static int FUNC_5(struct ccwgroup_device *VAR_2)
{
 struct qeth_card *VAR_3 = FUNC_1(&VAR_2->dev);
 int VAR_4;

 FUNC_4(VAR_3);

 if (VAR_2->dev.type == &VAR_0) {
  VAR_4 = FUNC_3(&VAR_2->dev);
  if (VAR_4)
   return VAR_4;
 }

 FUNC_2(VAR_3->mac_htable);
 FUNC_0(&VAR_3->rx_mode_work, VAR_1);
 return 0;
}
