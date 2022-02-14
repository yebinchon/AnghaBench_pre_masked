
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ov5640_dev {int reset_gpio; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct ov5640_dev*,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct ov5640_dev *VAR_0)
{
 if (!VAR_0->reset_gpio)
  return;

 FUNC_0(VAR_0->reset_gpio, 0);


 FUNC_1(VAR_0, 0);
 FUNC_2(5000, 10000);
 FUNC_1(VAR_0, 1);
 FUNC_2(5000, 10000);

 FUNC_0(VAR_0->reset_gpio, 1);
 FUNC_2(1000, 2000);

 FUNC_0(VAR_0->reset_gpio, 0);
 FUNC_2(20000, 25000);
}
