
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qeth_card {TYPE_1__* discipline; int gdev; } ;
struct ccwgroup_device {int dev; } ;
typedef enum qeth_discipline_id { ____Placeholder_qeth_discipline_id } qeth_discipline_id ;
struct TYPE_2__ {int (* setup ) (int ) ;int (* set_online ) (struct ccwgroup_device*) ;} ;


 scalar_t__ FUNC_0 (struct qeth_card*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct qeth_card* FUNC_1 (int *) ;
 int FUNC_2 (struct qeth_card*) ;
 int FUNC_3 (struct qeth_card*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ccwgroup_device*) ;

__attribute__((used)) static int FUNC_6(struct ccwgroup_device *VAR_2)
{
 struct qeth_card *VAR_3 = FUNC_1(&VAR_2->dev);
 int VAR_4 = 0;
 enum qeth_discipline_id VAR_5;

 if (!VAR_3->discipline) {
  VAR_5 = FUNC_0(VAR_3) ? VAR_1 :
      VAR_0;
  VAR_4 = FUNC_3(VAR_3, VAR_5);
  if (VAR_4)
   goto err;
  VAR_4 = VAR_3->discipline->setup(VAR_3->gdev);
  if (VAR_4) {
   FUNC_2(VAR_3);
   goto err;
  }
 }
 VAR_4 = VAR_3->discipline->set_online(VAR_2);
err:
 return VAR_4;
}
