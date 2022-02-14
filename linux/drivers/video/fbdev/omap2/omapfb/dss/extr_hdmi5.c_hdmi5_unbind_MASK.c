
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int pll; scalar_t__ audio_pdev; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct platform_device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;
 struct platform_device* FUNC_4 (struct device*) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_1, struct device *VAR_2, void *VAR_3)
{
 struct platform_device *VAR_4 = FUNC_4(VAR_1);

 if (VAR_0.audio_pdev)
  FUNC_2(VAR_0.audio_pdev);

 FUNC_1(VAR_4);

 FUNC_0(&VAR_0.pll);

 FUNC_3(&VAR_4->dev);
}
