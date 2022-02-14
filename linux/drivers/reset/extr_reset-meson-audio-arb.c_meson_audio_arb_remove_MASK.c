
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct meson_audio_arb_data {int clk; int lock; int regs; } ;


 int FUNC_0 (int ) ;
 struct meson_audio_arb_data* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct meson_audio_arb_data *VAR_1 = FUNC_1(VAR_0);


 FUNC_2(&VAR_1->lock);
 FUNC_4(0, VAR_1->regs);
 FUNC_3(&VAR_1->lock);

 FUNC_0(VAR_1->clk);

 return 0;
}
