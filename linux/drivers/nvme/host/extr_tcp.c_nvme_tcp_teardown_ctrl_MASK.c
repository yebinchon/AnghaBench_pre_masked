
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvme_ctrl {int admin_q; } ;
struct TYPE_2__ {int connect_work; int err_work; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nvme_ctrl*) ;
 int FUNC_4 (struct nvme_ctrl*) ;
 int FUNC_5 (struct nvme_ctrl*,int) ;
 int FUNC_6 (struct nvme_ctrl*,int) ;
 TYPE_1__* FUNC_7 (struct nvme_ctrl*) ;

__attribute__((used)) static void FUNC_8(struct nvme_ctrl *VAR_0, bool VAR_1)
{
 FUNC_2(&FUNC_7(VAR_0)->err_work);
 FUNC_1(&FUNC_7(VAR_0)->connect_work);

 FUNC_6(VAR_0, VAR_1);
 FUNC_0(VAR_0->admin_q);
 if (VAR_1)
  FUNC_4(VAR_0);
 else
  FUNC_3(VAR_0);
 FUNC_5(VAR_0, VAR_1);
}
