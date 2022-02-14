
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qla_tgt_vp_map {int dummy; } ;
struct TYPE_4__ {int atio_q_length; int tgt_vp_map; int atio_ring; int atio_dma; } ;
struct qla_hw_data {TYPE_2__ tgt; TYPE_1__* pdev; } ;
struct atio_from_isp {int dummy; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int,int *,int ) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ) ;

int
FUNC_4(struct qla_hw_data *VAR_3)
{
 if (!FUNC_0())
  return 0;

 VAR_3->tgt.tgt_vp_map = FUNC_2(VAR_2,
         sizeof(struct qla_tgt_vp_map),
         VAR_1);
 if (!VAR_3->tgt.tgt_vp_map)
  return -VAR_0;

 VAR_3->tgt.atio_ring = FUNC_1(&VAR_3->pdev->dev,
     (VAR_3->tgt.atio_q_length + 1) * sizeof(struct atio_from_isp),
     &VAR_3->tgt.atio_dma, VAR_1);
 if (!VAR_3->tgt.atio_ring) {
  FUNC_3(VAR_3->tgt.tgt_vp_map);
  return -VAR_0;
 }
 return 0;
}
