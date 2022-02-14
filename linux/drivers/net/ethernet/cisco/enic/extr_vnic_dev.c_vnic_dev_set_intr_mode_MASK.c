
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnic_dev {int intr_mode; } ;
typedef enum vnic_dev_intr_mode { ____Placeholder_vnic_dev_intr_mode } vnic_dev_intr_mode ;



void FUNC_0(struct vnic_dev *VAR_0,
 enum vnic_dev_intr_mode VAR_1)
{
 VAR_0->intr_mode = VAR_1;
}
