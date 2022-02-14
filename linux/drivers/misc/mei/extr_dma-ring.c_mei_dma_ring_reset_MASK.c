
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_device {int dummy; } ;
struct hbm_dma_ring_ctrl {int dummy; } ;


 struct hbm_dma_ring_ctrl* FUNC_0 (struct mei_device*) ;
 int FUNC_1 (struct hbm_dma_ring_ctrl*,int ,int) ;

void FUNC_2(struct mei_device *VAR_0)
{
 struct hbm_dma_ring_ctrl *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1)
  return;

 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
}
