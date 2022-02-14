
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcd_device {int dev; } ;
struct imxfb_info {int pwmr; scalar_t__ regs; scalar_t__ enabled; } ;


 scalar_t__ VAR_0 ;
 struct imxfb_info* FUNC_0 (int *) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct lcd_device *VAR_1, int VAR_2)
{
 struct imxfb_info *VAR_3 = FUNC_0(&VAR_1->dev);

 if (VAR_3->pwmr && VAR_3->enabled) {
  if (VAR_2 > 255)
   VAR_2 = 255;
  else if (VAR_2 < 0)
   VAR_2 = 0;

  VAR_3->pwmr &= ~0xff;
  VAR_3->pwmr |= VAR_2;

  FUNC_1(VAR_3->pwmr, VAR_3->regs + VAR_0);
 }

 return 0;
}
