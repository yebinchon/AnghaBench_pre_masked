
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lcd_device {int dummy; } ;
struct corgi_lcd {int power; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct corgi_lcd*) ;
 int FUNC_2 (struct corgi_lcd*) ;
 struct corgi_lcd* FUNC_3 (struct lcd_device*) ;

__attribute__((used)) static int FUNC_4(struct lcd_device *VAR_0, int VAR_1)
{
 struct corgi_lcd *VAR_2 = FUNC_3(VAR_0);

 if (FUNC_0(VAR_1) && !FUNC_0(VAR_2->power))
  FUNC_2(VAR_2);

 if (!FUNC_0(VAR_1) && FUNC_0(VAR_2->power))
  FUNC_1(VAR_2);

 VAR_2->power = VAR_1;
 return 0;
}
