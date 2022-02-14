
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ov7740 {scalar_t__ pwdn_gpio; int xvclk; scalar_t__ resetb_gpio; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct ov7740 *VAR_0, int VAR_1)
{
 int VAR_2;

 if (VAR_1) {
  VAR_2 = FUNC_1(VAR_0->xvclk);
  if (VAR_2)
   return VAR_2;

  if (VAR_0->pwdn_gpio)
   FUNC_2(VAR_0->pwdn_gpio, 0);

  if (VAR_0->resetb_gpio) {
   FUNC_3(VAR_0->resetb_gpio, 1);
   FUNC_4(500, 1000);
   FUNC_3(VAR_0->resetb_gpio, 0);
   FUNC_4(3000, 5000);
  }
 } else {
  FUNC_0(VAR_0->xvclk);

  if (VAR_0->pwdn_gpio)
   FUNC_2(VAR_0->pwdn_gpio, 0);
 }

 return 0;
}
