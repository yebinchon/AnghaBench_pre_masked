
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cal_ctx {int csi2_port; int virtual_channel; int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int,struct cal_ctx*,char*,int,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *,int,int ) ;

__attribute__((used)) static void FUNC_5(struct cal_ctx *VAR_8)
{
 u32 VAR_9;

 VAR_9 = FUNC_2(VAR_8->dev, FUNC_0(VAR_8->csi2_port));
 FUNC_4(&VAR_9, VAR_8->csi2_port, VAR_2);
 FUNC_4(&VAR_9, 0x1, VAR_3);

 FUNC_4(&VAR_9, VAR_8->virtual_channel, VAR_7);

 FUNC_4(&VAR_9, 0, VAR_4);
 FUNC_4(&VAR_9, VAR_1, VAR_0);
 FUNC_4(&VAR_9, VAR_5,
    VAR_6);
 FUNC_3(VAR_8->dev, FUNC_0(VAR_8->csi2_port), VAR_9);
 FUNC_1(3, VAR_8, "CAL_CSI2_CTX0(%d) = 0x%08x\n", VAR_8->csi2_port,
  FUNC_2(VAR_8->dev, FUNC_0(VAR_8->csi2_port)));
}
