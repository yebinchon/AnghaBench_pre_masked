
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int internal_req_phy; scalar_t__ internal_req; } ;
struct TYPE_6__ {TYPE_2__ mv; } ;
struct hptiop_hba {TYPE_3__ u; TYPE_1__* pcidev; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int *,int,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_1(struct hptiop_hba *VAR_0)
{
 if (VAR_0->u.mv.internal_req) {
  FUNC_0(&VAR_0->pcidev->dev, 0x800,
   VAR_0->u.mv.internal_req, VAR_0->u.mv.internal_req_phy);
  return 0;
 } else
  return -1;
}
