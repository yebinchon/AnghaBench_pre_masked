
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcmu_dev {int kref; int uio_info; int node; int qfull_timer; int cmd_timer; } ;
struct se_device {int dummy; } ;


 struct tcmu_dev* FUNC_0 (struct se_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (struct tcmu_dev*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct se_device *VAR_2)
{
 struct tcmu_dev *VAR_3 = FUNC_0(VAR_2);

 FUNC_1(&VAR_3->cmd_timer);
 FUNC_1(&VAR_3->qfull_timer);

 FUNC_4(&VAR_0);
 FUNC_3(&VAR_3->node);
 FUNC_5(&VAR_0);

 FUNC_6(VAR_3);

 FUNC_7(&VAR_3->uio_info);


 FUNC_2(&VAR_3->kref, VAR_1);
}
