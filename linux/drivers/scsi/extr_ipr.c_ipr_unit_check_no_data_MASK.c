
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipr_ioa_cfg {TYPE_1__* pdev; int errors_logged; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static void FUNC_1(struct ipr_ioa_cfg *VAR_0)
{
 VAR_0->errors_logged++;
 FUNC_0(&VAR_0->pdev->dev, "IOA unit check with no data\n");
}
