
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cal_ctx {int dev; int csi2_port; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (int,struct cal_ctx*,char*,int ,...) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static void FUNC_8(struct cal_ctx *VAR_20)
{
 int VAR_21;
 u32 VAR_22;

 VAR_22 = FUNC_3(VAR_20->dev, FUNC_1(VAR_20->csi2_port));
 FUNC_6(&VAR_22, VAR_19,
    VAR_6);
 FUNC_6(&VAR_22, VAR_19,
    VAR_8);
 FUNC_6(&VAR_22, VAR_18,
    VAR_9);
 FUNC_6(&VAR_22, 407, VAR_7);
 FUNC_5(VAR_20->dev, FUNC_1(VAR_20->csi2_port), VAR_22);
 FUNC_2(3, VAR_20, "CAL_CSI2_TIMING(%d) = 0x%08x\n", VAR_20->csi2_port,
  FUNC_3(VAR_20->dev, FUNC_1(VAR_20->csi2_port)));

 VAR_22 = FUNC_3(VAR_20->dev, FUNC_0(VAR_20->csi2_port));
 FUNC_6(&VAR_22, VAR_5,
    VAR_4);
 FUNC_6(&VAR_22, VAR_1,
    VAR_0);
 FUNC_5(VAR_20->dev, FUNC_0(VAR_20->csi2_port), VAR_22);
 for (VAR_21 = 0; VAR_21 < 10; VAR_21++) {
  if (FUNC_4(VAR_20->dev,
       FUNC_0(VAR_20->csi2_port),
       VAR_2) ==
      VAR_3)
   break;
  FUNC_7(1000, 1100);
 }
 FUNC_2(3, VAR_20, "CAL_CSI2_COMPLEXIO_CFG(%d) = 0x%08x\n", VAR_20->csi2_port,
  FUNC_3(VAR_20->dev, FUNC_0(VAR_20->csi2_port)));

 VAR_22 = FUNC_3(VAR_20->dev, VAR_10);
 FUNC_6(&VAR_22, VAR_11, VAR_12);
 FUNC_6(&VAR_22, 0xF, VAR_17);
 FUNC_6(&VAR_22, VAR_16,
    VAR_15);
 FUNC_6(&VAR_22, 0xFF, VAR_14);
 FUNC_6(&VAR_22, 0xFF, VAR_13);
 FUNC_5(VAR_20->dev, VAR_10, VAR_22);
 FUNC_2(3, VAR_20, "CAL_CTRL = 0x%08x\n", FUNC_3(VAR_20->dev, VAR_10));
}
