
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qede_dev {int sp_task; int sp_flags; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct qede_dev* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int *) ;

void FUNC_3(struct net_device *VAR_1)
{
 struct qede_dev *VAR_2 = FUNC_0(VAR_1);

 FUNC_2(VAR_0, &VAR_2->sp_flags);
 FUNC_1(&VAR_2->sp_task, 0);
}
