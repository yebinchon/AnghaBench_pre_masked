
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_2__ {unsigned int npwm; int * pwms; } ;
struct kona_pwmc {TYPE_1__ chip; int clk; } ;


 int FUNC_0 (int ) ;
 struct kona_pwmc* FUNC_1 (struct platform_device*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct kona_pwmc *VAR_1 = FUNC_1(VAR_0);
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->chip.npwm; VAR_2++)
  if (FUNC_2(&VAR_1->chip.pwms[VAR_2]))
   FUNC_0(VAR_1->clk);

 return FUNC_3(&VAR_1->chip);
}
