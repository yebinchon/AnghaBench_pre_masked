
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mei_device {int dummy; } ;
struct hbm_dma_ring_ctrl {int hbuf_wr_idx; int hbuf_rd_idx; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 struct hbm_dma_ring_ctrl* FUNC_2 (struct mei_device*) ;
 scalar_t__ FUNC_3 (struct mei_device*) ;
 int FUNC_4 (struct mei_device*) ;

u32 FUNC_5(struct mei_device *VAR_0)
{
 struct hbm_dma_ring_ctrl *VAR_1 = FUNC_2(VAR_0);
 u32 VAR_2, VAR_3, VAR_4, VAR_5;

 if (!FUNC_4(VAR_0))
  return 0;

 if (FUNC_1(!VAR_1))
  return 0;


 VAR_4 = FUNC_3(VAR_0);
 VAR_3 = FUNC_0(VAR_1->hbuf_rd_idx);
 VAR_2 = FUNC_0(VAR_1->hbuf_wr_idx);

 if (VAR_3 > VAR_2)
  VAR_5 = VAR_3 - VAR_2;
 else
  VAR_5 = VAR_4 - (VAR_2 - VAR_3);

 return VAR_5;
}
