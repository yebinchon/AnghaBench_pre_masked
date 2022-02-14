
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vnic_wq {TYPE_2__* ctrl; TYPE_1__* to_use; } ;
struct TYPE_4__ {int posted_index; } ;
struct TYPE_3__ {int index; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 () ;

__attribute__((used)) static inline void FUNC_2(struct vnic_wq *VAR_0)
{





 FUNC_1();
 FUNC_0(VAR_0->to_use->index, &VAR_0->ctrl->posted_index);
}
