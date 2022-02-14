
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvme_ctrl {int scan_lock; TYPE_1__* subsys; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nvme_ctrl*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct nvme_ctrl*) ;
 int FUNC_4 (struct nvme_ctrl*,int ) ;
 int FUNC_5 (struct nvme_ctrl*) ;
 int FUNC_6 (struct nvme_ctrl*) ;

__attribute__((used)) static void FUNC_7(struct nvme_ctrl *VAR_6, u32 VAR_7)
{





 if (VAR_7 & VAR_2)
  FUNC_6(VAR_6);
 if (VAR_7 & (VAR_2 | VAR_1)) {
  FUNC_5(VAR_6);
  FUNC_2(VAR_6->subsys);
  FUNC_0(&VAR_6->subsys->lock);
  FUNC_4(VAR_6, VAR_5);
  FUNC_0(&VAR_6->scan_lock);
 }
 if (VAR_7 & VAR_0)
  FUNC_1(VAR_6);
 if (VAR_7 & (VAR_4 | VAR_3))
  FUNC_3(VAR_6);
}
