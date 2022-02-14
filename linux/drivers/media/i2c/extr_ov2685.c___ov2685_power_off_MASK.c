
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ov2685 {int supplies; int reset_gpio; int xvclk; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(struct ov2685 *VAR_1)
{

 u32 VAR_2 = FUNC_2(512);

 FUNC_4(VAR_2, VAR_2 * 2);
 FUNC_0(VAR_1->xvclk);
 FUNC_1(VAR_1->reset_gpio, 1);
 FUNC_3(VAR_0, VAR_1->supplies);
}
