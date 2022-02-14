
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 TYPE_2__ VAR_2 ;
 int FUNC_2 (int *) ;

void FUNC_3(void)
{
 int VAR_3;

 FUNC_0("dss_runtime_put\n");

 VAR_3 = FUNC_2(&VAR_2.pdev->dev);
 FUNC_1(VAR_3 < 0 && VAR_3 != -VAR_1 && VAR_3 != -VAR_0);
}
