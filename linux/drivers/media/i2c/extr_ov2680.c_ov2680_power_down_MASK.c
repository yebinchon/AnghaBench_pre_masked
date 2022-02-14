
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ov2680_dev {int reset_gpio; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct ov2680_dev *VAR_0)
{
 if (!VAR_0->reset_gpio)
  return;

 FUNC_0(VAR_0->reset_gpio, 1);
 FUNC_1(5000, 10000);
}
