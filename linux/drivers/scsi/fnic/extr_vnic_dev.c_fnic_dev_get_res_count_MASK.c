
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnic_dev {TYPE_1__* res; } ;
typedef enum vnic_res_type { ____Placeholder_vnic_res_type } vnic_res_type ;
struct TYPE_2__ {unsigned int count; } ;



unsigned int FUNC_0(struct vnic_dev *VAR_0,
 enum vnic_res_type VAR_1)
{
 return VAR_0->res[VAR_1].count;
}
