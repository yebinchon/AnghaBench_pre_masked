
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct imxdi_dev {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,char const*) ;

__attribute__((used)) static void FUNC_1(struct imxdi_dev *VAR_0,
      const char *VAR_1)
{
 FUNC_0(&VAR_0->pdev->dev, "Please cycle the %s power supply in order to get the DryIce/RTC unit working again\n",
    VAR_1);
}
