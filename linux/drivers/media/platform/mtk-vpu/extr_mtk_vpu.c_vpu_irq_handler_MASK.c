
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int ws; int wq; } ;
struct mtk_vpu {int clk; TYPE_1__ wdt; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct mtk_vpu*,int ) ;
 int FUNC_5 (struct mtk_vpu*,int,int ) ;
 int FUNC_6 (struct mtk_vpu*) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_4, void *VAR_5)
{
 struct mtk_vpu *VAR_6 = VAR_5;
 u32 VAR_7;
 int VAR_8;






 VAR_8 = FUNC_1(VAR_6->clk);
 if (VAR_8) {
  FUNC_2(VAR_6->dev, "[VPU] enable clock failed %d\n", VAR_8);
  return VAR_1;
 }
 VAR_7 = FUNC_4(VAR_6, VAR_3);
 if (VAR_7 & VAR_2) {
  FUNC_6(VAR_6);
 } else {
  FUNC_2(VAR_6->dev, "vpu watchdog timeout! 0x%x", VAR_7);
  FUNC_3(VAR_6->wdt.wq, &VAR_6->wdt.ws);
 }


 FUNC_5(VAR_6, 0x0, VAR_3);
 FUNC_0(VAR_6->clk);

 return VAR_0;
}
