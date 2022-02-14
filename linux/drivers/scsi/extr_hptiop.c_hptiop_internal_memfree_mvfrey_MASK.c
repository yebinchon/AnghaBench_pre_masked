
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ req_shifted_phy; scalar_t__ req_virt; } ;
struct TYPE_7__ {TYPE_2__ internal_req; int internal_mem_size; } ;
struct TYPE_8__ {TYPE_3__ mvfrey; } ;
struct hptiop_hba {TYPE_4__ u; TYPE_1__* pcidev; } ;
typedef int dma_addr_t ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (int *,int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_1(struct hptiop_hba *VAR_0)
{
 if (VAR_0->u.mvfrey.internal_req.req_virt) {
  FUNC_0(&VAR_0->pcidev->dev,
   VAR_0->u.mvfrey.internal_mem_size,
   VAR_0->u.mvfrey.internal_req.req_virt,
   (dma_addr_t)
   VAR_0->u.mvfrey.internal_req.req_shifted_phy << 5);
  return 0;
 } else
  return -1;
}
