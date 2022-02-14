
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_fc_ctrl {int connect_work; int err_work; } ;
struct nvme_ctrl {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nvme_fc_ctrl*) ;
 struct nvme_fc_ctrl* FUNC_3 (struct nvme_ctrl*) ;

__attribute__((used)) static void
FUNC_4(struct nvme_ctrl *VAR_0)
{
 struct nvme_fc_ctrl *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(&VAR_1->err_work);
 FUNC_0(&VAR_1->connect_work);




 FUNC_2(VAR_1);
}
