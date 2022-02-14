
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panel_drv_data {int reset_gpio; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct panel_drv_data *VAR_0)
{
 if (!FUNC_0(VAR_0->reset_gpio))
  return;

 FUNC_1(VAR_0->reset_gpio, 1);
 FUNC_2(10);

 FUNC_1(VAR_0->reset_gpio, 0);

 FUNC_2(10);
 FUNC_1(VAR_0->reset_gpio, 1);

 FUNC_3(5000, 10000);
}
