
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sunxi_mmc_host {TYPE_2__* cfg; int clk_output; int clk_sample; int mmc; scalar_t__ use_new_timings; } ;
struct mmc_ios {scalar_t__ timing; scalar_t__ bus_width; } ;
struct TYPE_4__ {TYPE_1__* clk_delays; } ;
struct TYPE_3__ {int output; int sample; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct sunxi_mmc_host *VAR_9,
       struct mmc_ios *VAR_10, u32 VAR_11)
{
 int VAR_12;


 if (VAR_9->use_new_timings)
  return 0;


 if (!VAR_9->cfg->clk_delays)
  return 0;


 if (VAR_11 <= 400000) {
  VAR_12 = VAR_5;
 } else if (VAR_11 <= 25000000) {
  VAR_12 = VAR_4;
 } else if (VAR_11 <= 52000000) {
  if (VAR_10->timing != VAR_3 &&
      VAR_10->timing != VAR_2) {
   VAR_12 = VAR_6;
  } else if (VAR_10->bus_width == VAR_1) {
   VAR_12 = VAR_8;
  } else {
   VAR_12 = VAR_7;
  }
 } else {
  FUNC_1(FUNC_2(VAR_9->mmc), "Invalid clock... returning\n");
  return -VAR_0;
 }

 FUNC_0(VAR_9->clk_sample, VAR_9->cfg->clk_delays[VAR_12].sample);
 FUNC_0(VAR_9->clk_output, VAR_9->cfg->clk_delays[VAR_12].output);

 return 0;
}
