
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ov5645 {int supplies; int xclk; int enable_gpio; int rst_gpio; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ov5645 *VAR_1)
{
 FUNC_1(VAR_1->rst_gpio, 1);
 FUNC_1(VAR_1->enable_gpio, 0);
 FUNC_0(VAR_1->xclk);
 FUNC_2(VAR_0, VAR_1->supplies);
}
