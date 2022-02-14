
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct cxl {TYPE_1__* guest; } ;
struct TYPE_2__ {struct platform_device* pdev; } ;


 int FUNC_0 (struct cxl*) ;
 int FUNC_1 (struct platform_device*) ;

void FUNC_2(struct cxl *VAR_0)
{
 struct platform_device *VAR_1;

 VAR_1 = VAR_0->guest->pdev;
 FUNC_0(VAR_0);

 FUNC_1(VAR_1);
}
