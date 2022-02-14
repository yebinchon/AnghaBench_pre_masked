
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnic_wq_copy {int ring; TYPE_1__* ctrl; scalar_t__ to_clean_index; scalar_t__ to_use_index; } ;
struct TYPE_2__ {int error_status; int posted_index; int fetch_index; int enable; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct vnic_wq_copy*) ;
 int FUNC_5 (struct vnic_wq_copy*,int,void (*) (struct vnic_wq_copy*,struct fcpio_host_req*)) ;

void FUNC_6(struct vnic_wq_copy *VAR_0,
 void (*VAR_1)(struct vnic_wq_copy *VAR_2,
 struct fcpio_host_req *VAR_3))
{
 FUNC_0(FUNC_1(&VAR_0->ctrl->enable));

 if (FUNC_4(VAR_0))
  FUNC_5(VAR_0, -1, VAR_1);

 VAR_0->to_use_index = VAR_0->to_clean_index = 0;

 FUNC_2(0, &VAR_0->ctrl->fetch_index);
 FUNC_2(0, &VAR_0->ctrl->posted_index);
 FUNC_2(0, &VAR_0->ctrl->error_status);

 FUNC_3(&VAR_0->ring);
}
