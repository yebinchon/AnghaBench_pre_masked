
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mei_device {TYPE_1__* dr_dscr; int dev; } ;
struct hbm_dma_ring_ctrl {scalar_t__ dbuf_rd_idx; } ;
struct TYPE_2__ {int size; } ;


 size_t VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct mei_device*,unsigned char*,int,int) ;
 struct hbm_dma_ring_ctrl* FUNC_6 (struct mei_device*) ;

void FUNC_7(struct mei_device *VAR_1, unsigned char *VAR_2, u32 VAR_3)
{
 struct hbm_dma_ring_ctrl *VAR_4 = FUNC_6(VAR_1);
 u32 VAR_5;
 u32 VAR_6, VAR_7, VAR_8;

 if (FUNC_1(!VAR_4))
  return;

 FUNC_3(VAR_1->dev, "reading from dma %u bytes\n", VAR_3);

 if (!VAR_3)
  return;

 VAR_5 = VAR_1->dr_dscr[VAR_0].size >> 2;
 VAR_6 = FUNC_0(VAR_4->dbuf_rd_idx) & (VAR_5 - 1);
 VAR_8 = FUNC_4(VAR_3);


 if (!VAR_2)
  goto out;

 if (VAR_6 + VAR_8 > VAR_5) {
  VAR_2 += FUNC_5(VAR_1, VAR_2, VAR_6, VAR_5 - VAR_6);
  VAR_7 = VAR_8 - (VAR_5 - VAR_6);
  VAR_6 = 0;
 } else {
  VAR_7 = VAR_8;
 }

 FUNC_5(VAR_1, VAR_2, VAR_6, VAR_7);
out:
 FUNC_2(VAR_4->dbuf_rd_idx, VAR_4->dbuf_rd_idx + VAR_8);
}
