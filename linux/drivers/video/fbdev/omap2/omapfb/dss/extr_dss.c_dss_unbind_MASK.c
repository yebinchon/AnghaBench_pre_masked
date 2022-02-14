
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ video2_pll; scalar_t__ video1_pll; } ;


 int FUNC_0 (int *,int *) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (struct platform_device*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;
 struct platform_device* FUNC_5 (struct device*) ;

__attribute__((used)) static void FUNC_6(struct device *VAR_2)
{
 struct platform_device *VAR_3 = FUNC_5(VAR_2);

 VAR_1 = 0;

 FUNC_0(&VAR_3->dev, ((void*)0));

 if (VAR_0.video1_pll)
  FUNC_3(VAR_0.video1_pll);

 if (VAR_0.video2_pll)
  FUNC_3(VAR_0.video2_pll);

 FUNC_2(VAR_3);

 FUNC_4(&VAR_3->dev);

 FUNC_1();
}
