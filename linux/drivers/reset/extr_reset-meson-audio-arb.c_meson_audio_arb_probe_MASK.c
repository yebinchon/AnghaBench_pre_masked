
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {int owner; int of_node; int * ops; int nr_resets; } ;
struct meson_audio_arb_data {TYPE_1__ rstc; int regs; int clk; int reset_bits; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device*,int *) ;
 int FUNC_7 (struct device*,struct resource*) ;
 struct meson_audio_arb_data* FUNC_8 (struct device*,int,int ) ;
 int FUNC_9 (struct device*,TYPE_1__*) ;
 int FUNC_10 (struct platform_device*) ;
 int VAR_7 ;
 struct resource* FUNC_11 (struct platform_device*,int ,int ) ;
 int FUNC_12 (struct platform_device*,struct meson_audio_arb_data*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int ) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_8)
{
 struct device *VAR_9 = &VAR_8->dev;
 struct meson_audio_arb_data *VAR_10;
 struct resource *VAR_11;
 int VAR_12;

 VAR_10 = FUNC_8(VAR_9, sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  return -VAR_1;
 FUNC_12(VAR_8, VAR_10);

 VAR_10->clk = FUNC_6(VAR_9, ((void*)0));
 if (FUNC_2(VAR_10->clk)) {
  if (FUNC_3(VAR_10->clk) != -VAR_2)
   FUNC_5(VAR_9, "failed to get clock\n");
  return FUNC_3(VAR_10->clk);
 }

 VAR_11 = FUNC_11(VAR_8, VAR_4, 0);
 VAR_10->regs = FUNC_7(VAR_9, VAR_11);
 if (FUNC_2(VAR_10->regs))
  return FUNC_3(VAR_10->regs);

 FUNC_13(&VAR_10->lock);
 VAR_10->reset_bits = VAR_6;
 VAR_10->rstc.nr_resets = FUNC_0(VAR_6);
 VAR_10->rstc.ops = &VAR_7;
 VAR_10->rstc.of_node = VAR_9->of_node;
 VAR_10->rstc.owner = VAR_5;






 VAR_12 = FUNC_4(VAR_10->clk);
 if (VAR_12) {
  FUNC_5(VAR_9, "failed to enable arb clock\n");
  return VAR_12;
 }
 FUNC_14(FUNC_1(VAR_0), VAR_10->regs);


 VAR_12 = FUNC_9(VAR_9, &VAR_10->rstc);
 if (VAR_12) {
  FUNC_5(VAR_9, "failed to register arb reset controller\n");
  FUNC_10(VAR_8);
 }

 return VAR_12;
}
