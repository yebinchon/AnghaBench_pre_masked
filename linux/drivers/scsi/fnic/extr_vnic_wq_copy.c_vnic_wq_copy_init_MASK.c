
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {unsigned int desc_count; scalar_t__ base_addr; } ;
struct vnic_wq_copy {TYPE_2__* ctrl; TYPE_1__ ring; } ;
struct TYPE_4__ {int error_interrupt_offset; int error_interrupt_enable; int cq_index; int posted_index; int fetch_index; int ring_size; int ring_base; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (int,int *) ;

void FUNC_2(struct vnic_wq_copy *VAR_1, unsigned int VAR_2,
 unsigned int VAR_3,
 unsigned int VAR_4)
{
 u64 VAR_5;

 VAR_5 = (u64)VAR_1->ring.base_addr | VAR_0;
 FUNC_1(VAR_5, &VAR_1->ctrl->ring_base);
 FUNC_0(VAR_1->ring.desc_count, &VAR_1->ctrl->ring_size);
 FUNC_0(0, &VAR_1->ctrl->fetch_index);
 FUNC_0(0, &VAR_1->ctrl->posted_index);
 FUNC_0(VAR_2, &VAR_1->ctrl->cq_index);
 FUNC_0(VAR_3, &VAR_1->ctrl->error_interrupt_enable);
 FUNC_0(VAR_4, &VAR_1->ctrl->error_interrupt_offset);
}
