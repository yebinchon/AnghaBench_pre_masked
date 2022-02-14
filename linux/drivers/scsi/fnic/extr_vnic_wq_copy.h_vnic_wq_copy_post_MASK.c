
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ desc_count; int desc_avail; } ;
struct vnic_wq_copy {scalar_t__ to_use_index; TYPE_2__* ctrl; TYPE_1__ ring; } ;
struct TYPE_4__ {int posted_index; } ;


 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 () ;

__attribute__((used)) static inline void FUNC_2(struct vnic_wq_copy *VAR_0)
{

 ((VAR_0->to_use_index + 1) == VAR_0->ring.desc_count) ?
  (VAR_0->to_use_index = 0) : (VAR_0->to_use_index++);
 VAR_0->ring.desc_avail--;






 FUNC_1();

 FUNC_0(VAR_0->to_use_index, &VAR_0->ctrl->posted_index);
}
