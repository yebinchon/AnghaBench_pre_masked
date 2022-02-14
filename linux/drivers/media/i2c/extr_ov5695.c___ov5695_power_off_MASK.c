
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ov5695 {int supplies; int reset_gpio; int xvclk; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ov5695 *VAR_1)
{
 FUNC_0(VAR_1->xvclk);
 FUNC_1(VAR_1->reset_gpio, 1);
 FUNC_2(VAR_0, VAR_1->supplies);
}
