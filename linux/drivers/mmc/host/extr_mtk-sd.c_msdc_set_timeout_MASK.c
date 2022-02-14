
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct msdc_host {int timeout_ns; int timeout_clks; scalar_t__ base; TYPE_2__* dev_comp; TYPE_1__* mmc; } ;
struct TYPE_4__ {int clk_div_bits; } ;
struct TYPE_3__ {unsigned long actual_clock; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,int ,int*) ;
 int FUNC_1 (scalar_t__,int ,int) ;

__attribute__((used)) static void FUNC_2(struct msdc_host *VAR_5, u32 VAR_6, u32 VAR_7)
{
 u32 VAR_8, VAR_9;
 u32 VAR_10 = 0;

 VAR_5->timeout_ns = VAR_6;
 VAR_5->timeout_clks = VAR_7;
 if (VAR_5->mmc->actual_clock == 0) {
  VAR_8 = 0;
 } else {
  VAR_9 = 1000000000UL / VAR_5->mmc->actual_clock;
  VAR_8 = (VAR_6 + VAR_9 - 1) / VAR_9 + VAR_7;

  VAR_8 = (VAR_8 + (0x1 << 20) - 1) >> 20;
  if (VAR_5->dev_comp->clk_div_bits == 8)
   FUNC_0(VAR_5->base + VAR_0,
          VAR_1, &VAR_10);
  else
   FUNC_0(VAR_5->base + VAR_0,
          VAR_2, &VAR_10);

  VAR_8 = VAR_10 >= 2 ? VAR_8 * 2 : VAR_8;
  VAR_8 = VAR_8 > 1 ? VAR_8 - 1 : 0;
  VAR_8 = VAR_8 > 255 ? 255 : VAR_8;
 }
 FUNC_1(VAR_5->base + VAR_3, VAR_4, VAR_8);
}
