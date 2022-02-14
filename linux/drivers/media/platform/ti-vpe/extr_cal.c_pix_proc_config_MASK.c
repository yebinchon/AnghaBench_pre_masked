
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cal_ctx {int csi2_port; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int,struct cal_ctx*,char*,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct cal_ctx *VAR_11)
{
 u32 VAR_12;

 VAR_12 = FUNC_2(VAR_11->dev, FUNC_0(VAR_11->csi2_port));
 FUNC_4(&VAR_12, VAR_7, VAR_8);
 FUNC_4(&VAR_12, VAR_2, VAR_3);
 FUNC_4(&VAR_12, VAR_4, VAR_5);
 FUNC_4(&VAR_12, VAR_9, VAR_10);
 FUNC_4(&VAR_12, VAR_11->csi2_port, VAR_1);
 FUNC_4(&VAR_12, VAR_0, VAR_6);
 FUNC_3(VAR_11->dev, FUNC_0(VAR_11->csi2_port), VAR_12);
 FUNC_1(3, VAR_11, "CAL_PIX_PROC(%d) = 0x%08x\n", VAR_11->csi2_port,
  FUNC_2(VAR_11->dev, FUNC_0(VAR_11->csi2_port)));
}
