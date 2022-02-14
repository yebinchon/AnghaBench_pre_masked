
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_vcodec_pm {int dev; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct mtk_vcodec_pm *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0->dev);
 if (VAR_1)
  FUNC_0("pm_runtime_put_sync fail %d", VAR_1);
}
