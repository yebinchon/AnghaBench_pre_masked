
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int npwm; int base; int * dev; int * ops; } ;
struct twl_pwmled_chip {TYPE_1__ chip; int mutex; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct twl_pwmled_chip* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct platform_device*,struct twl_pwmled_chip*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_4)
{
 struct twl_pwmled_chip *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(&VAR_4->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 if (FUNC_4()) {
  VAR_5->chip.ops = &VAR_2;
  VAR_5->chip.npwm = 2;
 } else {
  VAR_5->chip.ops = &VAR_3;
  VAR_5->chip.npwm = 1;
 }

 VAR_5->chip.dev = &VAR_4->dev;
 VAR_5->chip.base = -1;

 FUNC_1(&VAR_5->mutex);

 VAR_6 = FUNC_3(&VAR_5->chip);
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_2(VAR_4, VAR_5);

 return 0;
}
