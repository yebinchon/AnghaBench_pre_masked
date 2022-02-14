
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mmc_host {scalar_t__ doing_retune; } ;
struct meson_host {TYPE_1__* data; scalar_t__ regs; int mmc_clk; int mux_clk; } ;
struct TYPE_2__ {scalar_t__ adjust; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (unsigned int,unsigned int) ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,unsigned int) ;
 int FUNC_5 (struct meson_host*) ;
 int FUNC_6 (struct mmc_host*) ;
 struct meson_host* FUNC_7 (struct mmc_host*) ;
 int FUNC_8 (struct mmc_host*,int ,int *) ;
 unsigned int FUNC_9 (scalar_t__) ;
 int FUNC_10 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct mmc_host *VAR_3, u32 VAR_4)
{
 struct meson_host *VAR_5 = FUNC_7(VAR_3);
 unsigned int VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10;


 VAR_8 = FUNC_0(FUNC_3(VAR_5->mux_clk),
          FUNC_3(VAR_5->mmc_clk));

 VAR_6 = FUNC_9(VAR_5->regs + VAR_5->data->adjust);
 VAR_6 |= VAR_1;
 FUNC_10(VAR_6, VAR_5->regs + VAR_5->data->adjust);

 if (VAR_3->doing_retune)
  VAR_7 = FUNC_1(VAR_0, VAR_6) + 1;
 else
  VAR_7 = 0;

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  VAR_6 &= ~VAR_0;
  VAR_6 |= FUNC_2(VAR_0, (VAR_7 + VAR_9) % VAR_8);
  FUNC_10(VAR_6, VAR_5->regs + VAR_5->data->adjust);

  VAR_10 = FUNC_8(VAR_3, VAR_4, ((void*)0));
  if (!VAR_10) {
   FUNC_4(FUNC_6(VAR_3), "resampling delay: %u\n",
    (VAR_7 + VAR_9) % VAR_8);
   return 0;
  }
 }

 FUNC_5(VAR_5);
 return -VAR_2;
}
