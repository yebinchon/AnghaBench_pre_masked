
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int atio_q_length; int * tgt_vp_map; scalar_t__ atio_dma; int * atio_ring; } ;
struct qla_hw_data {TYPE_1__ tgt; TYPE_2__* pdev; } ;
struct atio_from_isp {int dummy; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int,int *,scalar_t__) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct qla_hw_data *VAR_0)
{
 if (!FUNC_0())
  return;

 if (VAR_0->tgt.atio_ring) {
  FUNC_1(&VAR_0->pdev->dev, (VAR_0->tgt.atio_q_length + 1) *
      sizeof(struct atio_from_isp), VAR_0->tgt.atio_ring,
      VAR_0->tgt.atio_dma);
 }
 VAR_0->tgt.atio_ring = ((void*)0);
 VAR_0->tgt.atio_dma = 0;
 FUNC_2(VAR_0->tgt.tgt_vp_map);
 VAR_0->tgt.tgt_vp_map = ((void*)0);
}
