
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mei_device {int dev; } ;
struct hbm_dma_ring_ctrl {scalar_t__ hbuf_wr_idx; } ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct mei_device*,unsigned char*,int,int) ;
 struct hbm_dma_ring_ctrl* FUNC_6 (struct mei_device*) ;
 int FUNC_7 (struct mei_device*) ;

void FUNC_8(struct mei_device *VAR_0, unsigned char *VAR_1, u32 VAR_2)
{
 struct hbm_dma_ring_ctrl *VAR_3 = FUNC_6(VAR_0);
 u32 VAR_4;
 u32 VAR_5, VAR_6, VAR_7;

 if (FUNC_1(!VAR_3))
  return;

 FUNC_3(VAR_0->dev, "writing to dma %u bytes\n", VAR_2);
 VAR_4 = FUNC_7(VAR_0);
 VAR_5 = FUNC_0(VAR_3->hbuf_wr_idx) & (VAR_4 - 1);
 VAR_7 = FUNC_4(VAR_2);

 if (VAR_5 + VAR_7 > VAR_4) {
  VAR_1 += FUNC_5(VAR_0, VAR_1, VAR_5, VAR_4 - VAR_5);
  VAR_6 = VAR_7 - (VAR_4 - VAR_5);
  VAR_5 = 0;
 } else {
  VAR_6 = VAR_7;
 }

 FUNC_5(VAR_0, VAR_1, VAR_5, VAR_6);

 FUNC_2(VAR_3->hbuf_wr_idx, VAR_3->hbuf_wr_idx + VAR_7);
}
