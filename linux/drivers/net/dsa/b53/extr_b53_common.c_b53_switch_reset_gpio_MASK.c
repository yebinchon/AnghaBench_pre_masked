
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b53_device {int reset_gpio; int current_page; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct b53_device *VAR_0)
{
 int VAR_1 = VAR_0->reset_gpio;

 if (VAR_1 < 0)
  return;



 FUNC_0(VAR_1, 0);
 FUNC_1(50);

 FUNC_0(VAR_1, 1);
 FUNC_1(20);

 VAR_0->current_page = 0xff;
}
