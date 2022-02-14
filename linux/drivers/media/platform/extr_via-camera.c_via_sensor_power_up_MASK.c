
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via_camera {int reset_gpio; int power_gpio; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct via_camera *VAR_0)
{
 FUNC_0(VAR_0->power_gpio, 1);
 FUNC_0(VAR_0->reset_gpio, 0);
 FUNC_1(20);
 FUNC_0(VAR_0->reset_gpio, 1);
 FUNC_1(20);
}
