
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rdma_supported; } ;
struct TYPE_4__ {TYPE_1__ common; } ;
struct qede_dev {TYPE_2__ dev_info; } ;



bool FUNC_0(struct qede_dev *VAR_0)
{
 return VAR_0->dev_info.common.rdma_supported;
}
