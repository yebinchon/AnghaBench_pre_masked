
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cal_ctx {int dev; int csi2_port; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct cal_ctx *VAR_1)
{

 FUNC_4(VAR_1->dev,
   FUNC_1(2),
   VAR_0,
   FUNC_2(VAR_1->csi2_port));

 FUNC_4(VAR_1->dev,
   FUNC_1(3),
   VAR_0,
   FUNC_2(VAR_1->csi2_port));

 FUNC_3(VAR_1->dev, FUNC_0(1), 0xFF000000);
}
