
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {unsigned int desc_count; scalar_t__ base_addr; } ;
struct vnic_wq {int ** bufs; int * to_clean; int * to_use; TYPE_2__* ctrl; TYPE_1__ ring; } ;
struct TYPE_4__ {int error_status; int error_interrupt_offset; int error_interrupt_enable; int cq_index; int posted_index; int fetch_index; int ring_size; int ring_base; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned int,int *) ;
 int FUNC_1 (int,int *) ;

void FUNC_2(struct vnic_wq *VAR_2, unsigned int VAR_3,
  unsigned int VAR_4, unsigned int VAR_5,
  unsigned int VAR_6,
  unsigned int VAR_7)
{
 u64 VAR_8;
 unsigned int VAR_9 = VAR_2->ring.desc_count;

 VAR_8 = (u64)VAR_2->ring.base_addr | VAR_0;
 FUNC_1(VAR_8, &VAR_2->ctrl->ring_base);
 FUNC_0(VAR_9, &VAR_2->ctrl->ring_size);
 FUNC_0(VAR_4, &VAR_2->ctrl->fetch_index);
 FUNC_0(VAR_5, &VAR_2->ctrl->posted_index);
 FUNC_0(VAR_3, &VAR_2->ctrl->cq_index);
 FUNC_0(VAR_6, &VAR_2->ctrl->error_interrupt_enable);
 FUNC_0(VAR_7, &VAR_2->ctrl->error_interrupt_offset);
 FUNC_0(0, &VAR_2->ctrl->error_status);

 VAR_2->to_use = VAR_2->to_clean =
  &VAR_2->bufs[VAR_4 / VAR_1]
  [VAR_4 % VAR_1];
}
