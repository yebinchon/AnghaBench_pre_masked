
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ov7251 {int enable_gpio; int xclk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ov7251*) ;

__attribute__((used)) static void FUNC_3(struct ov7251 *VAR_0)
{
 FUNC_0(VAR_0->xclk);
 FUNC_1(VAR_0->enable_gpio, 0);
 FUNC_2(VAR_0);
}
