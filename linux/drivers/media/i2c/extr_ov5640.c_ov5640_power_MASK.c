
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ov5640_dev {int pwdn_gpio; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct ov5640_dev *VAR_0, bool VAR_1)
{
 FUNC_0(VAR_0->pwdn_gpio, VAR_1 ? 0 : 1);
}
