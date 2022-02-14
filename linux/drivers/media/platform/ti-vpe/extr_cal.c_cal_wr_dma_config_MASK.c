
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cal_ctx {unsigned int csi2_port; int dev; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (unsigned int) ;
 int VAR_9 ;
 int FUNC_2 (unsigned int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int,struct cal_ctx*,char*,unsigned int,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,unsigned int,int ) ;
 int FUNC_7 (int *,unsigned int,int ) ;

__attribute__((used)) static void FUNC_8(struct cal_ctx *VAR_12,
         unsigned int VAR_13)
{
 u32 VAR_14;

 VAR_14 = FUNC_4(VAR_12->dev, FUNC_0(VAR_12->csi2_port));
 FUNC_7(&VAR_14, VAR_12->csi2_port, VAR_1);
 FUNC_7(&VAR_14, VAR_3,
    VAR_2);
 FUNC_7(&VAR_14, VAR_4,
    VAR_5);
 FUNC_7(&VAR_14, VAR_6,
    VAR_7);
 FUNC_7(&VAR_14, VAR_0, VAR_8);
 FUNC_5(VAR_12->dev, FUNC_0(VAR_12->csi2_port), VAR_14);
 FUNC_3(3, VAR_12, "CAL_WR_DMA_CTRL(%d) = 0x%08x\n", VAR_12->csi2_port,
  FUNC_4(VAR_12->dev, FUNC_0(VAR_12->csi2_port)));





 FUNC_6(VAR_12->dev,
   FUNC_1(VAR_12->csi2_port),
   (VAR_13 / 16),
   VAR_9);
 FUNC_3(3, VAR_12, "CAL_WR_DMA_OFST(%d) = 0x%08x\n", VAR_12->csi2_port,
  FUNC_4(VAR_12->dev, FUNC_1(VAR_12->csi2_port)));

 VAR_14 = FUNC_4(VAR_12->dev, FUNC_2(VAR_12->csi2_port));

 FUNC_7(&VAR_14, 0, VAR_11);





 FUNC_7(&VAR_14, (VAR_13 / 8), VAR_10);
 FUNC_5(VAR_12->dev, FUNC_2(VAR_12->csi2_port), VAR_14);
 FUNC_3(3, VAR_12, "CAL_WR_DMA_XSIZE(%d) = 0x%08x\n", VAR_12->csi2_port,
  FUNC_4(VAR_12->dev, FUNC_2(VAR_12->csi2_port)));
}
