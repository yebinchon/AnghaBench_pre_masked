
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct qeth_card {int rx_mode_work; int ip_mc_htable; int cmd_wq; int ip_lock; int ip_htable; } ;
struct TYPE_4__ {int * type; } ;
struct ccwgroup_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int ) ;
 struct qeth_card* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_8(struct ccwgroup_device *VAR_3)
{
 struct qeth_card *VAR_4 = FUNC_3(&VAR_3->dev);
 int VAR_5;

 FUNC_5(VAR_4->ip_htable);
 FUNC_6(&VAR_4->ip_lock);
 VAR_4->cmd_wq = FUNC_1("%s_cmd", 0,
            FUNC_4(&VAR_3->dev));
 if (!VAR_4->cmd_wq)
  return -VAR_0;

 if (VAR_3->dev.type == &VAR_1) {
  VAR_5 = FUNC_7(&VAR_3->dev);
  if (VAR_5) {
   FUNC_2(VAR_4->cmd_wq);
   return VAR_5;
  }
 }

 FUNC_5(VAR_4->ip_mc_htable);
 FUNC_0(&VAR_4->rx_mode_work, VAR_2);
 return 0;
}
