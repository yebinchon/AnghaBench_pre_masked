
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ wq; } ;
struct mtk_vpu {int clk; int vpu_mutex; TYPE_1__ wdt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 struct mtk_vpu* FUNC_5 (struct platform_device*) ;
 int VAR_2 ;
 int FUNC_6 (struct mtk_vpu*,int ) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_3)
{
 struct mtk_vpu *VAR_4 = FUNC_5(VAR_3);




 if (VAR_4->wdt.wq) {
  FUNC_3(VAR_4->wdt.wq);
  FUNC_2(VAR_4->wdt.wq);
 }
 FUNC_6(VAR_4, VAR_1);
 FUNC_6(VAR_4, VAR_0);
 FUNC_4(&VAR_4->vpu_mutex);
 FUNC_0(VAR_4->clk);

 return 0;
}
