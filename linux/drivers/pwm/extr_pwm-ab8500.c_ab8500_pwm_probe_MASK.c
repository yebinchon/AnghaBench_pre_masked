
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dev; int id; } ;
struct TYPE_2__ {int npwm; int base; int * ops; int * dev; } ;
struct ab8500_pwm_chip {TYPE_1__ chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 struct ab8500_pwm_chip* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (struct platform_device*,struct ab8500_pwm_chip*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_3)
{
 struct ab8500_pwm_chip *VAR_4;
 int VAR_5;





 VAR_4 = FUNC_1(&VAR_3->dev, sizeof(*VAR_4), VAR_1);
 if (VAR_4 == ((void*)0))
  return -VAR_0;

 VAR_4->chip.dev = &VAR_3->dev;
 VAR_4->chip.ops = &VAR_2;
 VAR_4->chip.base = VAR_3->id;
 VAR_4->chip.npwm = 1;

 VAR_5 = FUNC_3(&VAR_4->chip);
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_0(&VAR_3->dev, "pwm probe successful\n");
 FUNC_2(VAR_3, VAR_4);

 return 0;
}
